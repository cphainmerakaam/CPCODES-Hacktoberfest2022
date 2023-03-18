class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.l=[]
        self.n=0
        self.m=2147483648
    def push(self, val: int) -> None:
        if(self.n!=0):
            self.m=min(val,self.l[-1][1])
            self.l.append((val,self.m))
        else:
            self.l.append((val,val))
        self.n+=1
    def pop(self) -> None:
        self.l.pop()
        self.n-=1

    def top(self) -> int:
        return self.l[-1][0]

    def getMin(self) -> int:
        return self.l[-1][1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
