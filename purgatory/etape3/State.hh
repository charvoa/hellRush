//
// State.hh for State in /home/antoinegarcia/rendu/hellRush/purgatory/etape3
//
// Made by Antoine Garcia
// Login   <antoinegarcia@epitech.net>
//
// Started on  Sat Nov 28 10:25:46 2015 Antoine Garcia
// Last update Sat Nov 28 11:38:47 2015 Antoine Garcia
//

#ifndef _STATE_HH_
# define _STATE_HH_

#include <string>
#include <map>
#include "Edge.hh"

class	State
{
  std::string	_name;
  bool		_final;
  std::map<std::string, Edge>	_links;
  State(const std::string&, bool);
public:
  State();
  ~State(){};
  static State	create(bool final = false);
  void		setFinal();
  void		addLink(const Edge&, const State&);
  bool	operator==(const State &) const;
  bool	operator!=(const State &) const;
  const std::string&	getName() const;
  bool			canContinue(char c);
  bool			isFinal();
};

#endif
