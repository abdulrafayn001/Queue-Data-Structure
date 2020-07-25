#include<iostream>
#include"Queue.h"
using namespace std;
int main()
{
	Queue<int> queue(3);
	for (int i = 3; i <= 243; i *= 3)
		queue.Enqueue(i);
	queue.Display(); // function to display whole queue
	return 0;
}
