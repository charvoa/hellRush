//
// Edge.cpp for Edge in /home/antoinegarcia/rendu/hellRush/purgatory/etape3
//
// Made by Antoine Garcia
// Login   <antoinegarcia@epitech.net>
//
// Started on  Sat Nov 28 10:22:03 2015 Antoine Garcia
// Last update Sat Nov 28 10:25:31 2015 Antoine Garcia
//

#include "Edge.hh"

Edge::Edge(const char c)
{
  _c = c;
}

Edge::~Edge()
{}

bool	Edge::operator==(const Edge &edge) const
{
  return (_c == edge._c);
}

bool	Edge::operator!=(const Edge &edge) const
{
  return (_c != edge._c);
}

bool	Edge::operator>(const Edge &edge) const
{
  return (_c > edge._c);
}

bool	Edge::operator>=(const Edge &edge) const
{
  return (_c >= edge._c);
}

bool	Edge::operator<(const Edge &edge) const
{
  return (_c < edge._c);
}

bool	Edge::operator<=(const Edge &edge) const
{
  return (_c <= edge._c);
}

bool	Edge::operator()(const char c) const
{
  return (_c == c);
}

char	Edge::getChar() const
{
  return _c;
}
