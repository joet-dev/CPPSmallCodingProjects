#include <iostream>
#include "IntStack.h"
#define DEBUG 1

using namespace std;

Stack::Stack() {
    elements = new int[INITIAL_CAPACITY];
    count = 0;
    capacity = INITIAL_CAPACITY;
}

Stack::~Stack() {
    delete[] elements;
}

void Stack::push(int value) {
    if (count == capacity) {
        increaseCapacity();
    }
    elements[count] = value;
    count++;
}

int Stack::pop() {
    int popValue = elements[--count];
    if (capacity > INITIAL_CAPACITY && count <= capacity/2) {
        decreaseCapacity();
    }
    return popValue;
}

int Stack::size() {
    return count;
}

void Stack::clear() {
    count = 0;
    capacity = INITIAL_CAPACITY;
}

void Stack::increaseCapacity() {
    capacity *= 2;

    if (DEBUG) { 
        cout << "Capacity is: " << capacity << endl;
    }

    int *newElements = new int[capacity];

    for (unsigned int i = 0; i < count; i++) {
        newElements[i] = elements[i];
    }

    delete[] elements;
    elements = newElements;
}

void Stack::decreaseCapacity() {
    capacity /= 2;

    if (DEBUG) { 
        cout << "Capacity is: " << capacity << endl;
    }

    int *newElements = new int[capacity];

    for (unsigned int i = 0; i < count; i++) {
        newElements[i] = elements[i];
    }

    delete[] elements;
    elements = newElements;
}

