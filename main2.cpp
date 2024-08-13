#include <iostream>
#include <functional>

std::function<void(void)> closureWrapper()
{
    int y = 10;
    return [&y](){ std::cout << "Value in the closure: " << ++y << std::endl; };
}

const int& getConstant() {
  return 42;
}

enum Color { RED, BLUE, GREEN }; // L-value (name of the enum type) 

Color getColor() {
  return Color::RED;
}

int main()
{
    int x = 10;

    auto func0 = [&x](){ std::cout << "Value in the closure: " << ++x << std::endl; };
    func0();  
    
    std::function<void(void)> func1 = closureWrapper();
    func1();  

    const int& r = getConstant();  // R-value
  // r is a reference to the temporary R-value returned by getConstant()
  // We can use the R-value in expressions, but we cannot take its address
  // because it doesn't have an identifiable memory address.

    Color c = RED; // L-value (variable of enum type) 
    Color* ptr = &c; // Valid, taking address of enum variable

    Color b = getColor(); // L-value
    b = Color::BLUE;   // modifiable

    Color&& d = getColor();  // R-value reference
  // r is an R-value reference to the temporary R-value returned by getColor()
  // We can use the R-value reference in expressions, but we cannot take its
  // address because the temporary object doesn't have an identifiable memory
  // address.   
  // r = getColor() - error, non-modifiable

  Color& dd = b;

  const int & g = 110;
  int&& h = 100;

  std::cout << c << " " << ptr << " "<< b << " " << d << " " << g << " " << h;
  


  return 0;
}