def largest(a,b,c):
    if(a>b and a>c):
        return a
    elif(b>a and b>c):
        return b
    else:
        return c
n,m,l=map(int,input("Enter three numbers : ").split())
print("The greatest number is : ",largest(n,m,l))