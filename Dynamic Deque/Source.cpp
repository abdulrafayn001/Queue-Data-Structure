#include<iostream>
#include"Deque.h"
using namespace std;

int main()
{
	Deque<int> deq(8);
	for (int i = 1; i <= 9; i++)
		deq.InsertFront(i); // after 8 Insertions the deque will autogrow
	deq.DeleteRear();
	deq.Display(); // function to display whole queue---1

	deq.InsertRear(8);
	deq.DeleteFront();
	deq.Display(); // function to display whole queue---2

	return 0;
}