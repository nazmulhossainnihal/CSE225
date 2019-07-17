#include <iostream>
#include "stacktype.cpp"

using namespace std;

int main(void)
{

    StackType<char> myStack;

    if(myStack.IsEmpty()){
        cout << "Stack is Empty" << endl;
    } else{
        cout << "Stack is not Empty" << endl;
    }

    char x;

    for(int i = 1; i <= 4; i++){
        cin >> x;
        myStack.Push(x);
    }

    if(myStack.IsEmpty()){
        cout << "Stack is Empty" << endl;
    } else{
        cout << "Stack is not Empty" << endl;
    }

    if(myStack.IsFull()){
        cout << "Stack is Full" << endl;
    } else{
        cout << "Stack is not Full" << endl;
    }


    StackType<char> tempStack;

    while(!myStack.IsEmpty()){
        cout << myStack.Top() << " ";
        tempStack.Push(myStack.Top());
        myStack.Pop();
    }

    while(!tempStack.IsEmpty()){
        myStack.Push(tempStack.Top());
        tempStack.Pop();
    }

    cout << endl;

    cin >> x;
    myStack.Push(x);

    while(!myStack.IsEmpty()){
        cout << myStack.Top() << " ";
        tempStack.Push(myStack.Top());
        myStack.Pop();
    }

    while(!tempStack.IsEmpty()){
        myStack.Push(tempStack.Top());
        tempStack.Pop();
    }

    cout << endl;

    if(myStack.IsFull()){
        cout << "Stack is Full" << endl;
    } else{
        cout << "Stack is not Full" << endl;
    }

    myStack.Pop();
    myStack.Pop();

    cout << myStack.Top() << endl;


//    StackType<int> myStack;
//
//    myStack.Push(21);
//    myStack.Push(26);
//    myStack.Push(13);
//    myStack.Push(26);
//    myStack.Push(29);
//
//    myStack.Replace(26, 9);
//
//    StackType<int> tempStack;
//
//    while(!myStack.IsEmpty()){
//        cout << myStack.Top() << " ";
//        tempStack.Push(myStack.Top());
//        myStack.Pop();
//    }
//
//    while(!tempStack.IsEmpty()){
//        myStack.Push(tempStack.Top());
//        tempStack.Pop();
//    }
//
//    cout << endl;

    return 0;
}
