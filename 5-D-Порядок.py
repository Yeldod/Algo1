n = int(input())
binary_list = []

while n > 1:
    p = n % 2
    binary_list.append(p)
    n = n // 2

binary_list.append(n)

for p in range(len(binary_list) - 1, -1, -1):
    print(binary_list[p], end='')