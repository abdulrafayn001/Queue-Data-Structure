#include<iostream>
#include<queue>
#include"Queue.h"
using namespace std;
int main()
{
	Queue<int> queue;
	queue.Enqueue(9);
	queue.Enqueue(8);
	queue.Enqueue(7);
	queue.Dequeue();
	queue.Enqueue(2);
	queue.Dequeue();
	queue.Enqueue(3);
	queue.Dequeue();
	queue.Enqueue(4);
	queue.Dequeue();
	queue.Enqueue(5);
	queue.Dequeue();
	queue.Dequeue();
	queue.Enqueue(50);
	queue.Enqueue(2);
	queue.Enqueue(10);
	queue.Display(); // function to display whole queue---1
	return 0;
}
