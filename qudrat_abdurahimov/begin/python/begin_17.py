a, b, c = map(int, input().split())
ac = abs(a-c)
bc = abs(b-c)
acbc = ac + bc
print(ac, bc, acbc)