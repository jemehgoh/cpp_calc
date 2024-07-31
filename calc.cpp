#include <string>
#include <iostream>
#include "num.hpp"


int main()
{
   Number test = Number("104358", 6);
   std::cout << test.to_string();
}