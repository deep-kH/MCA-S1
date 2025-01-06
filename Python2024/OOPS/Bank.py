class Bank_account:
    def __init__(self,no,name,Balance=0,typ="SAVINGS"):
        self.__ACno = no
        self.__ACname = name
        self.Balance = Balance
        self.type = typ
        self.deposit_limit = 100000
    def check_Bank_Balance(self):
        return (self.Balance)
    def widraw(self, amount):
        if amount > self.Balance:
            print("You dont Have enough Balance!")
        else:
            print(amount, "rupees is Widrawn from your Account.")
            self.Balance -= amount
    def Deposit(self, amount):
        if amount > self.deposit_limit:
            print("You have reached your Limit!")
        else : 
            print(amount, "rupees is Deposited into Your Account.")
            self.Balance += amount 
    def data_of_account(self):
        print("Your Balance is : ", self.Balance,"rupees")
        print("Your account type is :",self.type)
        print("Your Account name is : ",self.__ACname)
        print("Your Account Number is : ",self.__ACno)

p = input("Enter Account Name : ")
n = int(input("Enter initial Deposit : "))
t = input("Enter Account type : ")

AC1 = Bank_account(720091567855,p, n, t)
while 1:
    choice=int(input("\n1. Display Account details\n2. Check Bank Balance\n3. Deposit Money\n4. Widraw Money\nChoose : "))
    if choice == 1:
        AC1.data_of_account()
        
    elif choice == 2:
        print("Your Account balance is : ",AC1.check_Bank_Balance())
        
    elif choice == 3:
        a=int(input("Enter the amount to be Deposited : "))
        AC1.Deposit(a)

    else:
        b=int(input("Enter the amount to be Widrawn : "))
        AC1.widraw(b)