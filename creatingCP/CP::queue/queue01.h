#include <iostream>
#include <vector>
using namespace std;

namespace CP{
    template <typename T>
    class queue{
        protected:
            std::vector<T>v;
        public:
            // constructor
            queue(): v(){ }
            // capacity function
            bool empty() const{
                return v.empty();
            }

            size_t size() const {
                return v.size();
            }

            // access
            const T& front() const {
                return v[0];
            }
            
            const T& back() const {
                return v.back();
            }
            // modifier
            void push(const T& element) {
                v.push_back(element);
            }

            void pop(){
                v.erase(v.begin());
            }
    };
}