a=int(input("Enter the first num : "))
b=int(input("Enter the second num : "))
c=int(input("Enter the third num : "))
d=int(max(a,b,c))
#print(d)
for i in range(1,d):
    if(a%i==0) and (b%i==0) and (c%i==0):
        hcf=i
print("HCF is:",hcf)
    