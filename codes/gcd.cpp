#include <iostream>
using namespace std;

// GCD function
int gcd(int A, int B) {
  // Inputs: two integers A and B
  // Output: the GCD of A and B

  A = abs(A);
  B = abs(B);

  while(B != 0) {
    if (A > B) A = A - B;
    else B = B - A;
  }
  return A;
}


int main() {
  int A, B;

  // input two integers
  cout << "Enter 1st integer A: ";
  cin >> A;

  cout << "Enter 2nd integer B: ";
  cin >> B;

  int result = gcd(A,B);
  cout << "The GCD: " << result << endl;

}