a=int(input("Enter the limit : "))
x=0
y=1
print(x,end=",")
print(y,end="")
for i in range(a-2):
    print(",",end="")
    s=x+y
    print(s,end="")
    x=y
    y=s