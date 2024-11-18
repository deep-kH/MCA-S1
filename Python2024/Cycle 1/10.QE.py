#Quadratic equation
import math 
a=int(input("ax^2+bx+c\nEnter a : "))
b=int(input("Enter b : "))
c=int(input("Enter c : "))
d=b*b-4*a*c
if d>0:
    print(f"The Equation has real and distinct roots which are {(-b-math.sqrt(d))/2*a} and {(-b+math.sqrt(d))/2*a}")
elif d==0:
    print("The Equation has equal roots which is ",-b/2*a)
else:
    print(f"The equation has complex roots which are {(-b/2*a)}+{math.sqrt(-d)/2*a}i and {(-b/2*a)}-{math.sqrt(-d)/2*a}i")