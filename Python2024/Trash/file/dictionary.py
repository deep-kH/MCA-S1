import csv
mydictinlist = []
for i in range(2):
    usedict = {"RollNummber" : int(input("Enter Roll number : ")), "Name": input("Enter the name : ")}
    mydictinlist.append(usedict)
print(mydictinlist)


with open("hi.csv", "a") as file:
    write = csv.DictWriter(file, fieldnames=["RollNummber", "Name"])
    write.writeheader()
    write.writerows(mydictinlist)