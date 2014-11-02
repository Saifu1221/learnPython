def printFibonacci(n):
    c=0
    first=0
    second=1
    next=0	
    while c <= n:
        if c <= 1:
            next=c
        else:
            next = first + second
            first = second
            second = next
        print ("\n",next)
        c = c + 1

	
fib=int(input("Enter a numer to get Fibonacci Series:"))
printFibonacci(fib)