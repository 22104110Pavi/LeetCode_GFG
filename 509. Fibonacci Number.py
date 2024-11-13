class Solution:
    def fib(self, n: int) -> int:
        fibo=[]
        i=2
        pt=0
        ct=1
        fibo.append(pt)
        fibo.append(ct)
        while i<=n:
            ct=ct+pt
            pt=ct-pt
            fibo.append(ct)
            i+=1
        return fibo[n]

            

        
