//
// Function.hpp for  in /home/nicolaschr/rendu/hellRush
//
// Made by Nicolas Charvoz
// Login   <nicolaschr@epitech.net>
//
// Started on  Tue Nov 24 00:12:08 2015 Nicolas Charvoz
// Last update Tue Nov 24 00:12:46 2015 Nicolas Charvoz
//

#ifndef FUNCTION_HPP_
# define FUNCTION_HPP_

template < typename T >

class Function;

template <typename T, typename U>

class Function < T(U) >
{
public:

  Function(T);
  Function(T  (*f)(U)) {
    _func = f;
  }
  ~Function(){}

  Function operator=(T (*t)(U))
  {
    _func = t;
    return this;
  }

  T operator()(U t)
  {
    return _func(t);
  }

protected:
  typedef T  (*type)(U);
  type _func;
};

#endif
