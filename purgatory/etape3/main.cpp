#include "Matcher.hh"
#include <iostream>

int	main(int ac, char **av)
{
  FSA	fsa;
  Matcher	matcher(fsa);
  int	i;
  matcher.setMatcherString("mechant");
  matcher.find("mechantmechant",i);
  std::cout << "Found : " << i << std::endl;
}
