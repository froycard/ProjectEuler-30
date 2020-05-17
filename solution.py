def powers(n):
    tmp = n
    sumPower = 0
    while tmp:
        sumPower+=(tmp%10)**5
        tmp//=10
    if sumPower == n: return True
    return False
        
    
acc = 0
for i in range(1001,200000):
    if powers(i):
        acc+=i
        
print(acc)
