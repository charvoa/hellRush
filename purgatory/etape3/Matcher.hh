//
// Matcher.hh for Matcher in /home/antoinegarcia/rendu/hellRush/purgatory/etape3
//
// Made by Antoine Garcia
// Login   <antoinegarcia@epitech.net>
//
// Started on  Sat Nov 28 11:10:50 2015 Antoine Garcia
// Last update Sun Nov 29 07:01:01 2015 Antoine Garcia
//

#ifndef _MATCHER_HH_
# define _MATCHER_HH_

#include "FSA.hh"

class	Matcher
{
  FSA	_fsa;
public:
  explicit	Matcher(FSA &);
  ~Matcher(){};
  bool	find(const std::string &);
  bool	find(const std::string &, int &);
  void	setMatcherString(const std::string &);
};


#endif
