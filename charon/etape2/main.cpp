//
// main.cpp for  in /home/nicolaschr/rendu/hellRush
//
// Made by Nicolas Charvoz
// Login   <nicolaschr@epitech.net>
//
// Started on  Tue Nov 24 00:13:23 2015 Nicolas Charvoz
// Last update Tue Nov 24 00:13:59 2015 Nicolas Charvoz
//

#include "Function.hpp"
#include <iostream>
#include <string>


int test1(char c)
{
  std::cout << "test 1 : " <<  c << std::endl;
}

int main(int ac, char **av)
{
  (void) ac;
  (void) av;
  Function<int(char)> firstTest = &test1;

  firstTest('c');
  return (0);
}
