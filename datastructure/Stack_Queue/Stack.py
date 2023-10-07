# Stack
class Stack:
    def __init__(self) -> None:
        self.value = []
        
    def push(self, value):
        self.value.append(value)
        
    def pop(self):
        return self.value.pop()
    
    def is_empty(self) -> bool:
        return len(self.value) == 0
    

# Example
my_stack = Stack()
my_stack.push(12)
my_stack.push(24)
print(my_stack.is_empty())