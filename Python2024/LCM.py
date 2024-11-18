a=int(input("Enter the first num : "))
b=int(input("Enter the second num : "))
c=int(input("Enter the third num : "))
i=int(max(a,b,c))
lcm=0
while i<=a*b*c:
    #print(i)
    if (i%a==0) and (i%b==0) and (i%c==0):
        lcm=int(i)
        #print(i)
        break  
    i+=1 
print("LCM is : ",lcm)