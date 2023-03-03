#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include "list.h"

template <typename T>
void CP::list<T>::shift_left() {
  // your code here
  node *tmp = mHeader->next;
  node *last = mHeader->prev;
  mHeader->next = mHeader->next->next;
  mHeader->prev = tmp;
  mHeader->next->prev = mHeader;
  tmp->next = mHeader;
  tmp->prev = last;
  last->next = tmp;

}

#endif
