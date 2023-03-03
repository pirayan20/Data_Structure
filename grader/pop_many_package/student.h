#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  K = (K < mSize)? K : mSize;
  mSize -= K;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  std::stack<T> a;
  K = (K < mSize)? K : mSize;
  for (size_t i=mSize-K; i!=mSize; i++){
    a.push(mData[i]);
  }
  mSize-=K;
  return a;
  //don't forget to return an std::stack
}

#endif
