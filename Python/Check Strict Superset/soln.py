a = set(input().split())
print(all(a > set(input().split()) for _ in range(int(input()))))
