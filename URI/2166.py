n = int(input())
p = 1
q = 1
for i in range(0,n):
	a = p + 2*q
	q = p + q
	p = a
print(p/q)