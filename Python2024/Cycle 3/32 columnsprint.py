file=open("table.csv")
lines=file.readlines()
file.close()
columns=lines[0].split(",")
print("Columns are : ")
for c in range(len(columns)):
    for line in lines:
        info=line.split(",")
        print(info[c], end="\t")
    print("\n")