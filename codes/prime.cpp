#include <iostream>
using namespace std;

// PRIME Function
bool prime(int n) {
  for (int i = 2; i < n; i++) {
    if (n%i == 0) return false;
  }
  return true;
}

int main() {
  // input an integer
  int n;
  cout << "Enter an integer n: ";
  cin >> n;
  if (prime(n)) cout << "Prime" << endl;
  else cout << "Not Prime" << endl;
}