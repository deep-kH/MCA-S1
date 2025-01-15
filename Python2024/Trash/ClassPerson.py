class person:
    def  __init__(self, name, code):
        self.name = name
        self.code = code
class Account(person):
    def __init__(self, name, code, pay):
        person.__init__(self, name, code)
        self.pay = pay
class Admin(person):
    def __init__(self, name, code, experiance):
        person.__init__(self, name, code)
        self.experiance = experiance
class Employee(Account, Admin):
    def __init__(self, name, code, pay, experiance):
        Account.__init__(self, name, code, pay)
        Admin.__init__(self, name, code,experiance)
        
    def __str__(self):
        return f"{self.name}, {self.code}, {self.pay}, {self.experiance}"
    
employe = Employee("Deepak H", "MCA24-TVE2025", "$4500000", 4)
print(employe)