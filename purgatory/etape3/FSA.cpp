//
// FSA.cpp for FSA in /home/antoinegarcia/rendu/hellRush/purgatory/etape3
//
// Made by Antoine Garcia
// Login   <antoinegarcia@epitech.net>
//
// Started on  Sat Nov 28 11:01:47 2015 Antoine Garcia
// Last update Sat Nov 28 11:09:51 2015 Antoine Garcia
//

#include "FSA.hh"

FSA::FSA(){}

void	FSA::addState(const State &state)
{
  _states[state.getName()] = state;
}

void	FSA::initialState(const State &state)
{
  _initial = state.getName();
}

State&	FSA::operator[](const std::string &name)
{
  return(_states[name]);
}
