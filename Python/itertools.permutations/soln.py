import itertools


s = input().split()
string, number = sorted(s[0]), int(s[1])
print(*list(map(''.join, itertools.permutations(string, number))), sep='\n')
