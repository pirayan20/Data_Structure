#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "list.h"

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  for (iterator it = begin(); it!=end(); it++){
    if (it.ptr->data == value){
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;
      delete it.ptr;
      mSize--;
    }
  }
}

#endif
