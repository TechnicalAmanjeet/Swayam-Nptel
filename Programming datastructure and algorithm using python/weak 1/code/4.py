def foo(m):
    if m == 0:
      return(0)
    else:
      return(m+foo(m-1))
print(foo(3))
print(foo(4))
print(foo(5))
print(foo(6))
# print(foo(-2))
# print(foo(-3))
# print(foo(-4))
# print(foo(-5))