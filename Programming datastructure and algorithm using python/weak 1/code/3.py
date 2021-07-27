def h(n):
    s = True
    for i in range(1,n+1):
        if i*i == n:
            s = False
    return(s)
print(h(1))
print(h(2))
print(h(3))
print(h(4))
print(h(5))
print(h(6))
print(h(9))
print(h(16))
print(h(25))