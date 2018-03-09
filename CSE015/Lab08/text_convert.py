def toNumber(c):
    s = ""
    for i in c:
        n = ord(i)-32
        if n < 10:
            s = s + "0" + str(n)
        else:
            s = s + str(n)
    return int(s)


def toString(n):
    t = str(n)
    s = ""
    if len(t) % 2 == 1:
        f = t[0]
        t = t[1:]
        s = chr(int(f) + 32)
    
    for i in range(0, len(t), 2):
        curr = t[i] + t[i+1]
        s = s + chr(int(curr) + 32)
    return s


n = toNumber('Shulang Ning')
print n

m = toString(517285766578710046737871)
print m