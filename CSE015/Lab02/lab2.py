import itertools
def cartesian_product(X, Y):
# provide your code here
    ans = []
    for i in X:
        for j in Y:
            ans.append((i, j))
    return ans
X = [1, 2]
Y = ['a', 'b', 'c', 'd']

print cartesian_product(X, Y)


def power_set(X):
# provide your code here
    result = [[]]
    for i in X:
        result.extend([j + [i] for j in result])
    return result
        
print power_set(Y)
