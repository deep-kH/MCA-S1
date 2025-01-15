class Matrix:
    def __init__(self, size):
        self.matrix = []
        self.size = size
        
    def createMatrix(self):
        
        for i in range(self.size):
            self.matrix.append([])
            for j in range(self.size):
                self.matrix[i].append(int(input(f"Element {i},{j} : ")))
    
    def displayMatrix(self):
        print("\nMatrix: ")
        for i in range(self.size):
            for j in range(self.size):
                print(self.matrix[i][j], end="  ")
            print("")
            
    def displayTranspose(self):
        print("\nTranspose: ")
        for i in range(self.size):
            for j in range(self.size):
                print(self.matrix[j][i], end="  ")
            print("")

    def isUpper(self):
        
        for i in range(1, self.size):
            for j in range(i):
                if(self.matrix[i][j] != 0):
                    return False
        return True
    
    def isLower(self):
        
        for i in range(self.size - 1):
            for j in range(i + 1, self.size):
                if(self.matrix[i][j] != 0):
                    return False
        return True
    
    def isDiagonal(self):
        
        for i in range(self.size):
            for j in range(self.size):
                if(i!=j and self.matrix[i][j] != 0):
                    return False
        return True
    
    def multiply(self, other):
        mult = []
        for i in range(self.size):
            mult.append([])
            for k in range(self.size):
                a = 0
                for j in range(self.size):
                    a = a+self.matrix[i][j]*other.matrix[j][k]
                mult[i].append(a)
        return(mult)


n = int(input("Enter size of matrix: "))
m1 = Matrix(n)
m1.createMatrix()
m1.displayMatrix()
m1.displayTranspose()
print(f"Upper Triangular: {m1.isUpper()}")
print(f"Lower Triangular: {m1.isLower()}")
print(f"Diagonal: {m1.isDiagonal()}")
m2 = Matrix(n)
m2.createMatrix()
m2.displayMatrix
m = m1.multiply(m2)
print("\nMultiplied Matrix: ")
for i in range(n):
    for j in range(n):
        print(m[i][j], end="  ")
    print("")