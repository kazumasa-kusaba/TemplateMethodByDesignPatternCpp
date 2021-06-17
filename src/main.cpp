#include <iostream>

#include "greet_class.hpp"
#include "hello_class.hpp"
#include "goodbye_class.hpp"

int main(void)
{
  Greet* hello = new Hello();
  Greet* goodbye = new Goodbye();

  hello->greet();
  goodbye->greet();

  delete hello;
  delete goodbye;

  return 0;
}