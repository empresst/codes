import random
import math
a = 13
b = 1
m = 97
n = 10
Ri = [0]*11
Ri[0] = 12
for i in range (10):
    Ri[i+1] = (Ri[i]*a +b)%m
Ri = Ri[1:]

#Ri = [.24, .89, .11, .61, .23, .86, .41, .64, .50, .65]
Ri.sort()
mm = 100
Ri = [x / mm for x in Ri]
print("Ri               ",Ri)
mi = 10
ibyn = list(range(1,11))
libb = ibyn
ibyn = [round((x / mi),3) for x in ibyn]
print("i_by_n           ",ibyn)
ibynminusRi = [max(round((a-b),3),0) for a, b in zip(ibyn,Ri)]
print("(i/n)minusRi     ",ibynminusRi)
iminus1byn = [round(((x-1) / mi),3) for x in libb]

Riminusiminus1byn = [max(round((a-b),3),0) for a, b in zip(Ri,iminus1byn)]
print("Ri_minus((i-1)/n)",Riminusiminus1byn)
Riminusiminus1byn.sort()
ibynminusRi.sort()
print("positive Deviation",ibynminusRi[9])
print("Negative Deviation",Riminusiminus1byn [9])
high = max(Riminusiminus1byn [9],ibynminusRi[9])
print("longest deviation",high)
critical = 0.41
if high<critical:
    print("true")
else:
    print("false")
