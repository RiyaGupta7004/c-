#include <bits/stdc++.h>
using namespace std;
class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;
    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peak(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
        
    }
};
int main() {
	Stack st(5);
	st.push(22);
	st.push(43);
	st.push(44);
	st.push(22);
	st.push(43);
	st.push(44);
	st.pop();
	cout<<st.peak()<<endl;
	st.pop();
	cout<<st.peak()<<endl;
	if(st.isEmpty()){
	    cout<<"stack is empty"<<endl;
	}
	else{
	    cout<<"stack is not empty"<<endl;
	}

}
//reverse a stack
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main() {
string s="Microsoft" ;   
stack <int> st;
for(char x:s){
    st.push(x);
}
string ans=" ";
while(!st.empty()){
    char ch=st.top();
    ans.push_back(ch);
    st.pop();
}
cout<<"answer is : "<<ans<<endl;
return 0;

}
#include <bits/stdc++.h>
using namespace std;
//Insert am element at its bottom in a given stack 
// void solve(stack<int>& s,int x){
//     //base case
//     if(s.empty()){
//         s.push(x);
//         return;
//     }
//     int num=s.top();
//     s.pop();
//     //recusive call
//     solve(s,x);
//     s.push(num);
    
// }
// stack<int> pushAtBottom(stack<int>& myStack,int x){
//     solve(myStack,x);
//     return myStack;
// }
//reverse a stack
// void insertAtBottom(stack<int> &s,int element){
//     //basecase
//     if(s.empty()){
//         s.push(element);
//         return;
//     }
//     int num=s.top();
//     s.pop();
//     //recursive call
//     insertAtBottom(s,element);
//     s.push(num);
    
// }
// void reverseStack(stack<int> &stack){
//     if(stack.empty()){
//         return;
//     }
//     int num=stack.top();
//     stack.pop();
//     //recursive call
//     reverseStack(stack);
//     insertAtBottom(stack,num);
// }
// sort a stack
// time complexity-0(n^n)
void sortedInsert(stack<int> &stack,int num){
    //base case
    if(stack.empty()||(!stack.top() && stack.top())<num){
        stack.push(num);
        
    }
    int num=stack.top();
    stack.pop();
    //recursive call
    sortedStack(stack,num);
    stack.push(num);
}
void sortStack(stack<int> &stack){
    //base case
    if(stack.empty()){
        return;
    }
    int num=stack.top();
    stack.pop();
    //recursive call
    sortStack(stack);
    sortedInsert(stack,num);
}
    
