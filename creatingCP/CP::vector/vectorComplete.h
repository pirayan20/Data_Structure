#include <iostream>
using namespace std;

namespace CP{
    template <typename T>
    class vector {
        protected:
            T *mData;
            size_t mCap;
            size_t mSize;

            // used to check if the index is out of range or <0
            void rangeCheck(int n ){
                if (n < 0 || (size_t)n >= mSize){
                    throw std::out_of_range("index out of range");
                }
            }

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
            vector(){
                int cap = 1;
                mData = new T[cap]();
                mCap = cap;
                mSize = 0;
            }

            vector(size_t cap){
                mData = new T[cap]();
                mCap = cap;
                mSize = cap;
            }

            // ---------- copy consturctor --------
            vector(const vector<T>& other ){
                mData = new T[other.capacity()]();
                mCap = other.capacity();
                mSize = other.size();
                for (size_t i=0; i<other.size(); i++){
                    mData[i] = other[i];
                }
            }

            // ---------- overloading assignment operator --------
            vector<T>& operator=(vector<T> other){
                using std::swap;
                swap(this->mSize, other.mSize);
                swap(this->mCap, other.mCap);
                swap(this->mData, other.mData);
                return *this;
            }

            // ----------- destructor -----------
            // called automatically when the variable is out of its scope
            ~vector(){
                delete[] mData;
            }

            // ---------- iterator ------------
            typedef T* iterator;
            iterator begin(){
                return &mData[0];
            }

            iterator end(){
                return begin()+mSize;
            }

            // ----------- accessing data ---------------
            T& at(int index){
                rangeCheck(index);
                return mData[index];
            }

            T& operator[](int index){
                return mData[index];
            }

            T& operator[](int index) const{ // T& is return by reference
                return mData[index];
            }

            // ----------- add,remove data -------------
            iterator insert(iterator it, const T&element){
                size_t pos = it-begin();
                ensureCapacity(mSize + 1);
                for (size_t i=mSize; i> pos; i++){
                    mData[i] = mData[i-1];
                }
                mData[pos] = element;
                mSize++;
                return begin()+pos;
            }

            void erase(iterator it){
                while((it+1) != end()){
                    *it = *(it+1);
                    it++;
                }
                mSize--;
            }

            void push_back(const T& element){
                insert(end(),element);
            }   

            void pop_back(){
                mSize--;
            }   

            // --------- getter and empty ----------
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