#include <iostream>
using namespace std;

// this version of pq will decrease the time of using POP and TOP. But 
// the function push has to keep the vector sorted and still slow
namespace CP{
    template <typename T>
    class priority_queue{
        protected:
            vector<T> v;

        public:
            bool empty() {
                return v.empty();
            }

            size_t size(){
                return v.size();
            }

            T& top(){
                return v[v.size()-1];
            }

            void pop(){
                v.erase(v.end()-1);
            }

            void push(const T& element){
                v.push_back(element);
                sort(v.begin(),v.end());
            }
    };
}