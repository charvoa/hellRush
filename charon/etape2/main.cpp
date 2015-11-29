//
// main.cpp for  in /home/nicolaschr/rendu/hellRush
//
// Made by Nicolas Charvoz
// Login   <nicolaschr@epitech.net>
//
// Started on  Tue Nov 24 00:13:23 2015 Nicolas Charvoz
// Last update Sun Nov 29 19:47:55 2015 Nicolas Charvoz
//

#include <iostream>
#include "Function.hpp"
#include <string>
#include <boost/bind.hpp>


int func(const std::string& toto)
{
  std::cout << toto << std::endl;
  return 0;
}

int func2(const std::string& toto, int i)
{
  std::cout << toto << "et un int : " << i << std::endl;
  return 0;
}

int func3(const std::string& toto, int i, const std::string& str)
{
  std::cout << toto << "et un int : " << i << str << std::endl;
  return 0;
}

int func4(const std::string& toto, int i, const std::string& str, const std::string& str2)
{
  std::cout << toto << "et un int : " << i << str << str2 << std::endl;
  return 0;
}

class Toto {
public:
  Toto() {}

  char operator()(char c) {
    std::cout << "Ça marche sur un objet callable : " << c << std::endl;
  }

private:

};

int main(int ac, char **av)
{
  Function<int (const std::string&)> f = &func;
  f("coucou");

  Toto toto;
  Function< char (char) > t = toto;
  toto('c');

  Function<int (const std::string&)> ft = boost::bind(&func, _1);
  ft("Ça marche même avec un objet de type boost::bind !");
  return 0;
}
