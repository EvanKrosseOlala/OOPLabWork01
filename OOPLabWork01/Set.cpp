#include "stdafx.h"
#include "Set.h"
#include<iostream>
using namespace std;


Set::Set(int size)					// �����������
{
	this->size = size;
	this->data = new int[size];
}

Set::Set(const Set &x)				// ����������� �����������
{
	this->size = x.size;
	this->data = new int[x.size];
	for(int i = 0; i < this->size; i++)
		this->data[i] = x.data[i];
}

Set::~Set()							//	����������
{
	delete[] data;
}

void Set::get()						// ���� ��������� ���������
{
	int ElementOfSet;
	for(int i = 0; i < size; i++)
	{
		cin >> ElementOfSet;
		this->data[i] = ElementOfSet;
	}
}

void Set::print()
{
	for(int i = 0; i < size; i++)
		cout << this->data[i] << " ";
	cout << endl;
}

Set& Set::intersectionOfSets (const Set& SomeSet)			// �����������
{
	int count = (this->size + SomeSet.size);				// ����������� �������
	int *storage = new int[count]; int t = 0;				// ��������� ������
	for(int i = 0; i < this->size; i++)
	{
		for(int j = 0; j < SomeSet.size; j++)
		{
			if(this->data[i] == SomeSet.data[j])		// ���� ���������
			{storage[t] = SomeSet.data[j]; t++;}		// �������� � storage
		}
	}
	for(int i=0; i<t; i++)
	{
		this->data[i] = storage[i];			// ���������� �� storage
	}
	this->size=t; delete[] storage;				// ������� storage
	return *this;
}

Set& Set::differenceSets (const Set& SomeSet)			// ��������
{
	int count = (this->size + SomeSet.size); 
	for(int i = 0; i <= this->size; i++)
	{
		for(int j = 0; j <= SomeSet.size; j++)
		{
			if(this->data[i] == SomeSet.data[j])
			{
				  this->deleteNumber(this->data[i]);
			}
							
		}
	}
	return *this;
}
int Set::deleteNumber(int deleteNum)
{
	size_t i = 0;
	for (i = 0; i < this->size && this->data[i] != deleteNum; i++);
	if (i == this->size)
	{
		return -1;
	}
	else
	{
		data[i] = data[this->size-1];
		this->size--;	
		return 0;
	}	
}
bool Set::checkEvenOrOddElements ()
{
	int i;
	for(i = 0; i < this->size; i++){
		if ( (this->data[i] % 2) == 0);
		else break;
	}
	if (i == this->size) return true;

	for(i = 0; i < this->size; i++){
		if ( (this->data[i] % 2) == 1);
		else break;
	}
	if (i == this->size) return true;
	return false;
}

bool Set::checkNegativsElements (){
	int i;
	for(i = 0; i < this->size; i++)
	{
		if (this->data[i] < 0);
		else break;
	}
	if (i == this->size) return true;
	return false;
}
