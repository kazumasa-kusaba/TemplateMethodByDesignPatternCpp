#ifndef HELLO_CLASS_H_
#define HELLO_CLASS_H_

#include <iostream>

#include "greet_class.hpp"

class Hello : public Greet {
 private:
  const std::string upperFrameElement = "*";
  const std::string leftFrameElement = "*";
  const std::string rightFrameElement = "*";
  const std::string bottomFrameElement = "*";
  const std::string content = "Hello!";
  void printUpperFrame();
  void printLeftFrame();
  void printRightFrame();
  void printBottomFrame();
  void printGreeting();
};

#endif

