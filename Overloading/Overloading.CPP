/*
 * Overloading is the concept of having many functions with the same
 * name that do similar but different things. This example shows
 * two functions called add that take different number of arguments.
 * 
 * The first add function accepts two arguments and adds them together
 * while the second takes three arguments and adds them all.
 *
 * The compiler is clever enough to know which one we mean when we call
 * the function even though they both have the same name.
 */
#include <iostream>
using namespace std;

/* uses 2 arguments */
double add(double x, double y) {
  return x + y;
}

/* uses 3 arguments */
double add(double a, double b, double c) {
  return a + b + c;
}

int main() {
  double twoArgs = add(9, 11); // Given 2 arguments

  // can also use decimals because the function accepts doubles
  double threeArgs = add(3, 4, 8.8); // Given 3 arguments

  cout << "add called with 2 arguments, 9 + 11 is " << twoArgs << endl;
  cout << "add called with 3 arguments, 3 + 4 + 8.8 is " << threeArgs << endl;

  return 0;
}
