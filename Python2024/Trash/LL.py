class node:
    def __init__(self,data):
        self.data=data
        self.next=None
        
class LinkedList:
    def __init__(self):
        self.head=None
        self.tail=None
    def InsatBeg(self,data):
        new = node(data)
        if self.head == None:
            self.tail=new
        new.next = self.head
        self.head=new
    def InsatEnd(self,data):
        new=node(data)
        self.tail.next = new
        self.tail = new
    def InsatPos(self,data, pos):
        temp = self.head
        count=1
        while temp:
            count+=1
            temp=temp.next
            if count == pos-1:
                break
        new=node(data)
        new.next=temp.next
        temp.next = new
    def DelatBeg(self):
        self.head=self.head.next
    def DelatEnd(self):
        self.tail=self.head
        while(self.tail.next == None):
            self.tail=self.tail.next
        self.tail.next=None
    def Delatpos(self, pos):
        temp= self.head
        if pos == 1:
            self.DelatBeg()
        else:
            count=1
            while temp:
                count+=1
                temp=temp.next
                if temp.next == self.tail:
                    self.DelatEnd()
                    break
                if count == pos:
                    temp.next = temp.next.next
                    break
    def display(self):
        temp = self.head
        while temp:
            print(temp.data, end="->")
            temp=temp.next

ll=LinkedList()
ll.InsatBeg("Karthik")
ll.InsatBeg("Deepak")
ll.InsatBeg("Sudha")
ll.InsatEnd("Hari")
ll.InsatEnd("Preshith")
ll.InsatEnd("Keerthy")
ll.InsatPos("Sruthy",3)
ll.Delatpos(2)
ll.Delatpos(7)
ll.Delatpos(3)
ll.display()

                