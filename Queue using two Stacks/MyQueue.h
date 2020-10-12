#pragma once
#include"MyStack.h"
template<typename T>
class MyQueue
{
	MyStack<T> S1;

	MyStack<T> S2;


public:
	MyQueue()
	{

	}

	bool IsEmpty()
	{
		return (S1.isEmpty()) && (S2.isEmpty());
	}

	void Enqueue(T value)
	{
		S1.Push(value);
	}

	T Dequeue()
	{
		if (S2.isEmpty())
		{
			while (!S1.isEmpty())
			{
				S2.Push(S1.Top());
				S1.Pop();
			}
		}
		T Temp = S2.Top();
		S2.Pop();
		return Temp;
	}


	~MyQueue()
	{

	}
};

