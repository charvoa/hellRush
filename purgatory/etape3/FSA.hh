//
// FSA.hh for FSA in /home/antoinegarcia/rendu/hellRush/purgatory/etape3
//
// Made by Antoine Garcia
// Login   <antoinegarcia@epitech.net>
//
// Started on  Sat Nov 28 10:52:26 2015 Antoine Garcia
// Last update Sat Nov 28 11:05:01 2015 Antoine Garcia
//

#ifndef _FSA_HH_
#define _FSA_HH_

#include "State.hh"
class	FSA
{
  std::map<std::string, State> _states;
  std::string			_initial;
public:
  FSA();
  ~FSA(){};
  void	addState(const State &);
  void	initialState(const State &);
  State	&operator[](const std::string &name);
};

#endif
