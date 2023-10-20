input()
list1 = list(map(int, str(input()).split(' ')))
for i in range(0, len(list1) - 1, 2):
    list1[i], list1[i + 1] = list1[i + 1], list1[i]
print(*list1)