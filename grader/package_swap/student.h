#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other) {
  // your code here
  using std::swap;
  swap(mCap,other.mCap);
  swap(mSize,other.mSize);
  swap(mData,other.mData);
}

#endif
