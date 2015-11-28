//
// Edge.hh for Edge in /home/antoinegarcia/rendu/hellRush/purgatory/etape3
//
// Made by Antoine Garcia
// Login   <antoinegarcia@epitech.net>
//
// Started on  Sat Nov 28 10:18:55 2015 Antoine Garcia
// Last update Sat Nov 28 11:09:31 2015 Antoine Garcia
//

#ifndef _EDGE_HH_
# define _EDGE_HH_

class	Edge
{
  char	_c;
public:
  Edge(){};
  Edge(const char);
  ~Edge();
  bool  operator==(const Edge &) const;
  bool	operator!=(const Edge &) const;
  bool	operator>(const Edge &) const;
  bool	operator>=(const Edge &) const;
  bool	operator<(const Edge &) const;
  bool	operator<=(const Edge &) const;
  bool	operator()(const char) const;
  char	getChar() const;
};

#endif
