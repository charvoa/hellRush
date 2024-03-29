//
// Matcher.cpp for Matcher in /home/antoinegarcia/rendu/hellRush/purgatory/etape3
//
// Made by Antoine Garcia
// Login   <antoinegarcia@epitech.net>
//
// Started on  Sat Nov 28 11:13:58 2015 Antoine Garcia
// Last update Sun Nov 29 07:01:43 2015 Antoine Garcia
//

#include <sstream>
#include <iostream>
#include "Matcher.hh"

Matcher::Matcher(FSA &fsa):_fsa(fsa)
{}

bool	Matcher::find(const std::string &str)
{
  int	nb;

  retunr (find(str, nb));
}

bool	Matcher::find(const std::string &str, int &i)
{
  i = 0;
  std::cout << "Matching launch" << std::endl;
  std::string	token;
  int		currentState = 0;
  int	j = 0;

  while(j < str.size())
    {
      Edge      edge(str[j]);
      std::stringstream	ss;

      ss << currentState;
      if(_fsa[std::string("S" + ss.str())].canContinue(edge.getChar()))
	{
	  token += edge.getChar();
	  if (_fsa[std::string("S" + ss.str())].isFinal())
	    {
	      std::cout << token << std::endl;
	      currentState = 0;
	      i++;
	    }
	  else{
	    currentState++;
	  }
	  j++;
	}
      else
	{
	  std::cout << "ERROR" << std::endl;
	  currentState = 0;
	  token.clear();
	  j++;
	}
    }
  if (i > 0)
    return (true);
  return (false);
}

void	Matcher::setMatcherString(const std::string &str)
{
  State  state = State::create(false);
  _fsa.addState(state);
  for (int i = 0; i < str.size(); i++)
    {
      if (i == str.size() - 1)
	state.setFinal();
      Edge	edge(str[i]);
      state.addLink(edge, state);
      _fsa.addState(state);
      if (i != str.size() - 1)
	state = State::create(false);
    }
}
