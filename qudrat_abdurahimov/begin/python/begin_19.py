x1, x2, y1, y2 = map(int, input().split())
a = abs(x1 - x2)
b = abs(y1 - y2)
P = 2*(a+b)
S = a * b
print(P, S)