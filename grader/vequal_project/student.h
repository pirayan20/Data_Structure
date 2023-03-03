#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator==(const vector<T> &other) const {
  //write your code only in this function
  if (mSize != other.size()) return false;
  for (size_t i=0; i<other.size(); i++){
    if (mData[i] != other[i]) return false;
  } 
  return true;
}

#endif
