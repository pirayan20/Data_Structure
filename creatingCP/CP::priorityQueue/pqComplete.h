#include <iostream>
using namespace std;

namespace CP{
    template <typename T, typename Comp = std::less<T> >
    class priority_queue{
        protected:
            T *mData;
            size_t mSize;
            size_t mCap;
            Comp mLess;

            void expand(size_t capacity){
                T *arr = new T[capacity]();
                for (size_t i=0; i< mSize; i++){
                    arr[i] = mData[i];
                }  
                delete [] mData;
                mData = arr;
            }

            void fixUp(size_t idx){
                T temp = mData[idx];
                while (idx > 0){
                    size_t p = (idx-1) / 2;
                    if (mLess(temp,mData[p])) break;
                    mData[idx] = mData[p];
                    idx = p;
                }
                mData[idx] = temp;
            }

            void fixDown(size_t idx){
                T temp = mData[idx];
                size_t c;
                while ((c = 2 * idx + 1) < mSize){
                    if (c + 1 < mSize && mLess(mData[c],mData[c+1])) c++;
                    if (mLess(mData[c],temp)) break;
                    mData[idx] = mData[c];
                    idx = c;
                }
                mData[idx] = temp;
            }

        public:
            priority_queue(const Comp& c = Comp()):
                mData(new T[1]()),
                mCap(1),
                mSize(0),
                mLess(c) 
                {}
            
            priority_queue(priority_queue<T,Comp> &a):
                mData(new T[a.mCap]),
                mCap(a.mCap),
                mSize(a.mSize),
                mLess(a.mLess) 
                {
                    for (size_t i=0; i<a.mCap; i++){
                        mData[i] = a.mData[i];
                    }
                }

            // a better method of constructing a pq
            priority_queue(std::vector<T> &v, const Comp &c = Comp()):
                mData(new T[v.size()]()),
                mCap(v.size()),
                mSize(v.size()),
                mLess(c)
                {
                    for (size_t i=0; i<mSize; i++) mData[i] = v[i];
                    for (int i = mSize/2- 1;i>0;i--) fixDown(i);
                }

            ~priority_queue(){
                delete [] mData;
            }

            priority_queue<T,Comp>& operator=(priority_queue<T,Comp> other){
                using std::swap;
                swap(mSize,other.mSize);
                swap(mCap,other.mCap);
                swap(mData, other.mData);
                swap(mLess, other.mLess);
                return *this;
            }

            void push(const T& element){
                if (mSize + 1 > mCap){
                    expand(mCap*2);
                }
                mData[mSize] = element;
                mSize++;
                fixUp(mSize-1);
            }

            void pop(){
                mData[0] = mData[mSize-1];
                mSize--;
                fixDown(0);
            }
    };

}