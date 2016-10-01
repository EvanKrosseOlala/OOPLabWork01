#include "stdafx.h"
#include"Set.h"
#include<iostream>
using namespace std;
#define sizeOfArrayOfSets 4

int main()
{
	setlocale(LC_ALL,"rus");

	Set firstSet(5);  cout << "������� �������� 1 -�� ���������\n";  firstSet.get();
	Set secondSet(3); cout << "������� �������� 2 -�� ���������\n";  secondSet.get();
	 
	Set firstAdditionalSet = firstSet; Set secondAdditionalSet = firstSet;
	 
	cout << "������ ��������: ";	 firstSet.print();
	cout << "������ ���������: ";	 secondSet.print();
	firstSet.intersectionOfSets(secondSet);

	cout << "\n����������� ������� � ������� ���������: ";
	firstSet.print();
	firstAdditionalSet.differenceSets(secondSet);
	cout << "\n�������� ������� � ������� ��������� - ";
	firstAdditionalSet.print();
	int n;
	cout << "������� ����� ����������  �������� " << endl;
	cin >> n;
	if ( secondAdditionalSet.deleteNumber(n) == 0) 
		{
			cout << "\n����� ��������  ��������: "; 
			secondAdditionalSet.print();
		}
	else
		cout << "������ ������� �� ������������ � ���������!";
		cout << endl;
	
	Set arrayOfSets[sizeOfArrayOfSets] ={ 2, 2, 2, 2};  // �������� 4�� �������� �� 2 ��������
	cout << endl;
	cout << "------------------------------------------------\n";
	cout << "������ � ��������� �������� �� ���� ���������\n";
	cout << "������� �������� �������  ��������\n"; 
	for(int i = 0; i < sizeOfArrayOfSets; i++)
	{
	 arrayOfSets[i].get();
	}

	for(int i = 0; i < sizeOfArrayOfSets; i++){
		cout<<"\n"; arrayOfSets[i].print();}
	
	cout<<"\n���������, ���������� ��� ������ ��� �������� ��������: ";
	for(int i = 0; i < sizeOfArrayOfSets; i++)
	{
		if ( arrayOfSets[i].checkEvenOrOddElements()  == true )
		{
			
			cout << "\n";
			 arrayOfSets[i].print();
		}
		
	}	
		cout<<"\n���������, ���������� �������������  ��������: ";
	for(int i = 0; i < sizeOfArrayOfSets; i++)
	{
		if ( arrayOfSets[i].checkNegativsElements()  == true )
		{
			
			cout << "\n";
			 arrayOfSets[i].print();
		}
		
	}	

	system("pause");

}
