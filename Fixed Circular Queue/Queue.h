#pragma once
#include<iostream>
using namespace std;
template<typename T>
class Queue
{
	T *ptr;
	int Front;
	int Rear;
	int Capacity;
public:
	Queue(int Size = 5)
	{
		Capacity = Size;
		ptr = new T[Capacity];
		Front = Rear = -1;
	}

	bool isEmpty()
	{
		return (Rear == -1) && (Front == -1);
	}

	bool isFull()
	{
		return Rear == Capacity - 1;
	}
	void Enqueue(T Element)
	{
		if (isFull())
		{
			cout << "Queue is Full" << endl;
		}
		else
		{
			if (isEmpty())
				Front = Rear = 0;
			else
				Rear = (Rear + 1) % Capacity;
			ptr[Rear] = Element;
		}
	}
	T Dequeue()
	{
		if (!isEmpty())
		{
			if (Front == Rear)
			{
				T Temp = ptr[Front];
				Front = Rear = -1;
				return Temp;
			}
			else
			{
				T Temp = ptr[Front];
				Front = (Front + 1) % Capacity;
				return Temp;
			}
		}
	}
	void Display()
	{
		if (Front <= Capacity)
		{
			for (int i = Front; i <= Rear; i++)
			{
				cout << ptr[i] << " ";
			}
		}
		else
		{
			int j = Front;
			while (j < Capacity)
			{
				cout << ptr[j] << " ";
				j++;
			}
			j = 0;
			while (j <= Rear)
			{
				cout << ptr[j] << " ";
				j++;
			}
		}
	}
	~Queue()
	{

	}
};

