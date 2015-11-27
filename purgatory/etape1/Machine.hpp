//
// Machine.hpp for  in /home/nicolaschr/rendu/hellRush/purgatory/etape1
//
// Made by Nicolas Charvoz
// Login   <nicolaschr@epitech.net>
//
// Started on  Tue Nov 24 17:56:34 2015 Nicolas Charvoz
// Last update Fri Nov 27 12:48:59 2015 Antoine Garcia
//

#ifndef MACHINE_HPP_
# define MACHINE_HPP_

# include <iostream>

#define STATE_MAX 8
#define EDGE_MAX 8
enum eState
  {
    S0,
    S1,
    S2,
    S3,
    S4,
    S5,
    S6,
    S7,
    STATE_ERROR
  };

enum eAction
  {
    MA,
    HR,
    ACTION_ERROR
  };

extern eState gStateTable[8][8];
extern eAction gActionTable[8][8];

#endif
