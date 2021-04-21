

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
        static const int INITIAL_CAPACITY = 5;
        int *elements;
        
        unsigned int count;
        unsigned int capacity;

        /*
         * Resize the stack to a larger size when more is stored
         */
        void increaseCapacity();

        /*
         * Resize the stack to a smaller size when less is stored
         */
        void decreaseCapacity();
};

#endif