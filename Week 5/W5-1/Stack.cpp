#include <iostream>
#include "IntStack.h"

using namespace std;

Stack::Stack() {
    count = 0;
}

Stack::~Stack() {

}

void Stack::push(int value) {
    if (count == CAPACITY) {
        cout << "Stack is full" << endl;
    } else {
        elements[count] = value;
        count++;
    }
}

int Stack::pop() {
    return elements[--count];
}

int Stack::size() {
    return count;
}

void Stack::clear() {
    count = 0;
}
