def f(x, y, epsilon):
    return abs(x-y)<=epsilon
g=1
m=0
def test(x):
    global m,g
    x=x+1
    m= m+2
    print(m,g)
    return x
