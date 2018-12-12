from itertools import product


a = list(map(int, input().split()))
b = list(map(int, input().split()))
print(*list(product(a, b)))
