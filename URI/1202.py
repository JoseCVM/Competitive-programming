f = [0]*5000
ls = [[]]*1200
f[0] = 0
f[1] = f[2] = 1
print("AAA")
for i in range(3,1000):
    f[i] = f[i-1] + f[i-2]
    ls[f[i]%1000].append(i)
for i in range(1,1000):
    print("Filhos de " + str(i))
    for l in ls[i]:
        print(str(l))
    
