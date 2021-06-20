#ifndef GREET_CLASS_H_
#define GREET_CLASS_H_

class Greet {
 public:
  virtual ~Greet() {};
  void greet();

 private:
  virtual void printUpperFrame() = 0;
  virtual void printLeftFrame() = 0;
  virtual void printRightFrame() = 0;
  virtual void printBottomFrame() = 0;
  virtual void printGreeting() = 0;
};

#endif

