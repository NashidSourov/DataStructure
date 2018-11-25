//queue implementation 

#include <bits/stdc++.h>
using namespace std;


const int SIZE = 1000;


class Queue{
    int q[SIZE];
    int frontIndex = 0;
    int backIndex = 0;

public:
    void enqueue(int x){
        q[backIndex] = x;
        backIndex++;
    }

    void dequeue(){
        frontIndex++;
    }

    int front(){
        return q[frontIndex];
    }

    bool isEmpty(){
        if(frontIndex == backIndex) return true;
        else return false;
    }
};


int main() {

	Queue q;



	for(int i=0; i < 10; i++)
        q.enqueue(i);


    while(!q.isEmpty()){
        cout << q.front() << endl;
        q.dequeue();
    }


	return 0;
}
