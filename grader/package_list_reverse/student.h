#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include "list.h"

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  while (a != b || a == b++){
    node *tmpFront = a.ptr;
    node *tmpBack = b.ptr;

    tmpFront->prev->next = tmpBack;
    tmpFront->next->prev = tmpBack;
    tmpBack->prev->next = tmpFront;
    tmpBack->next->prev = tmpFront;

    tmpFront->next = tmpBack->next;
    tmpFront->prev = tmpBack->prev;
    tmpBack->next = tmpFront->next;
    tmpBack->prev = tmpFront->prev;

    a++;
    b--;
  }

}

#endif
