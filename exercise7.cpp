/* Runqi Liu's exercise 7. 17th Feb 2019. This program write the the implementation
of the square root function.
*/

//Include necessary library for input output
//specify namespace
#include <iostream>
#include <string>
using namespace std;

// successive approximation
// test comment
double square(int x)
{
  cout << "hello" << endl;
  double g = (x*1.0)/2;
  double xog = (x*1.0)/g;
  while (!(g==((g+xog)/2)))
  {
    g = (g+xog)/2;
    xog = x/g;
  }
  return g;
}
//main function
int main() {
  int x;
  cout << "enter a number: " << endl;
  cin >> x;
  double result = square(x);
  cout << "The square root is: "<< result << endl;
  return 0;
}
