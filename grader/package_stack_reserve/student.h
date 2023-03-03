#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int n = mCap - mSize;
    int m = other.mCap - other.mSize;
    if (m < n) return 1;
    else if (m == n) return 0;
    else return -1;
}

#endif
