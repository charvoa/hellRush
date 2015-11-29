//
// Function.hpp for  in /home/nicolaschr/rendu/hellRush
//
// Made by Nicolas Charvoz
// Login   <nicolaschr@epitech.net>
//
// Started on  Tue Nov 24 00:12:08 2015 Nicolas Charvoz
// Last update Sun Nov 29 19:50:29 2015 Nicolas Charvoz
//

#ifndef FUNCTION_HPP_
#define FUNCTION_HPP_

template <class T>

class Function;

template<class T, class U>

class Function <T(U)>
{
private:
  typedef T (*type)(U);
  type _func;

public:
  Function() : _other(0) {}
  Function(T (*p)(U)) : _func(p), _other(0) {}

  ~Function() {
    if (_other)
      delete _other;
  }

  Function(Function<T> &f) {
    this = f;
  }

  Function operator=(Function<T> &f)
  {
    this->_func = f.func;
    this->_other = f._other;
    return this;
  }

  Function operator=(T (*t)(U)) {
    _func = t;
    return this;
  }

  class Herited
  {
  public:
    virtual T operator()(const U& t) = 0;
    virtual ~Herited() {}
  };

  template <class I>

  class Reserve : public Herited
  {

  public:
    Reserve(const I& obj) : _obj(new I(obj)) {}
    ~Reserve() {
      if (_obj) delete _obj;
    }

    virtual T operator()(const U& t)
    {
      if (_obj)
	return _obj->operator()(t);
    }

  private:

    I *_obj;
  };

  template < class I >

  Function(const I& obj)
  {
    _other = new Reserve<I>(obj);
  }

  T operator()(U t){
    if (_other)
      return _other->operator()(t);
    return _func(t);
  }

private:
  Herited*_other;

};

#endif
