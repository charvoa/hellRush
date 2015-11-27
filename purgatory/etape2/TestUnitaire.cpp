//
// TestUnitaire.cpp for  in /home/nicolaschr/rendu/hellRush/purgatory/etape1
//
// Made by Nicolas Charvoz
// Login   <nicolaschr@epitech.net>
//
// Started on  Tue Nov 24 18:01:59 2015 Nicolas Charvoz
// Last update Tue Nov 24 18:04:28 2015 Nicolas Charvoz
//

#include "Machine.hpp"

void printAction(eAction act)
{
  if (act == MA)
    std::cout << "MOOVE APEND" << std::endl;
  else if (act == HR)
    std::cout << "HALT RESET" << std::endl;
  else
    std::cout << "STATE_ERROR" << std::endl;

}

void checkCompare(const std::string& reference, char *entree)
{
  int i;
  eState etat = S0;
  eState       etatTemp;
  int alphaPos;

  for (i = 0; entree[i]; i++)
    {
      std::cout << "token read " << entree[i] << std::endl;
      alphaPos = reference.find(entree[i]);
      etatTemp = gStateTable[etat][alphaPos];
      std::cout << "etat suivant = " << etatTemp << std::endl;
      if (etatTemp == STATE_ERROR)
	std::cout << "State error" << std::endl;
      else
	{
	  printAction(gActionTable[etat][alphaPos]);
	  std::cout << "passage a l etat " << etatTemp << std::endl;
	  etat = etatTemp;
	}
    }
}

int main(int ac, char **av)
{
  std::string alpha("mechant");
  if (ac > 1)
    checkCompare(alpha, av[1]);
}
