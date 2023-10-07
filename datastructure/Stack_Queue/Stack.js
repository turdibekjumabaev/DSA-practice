// Stack
class Stack{
    constructor(){
        this.value = [];
    }

    push(value){
        this.value.push(value);
    }

    pop(){
        return this.value.pop();
    }

    is_empty(){
        return this.value.length === 0;
    }
}

// Example
let my_stack = new Stack();
my_stack.push(12);
my_stack.push(24);
console.log(my_stack.is_empty())