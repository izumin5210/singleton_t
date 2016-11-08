//
// Created by Masayuki IZUMI on 7/12/16.
//

#ifndef SINGLETONT_SINGLETON_HPP
#define SINGLETONT_SINGLETON_HPP

namespace singleton_t {

template <class T>
class Singleton {
public:
  static T& get() {
    static ptr_type ptr(createInstance());
    return getReference(ptr);
  }


protected:
  Singleton() {}


private:
  typedef std::unique_ptr<T> ptr_type;

  Singleton(const Singleton &) = delete;
  Singleton& operator=(const Singleton &) = delete;
  Singleton(Singleton &&) = delete;
  Singleton& operator=(Singleton &&) = delete;

  inline static T *createInstance() {
    return new T();
  }

  inline static T &getReference(const ptr_type &ptr) {
    return *ptr;
  }
};

}

#endif //SINGLETONT_SINGLETON_HPP
