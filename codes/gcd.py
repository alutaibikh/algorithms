# GCD Function
def gcd(A,B):
  A = abs(A)
  B = abs(B)
  while B != 0:
    if A > B:
      A = A - B
    else:
      B = B - A
  return A

if __name__ == "__main__":
  # input two integers
  A = int(input("Enter 1st integer A: "))
  B = int(input("Enter 2nd integer B: "))
  print("The GCD: ", gcd(A,B))