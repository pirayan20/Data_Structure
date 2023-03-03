#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  ensureCapacity(mSize+1);
  pos = mSize - pos;
  for (size_t i = mSize; i > pos; i--){
    mData[i] = mData[i-1];
  }
  mData[pos] = value;
  mSize++;
}

#endif
