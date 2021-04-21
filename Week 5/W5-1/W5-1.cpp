#include <iostream>
#include "IntStack.h"

using namespace std;

//Takes the pointer as a parameter
//Pass by reference using pointers
void Display(Stack *stack);

int main() {
    Stack stack = Stack();
    
    //Adds the numbers from 0-9
    for (int i = 0; i < 10; i++) {
        stack.push(i);
    }
    //The parameter is the address of stack
    Display(&stack);

    //Adds 0-4, then pops 2 off the stack, then adds 5-8
    stack.clear();
    for (int i = 0; i < 9; i++) {
        stack.push(i);

        if (i == 4) {
            for (unsigned j = 0; j < 2; j++) {stack.pop();} 
        }
    }
    Display(&stack);

    system("pause");
}

void Display(Stack *stack) {
    
    for (int i = 0, ogSize = stack->size(); i < ogSize; i++) {
        cout << stack->pop() << " ";
    }
    cout << endl;
}
