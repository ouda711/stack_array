#include <iostream>
using namespace std;
#define MAX 1000 //max size of the stack

class Stack{
    int top;
public:
    int myStack[MAX];

    Stack(){top = -1;}
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int x) {
    if(top >= (MAX - 1)){
        cout<<"Stack Overflow!";
        return false;
    }else {
        myStack[++top] = x;
        cout<<x<<endl;
        return true;
    }
}

bool Stack::isEmpty() {
    if(top == -1){
        return true;
    }
    return false;
}

int Stack::pop() {
    if(top < 0){
        cout<<"Stack underflow!!";
        return 0;
    }else{
        int item = myStack[top--];
        return item;
    }
}

int main() {

    Stack stack;
    cout<<"Is the stack currently empty?"<<(stack.isEmpty()?" yes" :" no")<<endl;
    cout<<"The stack push "<<endl;
    stack.push(34);
    stack.push(89);
    stack.push(14);
    cout<<"Is the stack currently empty?"<<(stack.isEmpty()?" yes" :" no")<<endl;
    cout<<"Popping stack ... "<<stack.pop()<<endl;
    return 0;
}
