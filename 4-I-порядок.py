n = int(input())
sum = 1
b= 1
for i in range(1, n + 1):
    b= b / i
    sum += b
print(sum)