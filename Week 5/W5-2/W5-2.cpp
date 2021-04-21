#include <iostream>
#include "IntStack.h"

using namespace std;

int main() {
    Stack stack = Stack();
    
    //Adds the numbers from 0-19
    for (int i = 0; i < 20; i++) {
        stack.push(i);
    }

    for (int i = 0; i < 15; i++) {
        stack.pop();
    }

    for (int i = 0; i < 10; i++) {
        stack.push(i);
    }

    stack.clear();

    system("pause");
}
