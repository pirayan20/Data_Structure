#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T> > data) {
  //write your code here
  int i = 0;
  auto it = mData;
  while ((it+1) != end()){
    if (it - mData == data[i].first){
      *it = data[i].second;
      i++;
    } else {
      *it = *(it-i);
    }
    it++;
  }

}

#endif
