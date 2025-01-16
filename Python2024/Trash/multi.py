size = int(input("Enter the size : "))
matrix1 = []
matrix2 = []
for i in range(size):
    matrix1.append([])
    for j in range(size):
        matrix1[i].append(int(input(f"Element {i},{j} : ")))
                
for i in range(size):
    matrix2.append([])
    for j in range(size):
        matrix2[i].append(int(input(f"Element {i},{j} : ")))
                
print("\nMatrix1: ")
for i in range(size):
    for j in range(size):
        print(matrix1[i][j], end="  ")
    print("")
    
print("\nMatrix2: ")
for i in range(size):
    for j in range(size):
        print(matrix2[i][j], end="  ")
    print("")
    
mult = []
for i in range(size):
    mult.append([])
    for k in range(size):
        a = 0
        print(a)
        for j in range(size):
            a = a+matrix1[i][j]*matrix2[j][k]
        mult[i].append(a)

print("\nMatrix3: ")
for i in range(size):
    for j in range(size):
        print(mult[i][j], end="  ")
    print("")