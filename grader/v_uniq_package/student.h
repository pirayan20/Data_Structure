#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <unordered_set>
#include <set>

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::unordered_set<T> s;
  size_t current = 0;
  for(size_t i = 0; i < mSize; i++){
      if(s.find(mData[i]) == s.end()){
          s.insert(mData[i]);
          mData[current] = mData[i];
          current++;
      }
  }
  mSize = current;
}

#endif
