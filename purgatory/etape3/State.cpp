//
// State.cpp for State in /home/antoinegarcia/rendu/hellRush/purgatory/etape3
//
// Made by Antoine Garcia
// Login   <antoinegarcia@epitech.net>
//
// Started on  Sat Nov 28 10:41:41 2015 Antoine Garcia
// Last update Sat Nov 28 11:51:07 2015 Antoine Garcia
//

#include <iostream>
#include <sstream>
#include "State.hh"

State::State(const std::string& name, bool final)
{
  _name = name;
  _final = final;
}

State::State() {}


State	State::create(bool final)
{
  static int	nb = 0;
  std::stringstream	ss;

  ss << nb;
  nb++;
  return(State(std::string("S"+ss.str()), final));
}

bool	State::operator==(const State &state) const
{
  return (_name == state._name);
}

bool	State::operator!=(const State &state) const
{
  return (_name != state._name);
}

void	State::setFinal()
{
  _final = true;
}

bool	State::isFinal()
{
  return _final;
}

void	State::addLink(const Edge &edge, const State &state)
{
  _links[state._name] = edge;
}

const std::string&	State::getName() const
{
  return _name;
}

bool	State::canContinue(char c)
{
  return (_links[_name](c));
}
