n=int(input("Enter your Number : "))
def fact(a):
    if a:
        return a*fact(a-1)
    else:
        return 1
print("Factorial of the given number is : ",fact(n))