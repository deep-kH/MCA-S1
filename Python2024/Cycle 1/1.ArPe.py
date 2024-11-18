import math
def area(rad):
    return math.pi*rad**2
def per(rad):
    return 2*math.pi*rad
rad=int(input("Enter the Radius of the circle : "))
print("The Area is : ",area(rad))
print("The Perimeter is : ",per(rad))