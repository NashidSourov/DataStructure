#include<bits/stdc++.h>
using namespace std;
 
const int Size =1000;
class Stack
{
 
    int q[Size];
    int backIndex=0;
 
   public:
        void push(int x)
    {
        q[backIndex]=x;
        backIndex++;
    }
    void pop()
    {
        backIndex--;
    }
    int front()
    {
        return q[backIndex-1];
    }
    bool isEmpty()
    {
        if(backIndex==0) return true;
        else return false;
    }
};
int main()
{
    Stack s;
    for(int i=1;i<=10;i++)
    {
        s.push(i);
    }
    while(!s.isEmpty())
    {
 
        cout<<s.front()<<endl;
        s.pop();
 
 
    }
}
