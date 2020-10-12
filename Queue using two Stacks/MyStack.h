#pragma once
#include<iostream>
#include<vector>
using namespace std;
template<typename T>
class MyStack
{
	vector<T> Vs;
public:

	MyStack()
	{

	}

	void Push(T Value)
	{
		Vs.push_back(Value);
	}

	T Top()
	{
		if (!Vs.empty())
		{
			return Vs.back();
		}
		else
			throw("MyStack is Empty");
	}

	void Pop()
	{
		if (!Vs.empty())
		{
			Vs.pop_back();
		}
		else
			throw("MyStack is Empty");
	}

	bool isEmpty()
	{
		return Vs.empty();
	}

	bool isFull()
	{
		return Vs.size() == Vs.capacity();
	}

	~MyStack()
	{

	}
};