#include<iostream>
using namespace std;
#pragma once
template<typename T>
class Deque
{
	T *Ptr;
	int Front;
	int Rear;
	int Size;
	void GrowArray()
	{
		T *Temp = new T[Size * 2];
		if (Front == Rear + 1)
		{
			for (int i = 0; i <= Rear; i++)
			{
				Temp[i] = Ptr[i];
			}
			int k = (Size * 2) - 1;
			for (int j = Size - 1; j >= Front; j--, k--)
			{
				Temp[k] = Ptr[j];
			}
			Front = k + 1;
			delete[]Ptr;
			Ptr = Temp;
			Temp = nullptr;
			Size = Size * 2;
		}
		else
		if (Front == 0 && Rear == Size - 1)
		{
			
			for (int l = 0; l < Size; l++)
			{
				Temp[l] = Ptr[l];
			}
			delete[]Ptr;
			Ptr = Temp;
			Temp = nullptr;
			Size = Size * 2;
		}
	}
public:
	Deque(int Size = 1)
	{
		Front = -1;
		Rear = 0;
		this->Size = Size;
		Ptr = new T[Size];
	}
	bool  IsFull()
	{
		return ((Front == 0 && Rear == Size - 1) || Front == Rear + 1);
	}
	bool  IsEmpty()
	{
		return (Front == -1);
	}
	void  InsertFront(int Value)
	{
		if (IsFull())
		{
			GrowArray();
		}
		if (Front == -1)
		{
			Front = 0;
			Rear = 0;
		}
		else if (Front == 0)
			Front = Size - 1;

		else
			--Front;
		Ptr[Front] = Value;
	}
	void  InsertRear(int Value)
	{
		if (IsFull())
		{
			GrowArray();
		}

		if (Front == -1)
		{
			Front = 0;
			Rear = 0;
		}
		else if (Rear == Size - 1)
			Rear = 0;
		else
			++Rear;

		Ptr[Rear] = Value;
	}
	void  DeleteFront()
	{
		if (IsEmpty())
		{
			cout << "Queue Underflow\n";
		}
		else
		if (Front == Rear)
		{
			Front = -1;
			Rear = -1;
		}
		else
		if (Front == Size - 1)
			Front = 0;
		else
			Front = Front + 1;
	}
	void  DeleteRear()
	{
		if (IsEmpty())
		{
			cout << " Underflow\n";
		}
		else
		if (Front == Rear)
		{
			Front = -1;
			Rear = -1;
		}
		else if (Rear == 0)
			Rear = Size - 1;
		else
			--Rear;
	}
	T  GetFront()
	{
		if (IsEmpty())
		{
			cout << " Underflow\n";
		}
		return Ptr[Front];
	}
	T  GetRear()
	{
		if (IsEmpty() || Rear < 0)
		{
			cout << " Underflow\n";
		}
		return Ptr[Rear];
	}
	void Display()
	{
		if (Front == Rear + 1)
		{
			for (int i = 0; i <= Rear; i++)
			{
				cout << Ptr[i] << " ";
			}
			int k = (Size * 2) - 1;
			for (int j = Size - 1; j >= Front; j--, k--)
			{
				cout << Ptr[j] << " ";
			}
		}
		else
		if (Front == 0 && Rear == Size - 1)
		{

			for (int l = 0; l < Size; l++)
			{
				cout << Ptr[l] << " ";;
			}
		}
		
		cout << endl;
	}
	~Deque(){};
};

