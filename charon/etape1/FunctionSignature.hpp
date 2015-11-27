//
// FunctionSignature.hh for FunctionSignature in /home/antoinegarcia/rendu/hellRush/charon/etape1
//
// Made by Antoine Garcia
// Login   <antoinegarcia@epitech.net>
//
// Started on  Fri Nov 27 12:07:56 2015 Antoine Garcia
// Last update Fri Nov 27 12:19:37 2015 Antoine Garcia
//

#ifndef FUNCTION_SIGNATURE_HH_
# define FUNCTION_SIGNATURE_HH_

template <typename T>
struct FunctionSignature
{
  typedef T	type;
};

template <typename R, typename ARG1>
struct FunctionSignature< R(ARG1) >
{
  typedef R	(*type)(ARG1);
};

template <typename R, typename ARG1, typename ARG2>
struct FunctionSignature < R(ARG1, ARG2) >
{
  typedef R	(*type)(ARG1,ARG2);
};

template <typename R, typename ARG1, typename ARG2, typename ARG3>
struct FunctionSignature < R(ARG1, ARG2, ARG3) >
{
  typedef R	(*type)(ARG1,ARG2,ARG3);
};

template <typename R, typename ARG1, typename ARG2, typename ARG3, typename ARG4>
struct FunctionSignature < R(ARG1, ARG2, ARG3, ARG4) >
{
  typedef R	(*type)(ARG1,ARG2,ARG3,ARG4);
};

#endif
