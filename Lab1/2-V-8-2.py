from math import sqrt
a = int(input())
b = int(input())
c = int(input())
d = b**2 - 4*a*c
if d<0:
    print('')
elif d == 0:
    print(-b/2*a)
else:
    x1 = (-b+sqrt(d))//2*a
    x2 = (-b-sqrt(d))//2*a
    print(x1, x2)