facts = [1];
facts = facts*1005;
for i in range(2,1005):
    facts[i] = i*facts[i-1];
n = int(input());
for i in range (0,n):
    k = int(input());
    print(facts[k]); 