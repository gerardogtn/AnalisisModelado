// Copyright 2016 Gerardo Teruel
#ifndef SRC_CLONABLE_CLONEABLE_H_
#define SRC_CLONABLE_CLONEABLE_H_

template <typename T>
class Cloneable {
 public:
  virtual T* clone() = 0;
};

#endif  // SRC_CLONEABLE_CLONEABLE_H_
