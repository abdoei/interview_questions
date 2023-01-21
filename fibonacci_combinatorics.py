from math import comb

def fib(n):
    if(n%2): # odd
        sum = 0
        k = int((n-1)/2)
        # print(k)
        for num in range(k+1):
            sum += comb(n-num-1, num)
            # print(sum, n-num-1, num)
    else:
        sum = 0
        k = int(n/2)
        for num in range(k):
            sum += comb(n-num-1, num)
            # print(sum, n-num-1, num)
            
    return sum
    
for i in range(15):
    print(fib(i))
    
    
