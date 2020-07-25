#include<iostream>
#include"Linear_Queue.h"

using namespace std;

int main()
{
	Linear_Queue<int> queue;
	int value;
	if (queue.Dequeue(value) == false) cout << "Queue is empty"; // deque on empty queue
	queue.Enqueue(1);
	queue.Enqueue(2);
	queue.Enqueue(3);
	if (queue.Dequeue(value) == false) cout << "Queue is empty";
	queue.Enqueue(4);
	queue.Enqueue(5);

	queue.Display(); // function to display whole queue---1
	if (queue.Dequeue(value) == false) cout << "Queue is empty";
	queue.Enqueue(6);
	queue.Enqueue(7);
	queue.Display(); // function to display whole queue---2
	if (queue.Dequeue(value) == false) cout << "Queue is empty";
	if (queue.Dequeue(value) == false) cout << "Queue is empty";
	queue.Display(); // function to display whole queue---3
	return 0;
}
