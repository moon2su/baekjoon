a, b, c = map(int, input().split())
d = int(input())

c += d

while c >= 60:
    b += 1
    c -= 60

while b >= 60:
    a += 1
    b -= 60

while a >= 24:
    a -= 24

print(a, b, c)