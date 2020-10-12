#include<iostream>
#include<queue>
#include"Queue.h"
using namespace std;
int main()
{
	Queue <int> Q0;
	Q0.Enqueue(5);
	Q0.Enqueue(4);
	Q0.Enqueue(3);
	Q0.Enqueue(1);
	Q0.Enqueue(5);
	Q0.Enqueue(4);
	Q0.Enqueue(3);
	Q0.Enqueue(1);

	Q0.Dequeue();
	Q0.Dequeue();
	Q0.Dequeue();

	Q0.Enqueue(4);
	Q0.Enqueue(3);
	Q0.Enqueue(1);
	
	Q0.Dequeue();
	Q0.Dequeue();
	Q0.Dequeue();

	while (!Q0.isEmpty())
	{
		cout << Q0.Dequeue() << endl;
	}
	return 0;
}