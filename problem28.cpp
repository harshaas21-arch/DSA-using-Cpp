#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

class MinStack{
 private:
  stack<int> mainStack;
  stack<int> minStack;
 public:
   MinStack(){}
   void push(int val){
    mainStack.push(val);
    if(minStack.empty()){
        minStack.push(val);
    }else{
        minStack.push(min(val, minStack.top()));
    }
   }
   void pop(){
    mainStack.pop();
    minStack.pop();
   }
   int top(){
    return mainStack.top();
   }
   int getMin(){
    return minStack.top();
   }
};
int main(){
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);

    cout << "Current Min: " << minStack.getMin() << "\n";

    minStack.pop();

    cout << "Top element after pop: " << minStack.top() << "\n";
    cout << "Current min after pop: " << minStack.getMin() << "\n";

    return 0;
}