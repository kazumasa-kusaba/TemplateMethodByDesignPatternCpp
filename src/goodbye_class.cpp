#include "goodbye_class.hpp"

void Goodbye::printUpperFrame()
{
  int lenfth = content.length() + leftFrameElement.length() + rightFrameElement.length();

  for (int i = 0; i < lenfth; i++) {
    std::cout << upperFrameElement;
  }
  std::cout << std::endl;
}

void Goodbye::printLeftFrame()
{
  std::cout << leftFrameElement;
}

void Goodbye::printRightFrame()
{
  std::cout << rightFrameElement << std::endl;
}

void Goodbye::printBottomFrame()
{
  int lenfth = content.length() + leftFrameElement.length() + rightFrameElement.length();

  for (int i = 0; i < lenfth; i++) {
    std::cout << bottomFrameElement;
  }
  std::cout << std::endl;
}

void Goodbye::printGreeting()
{
  std::cout << content;
}

