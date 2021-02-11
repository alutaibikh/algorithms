# PRIME Function
def prime(n):
  for i in range(2,n):
    if n%i == 0:
      return False
  return True

if __name__ == "__main__":
  # input an integer
  n = int(input("Enter an integer n: "))
  if prime(n):
    print("Prime")
  else:
    print("Not Prime")