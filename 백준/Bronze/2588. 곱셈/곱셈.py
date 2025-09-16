a = int(input())
b = int(input())

c = b%10
d = b%100
e = c * a
f = ((d - c) // 10) * a
g = ((b - d) // 100) * a
print(e)
print(f)
print(g)
print(e + f*10 + g*100)