#include "hello_class.hpp"

#include <iostream>

void Hello::printUpperFrame()
{
  int lenfth = content.length() + leftFrameElement.length() + rightFrameElement.length();

  for (int i = 0; i < lenfth; i++) {
    std::cout << upperFrameElement;
  }
  std::cout << std::endl;
}

void Hello::printLeftFrame()
{
  std::cout << leftFrameElement;
}

void Hello::printRightFrame()
{
  std::cout << rightFrameElement << std::endl;
}

void Hello::printBottomFrame()
{
  int lenfth = content.length() + leftFrameElement.length() + rightFrameElement.length();

  for (int i = 0; i < lenfth; i++) {
    std::cout << bottomFrameElement;
  }
  std::cout << std::endl;
}

void Hello::printGreeting()
{
  std::cout << content;
}

