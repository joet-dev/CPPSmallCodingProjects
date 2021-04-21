

#ifndef _IntStack_h
#define _IntStack_h

class Stack {
    public: 
        /*
        * Creates a fixed size array that contains 10 elements
        */
        Stack();

        /*
        * Deallocates storage associated with this array
        */
        ~Stack();

        /*
        * Pushes an element onto the stack
        */
        void push(int value);

        /*
        * Returns and removes the most recently added elements in the stack
        */
        int pop();

        /*
        * Returns the number of elements in the array
        */
        int size();

        /*
        * Clears the stack
        */
        void clear();
        
    private: 
        static const int CAPACITY = 10;
        int elements[CAPACITY];
        
        unsigned int count;
};

#endif