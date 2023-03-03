#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "list.h"
#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  while (a != b) {
    if (*a == value) {
      node *tmp = a.ptr;
      a++;

      tmp->prev->next = tmp->next;
      tmp->next->prev = tmp->prev;
      tmp->next = output.mHeader->next;
      tmp->prev = output.mHeader;
      output.mHeader->next->prev = tmp;
      output.mHeader->next = tmp;
      output.mSize++;
      this->mSize--;
    } else {
      a++;
    }
  }

}

#endif
