from math import sqrt
from math import ceil


# Exercise 1. Implement the algorithm covered in lectures (and not any other algorithm) that determines if an integer n is prime. Your function should return True, if n is prime, and False otherwise. Your algorithm has to be effective for n ~ 1,000,000,000,000. A description of the algorithm covered in class appears on page 258 of the Rosen textbook.
def isPrime(n):
    # Provide a correct implementation for this function
    if n==2 or n==3: 
        return True
    if n%2==0 or n<2 or n%3==0: 
        return False
    for i in range(3, int(n**0.5)+2, 2):
        if n%i==0:
            return False

    return True


result1 = isPrime(99999999999999999989)
expected1 = True
print "7 is prime:\t\t\t\t", result1
