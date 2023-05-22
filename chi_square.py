import random
import math

a = 13
b = 1
m = 97
n = 100
Ri = [0]*101
Ri[0] = 12
for i in range (100):
    Ri[i+1] = (Ri[i]*a +b)%m
Ri = Ri[1:]

#Ri = [.24, .89, .11, .61, .23, .86, .41, .64, .50, .65]

print((Ri))

cls = list(range(0,101,10))
print(cls)

frequency = [0]*10

for i in Ri:
    for j in range(len(cls)-1):
        if i>cls[j] and i<=cls[j+1]:
            frequency[j] += 1

print(frequency)
t=0
frequency = [abs(x-10) for x in frequency]
print(frequency)

frequency = [x*x for x in frequency]

for i in range (len(frequency)):
    t += frequency[i]
print(frequency)
print(t/10)
