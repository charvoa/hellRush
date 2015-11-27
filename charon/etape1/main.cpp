#include "FunctionSignature.hpp"

#include <iostream>
#include <string>

void	test1(const std::string &str)
{
  std::cout << "TEST 1 : " << str << std::endl;
}

void	test2(const std::string &str, int test)
{
  std::cout << "TEST 2 : " << str << test << std::endl;
}

void	test3(const std::string &str, int test, int b)
{
  std::cout << "TEST 3 : " << str << test << b << std::endl;
}

void	test4(const std::string &str, int test, int b, const std::string &i)
{
  std::cout << "TEST 4 : " << str << test << b << i << std::endl;
}
int	main()
{
  FunctionSignature<void (const std::string &)>::type f = &test1;
  f("michel");
  FunctionSignature<void (const std::string &, int)>::type g = &test2;
  g("michel", 2);
  FunctionSignature<void (const std::string &, int, int)>::type h = &test3;
  h("Michel", 3, 4);
  FunctionSignature<void (const std::string &, int, int, const std::string&)>::type i = &test4;
  i("Michel",4,5,"Bresil");
}
