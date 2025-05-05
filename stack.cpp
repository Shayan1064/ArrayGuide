#include <iostream>
using namespace std;
const int number=100;
struct stack
{
    private:
    int stack[number];
    int top=-1;
    public:
    bool isFull(){
        return (top==number-1);
    }
    bool isEmpty(){
        return (top==-1);
    }
    bool push(int value){
        if (isFull())
        {
        return false;
        }
        stack[++top]=value;
        return true;
    }
    bool pop(int value){
        if (isEmpty())
        {
            return -1;
        }
       return stack [top--];
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return stack[top];
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};


int main(){
stack shayan;
shayan.push(10);
shayan.push(20);
shayan.pop(10);
shayan.display();
}