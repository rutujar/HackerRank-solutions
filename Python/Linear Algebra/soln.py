import numpy
n = int(input())
ar = []
for i in range(n):
    tmp = list(map(float,input().split()))
    ar.append(tmp)
np_ar = numpy.array(ar,float)
print(numpy.linalg.det(np_ar))
