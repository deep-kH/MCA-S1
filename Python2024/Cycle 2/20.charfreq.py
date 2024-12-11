a=input("Enter string : ")
q=input("Enter the charecter : ")
count=0
for i in a.lower():
    if i==q.lower():
        count+=1
print(f"The frequency of {q} in {a} is {count}")