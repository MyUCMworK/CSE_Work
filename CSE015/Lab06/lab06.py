# Exercise 1: Implement Euclid's Algorithm for finding the greatest common divisor of two integers
def gcd(a, b):
    # Provide the correct implementation
    r = a % b
    while r != 0:
        a = b
        b = r
        r = a % b
    return b

print gcd(128, 60)
# Expected output: 4



# Exercise 2: Consider the following representation of mathematical expressions: 
# a list of tuples, where each tuple has exactly 2 elements, a coefficient and a term. For example, the expression:

# 2x + 5y - 3z is represented as [(2, x), (5, y), (-3, z)]

# We sometimes need to simplify expressions by grouping together like terms. For example:

# 2x + 5y + 4x = 6x + 5y

# Implement the function groupLikeTerms, where the input exp is a mathematical expression represented as a list of tuples, 
# and it should return a simplified mathematical expression represented as a list of tuples.
def groupLikeTerms(exp):
    # Provide the correct implementation
    for i in exp:
        for j in exp:
            if i != j:
                if i[1] == j[1]:
                    x = i[0] + j[0]
                    exp.append(tuple((x, i[1])))
                    exp.remove(i)
                    exp.remove(j)
                    exp = sorted(exp, key = lambda tup: tup[1])
    return exp
    
print groupLikeTerms([(5, "x"), (5, "y"), (-3, "x")])
# Expected output: [(2, 'x'), (5, 'y')]


    
# Exercise 3: We sometimes need to substitute expressions into other expressions. 
# For example if we have the expression 2x + 5y, and we know that x = 3a - b, 
# we can substitute the expression for x into the original expression, resulting in: 6a - 2b + 5y.

# Implement the substitution function below. It should take an expression (list of tuples), a term, and another expression. 
# It should substitute the occurences of term in exp, with value. The result should be in its simplest form, i.e. 
# like terms should be grouped together 

# For example: substitute([(2, 5), (-1, 9)], 5, [(1, 23), (-2, 9)]) results in [(-5, 9), (2, 23)]
def substitute(exp, term, value):
    # Provide the correct implementation
    new_term = []
    new_term1 = []
    exp = [list(elem) for elem in exp]
    value = [list(elem) for elem in value]

    for i in exp:
        if i[1] == term:
            new_term = [i[0]*value[x][0] for x in range(len(value))]
            exp.remove(i)
            for j in range(len(new_term)):
                exp.append([new_term[j], value[j][1]])

    for i in exp:
        for j in exp:
            if i != j:
                if i[1] == j[1]:
                    new_term1 = [i[0]+j[0]]
                    exp.remove(i)
                    exp.append([new_term1[0], j[1]])
                    exp.remove(j)
        break
    exp = [tuple(elem) for elem in exp]
    exp = sorted(exp, key = lambda tup: tup[1])
    return exp
            
print substitute([(2, 5), (-1, 9)], 5, [(1, 23), (-2, 9)])
# Expected output: [(-5, 9), (2, 23)]



# Exercise 4: Using the functions you implemented above, implement the Extended Euclidean Algorithm, 
# which returns the GCD of two integers a, and b, as a linear combination of a and b.

# For example: extended_euclid(101, 23) results in (1, [(22, 23), (-5, 101)]), 
# where the GCD is 1 and it can be expressed as 22*23 - 5*101
def extended_euclid(a, b):
    # Provide the correct implementation
    x0, x1, y0, y1 = 1, 0, 0, 1
    c = a
    d = b
    while b != 0:
        q, a, b = a // b, b, a % b
        x0, x1 = x1, x0 - q * x1
        y0, y1 = y1, y0 - q * y1
    return  a, [(y0, d), (x0, c)]

print extended_euclid(101, 23)
# Expected output: (1, [(22, 23), (-5, 101)])



# Exercise 5: Use the Extended Euclidean Algorithm to implement the function for multiplicative inverses. 
# As you know, a multiplicative inverse n modulo m is guaranteed to exist if n and m are relatively prime. 
# If they are not, your algorithm should return None (which is the null value of Python), otherwise, 
# if n and m are relatively prime, you should return the inverse of n modulo m.
def inverse(n, m):
    # Provide the correct implementation
    a, [(y0, d), (x0, c)] = extended_euclid(n, m)
    if a == 1:
        return x0
    else:
        return None
	return n
    
print inverse(1289478121412415616926587151287498746187, 101)
# Expected output: 22