n=input("Enter Keys for Dict1 : ").split()
dict={}
for i in n:
    value=input(f"Enter Values for {i} : ")
    dict[i]=value
print("Unsorted Dictionary : ",dict)
key=list(dict.keys())
key.sort()

dicts={}
for i in key:
    dicts[i]=dict[i]
print("The Sorted Dictionary is : ",dicts)