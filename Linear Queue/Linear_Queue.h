#pragma once
template<typename T>
class Linear_Queue
{
	T  * Data; // Templated Pointer
	int Rear;
	int Size;
	void Grow()
	{
		T *Temp = new T[Size * 2];
		int i = 0;
		for (; i < Size; i++)
		{
			Temp[i] = Data[i];
		}
		//delete[]Data;
		Data = Temp;
		Temp = nullptr;
		Size *= 2;
	}
public:
	Linear_Queue()
	{
		Rear = -1;
		Size = 1;
		Data = new T[Size];
	}

	bool  isFull()
	{
		return Rear == Size - 1;
	}
	bool IsEmpty()
	{
		return Rear == -1;
	}
	void Enqueue(T Value)
	{
		if (isFull())
			Grow();
		Data[++Rear] = Value;
	}
	bool Dequeue(T& ReturnValue)
	{
		if (!IsEmpty())
		{
			ReturnValue = Data[0];
			T *Temp = new T [Size - 1];

			for (int i = 1, j = 0; i < Size; i++, j++)
			{
				Temp[j] = Data[i];
			}
			Size--;
			delete[]Data;
			Data = Temp;
			Temp = nullptr;
			Rear--;
		}
		else
		{
			return false;
		}
		
	}
	void Display()
	{
		for (int i = 0; i < Rear; i++)
		{
			cout << Data[i] << " ";
		}
		cout << endl;
	}
	~Linear_Queue(){};
};

