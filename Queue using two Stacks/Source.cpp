#include<iostream>
#include"MyQueue.h"
using namespace std;

int main()
{
	MyQueue<int> MS;

	MS.Enqueue(10);
	MS.Enqueue(11);
	MS.Enqueue(12);
	MS.Enqueue(13);
	MS.Enqueue(14);

	MS.Dequeue();
	MS.Dequeue();
	MS.Dequeue();

	MS.Enqueue(9);
	MS.Enqueue(8);
	while (!MS.IsEmpty())
	{
		cout << MS.Dequeue() << endl;
	}
	return 0;
}