#include <iostream>
using namespace std;

namespace CP{
    template <typename T>
    class stack {
        protected:
            T *mData;
            size_t mCap;
            size_t mSize;

            void expand(size_t capacity){
                T *arr = new T[capacity]();
                for (size_t i=0; i< mSize; i++){
                    arr[i] = mData[i];
                }  
                delete [] mData;
                mData = arr;
                mCap = capacity;
            }

            void ensureCapacity(size_t capacity){
                if (capacity > mCap){
                    size_t s = (capacity > 2*mCap) ? capacity : 2*mCap;
                    expand(s);
                }
            }

        public:
            // -------- constructor -----------
            stack(){
                int cap = 1;
                mData = new T[cap]();
                mCap = cap;
                mSize = 0;
            }
            // ---------- copy consturctor --------
            stack(const stack<T>& other ){
                mData = new T[other.capacity()]();
                mCap = other.capacity();
                mSize = other.size();
                for (size_t i=0; i<other.size(); i++){
                    mData[i] = other[i];
                }
            }

            // ---------- overloading assignment operator --------
            stack<T>& operator=(stack<T> other){
                using std::swap;
                swap(this->mSize, other.mSize);
                swap(this->mCap, other.mCap);
                swap(this->mData, other.mData);
                return *this;
            }

            // ----------- destructor -----------
            // called automatically when the variable is out of its scope
            ~stack(){
                delete[] mData;
            }

            // ----------- accessing data ---------------
            const T& top() const {
                return mData[mSize-1];
            }

            // ----------- add,remove data -------------

            void push(const T& element){
                T *arr = new T[mSize+1]();
                arr[0] = element;
                for (int i=0; i< mSize; i++){
                    arr[i+1] = mData[i];
                }
                delete [] mData;
                mData = arr;
            }   

            void pop(){
                mSize--;
            }   

            // --------- capacity function ----------
            bool empty() const{
                return mSize == 0;
            }

            size_t size() const{
                return mSize;
            }

            size_t capacity() const{
                return mCap;
            }
    };
}