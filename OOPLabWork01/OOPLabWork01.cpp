#include "stdafx.h"
#include"Set.h"
#include<iostream>
using namespace std;
#define sizeOfArrayOfSets 4

int main()
{
	setlocale(LC_ALL,"rus");

	Set firstSet(5);  cout << "Введите элементы 1 -го множества\n";  firstSet.get();
	Set secondSet(3); cout << "Введите элементы 2 -го множества\n";  secondSet.get();
	 
	Set firstAdditionalSet = firstSet; Set secondAdditionalSet = firstSet;
	 
	cout << "Первое ножество: ";	 firstSet.print();
	cout << "Второе множество: ";	 secondSet.print();
	firstSet.intersectionOfSets(secondSet);

	cout << "\nПересечение первого и второго множества: ";
	firstSet.print();
	firstAdditionalSet.differenceSets(secondSet);
	cout << "\nРазность первого и второго множества - ";
	firstAdditionalSet.print();
	int n;
	cout << "Введите номер удаляемого  элемента " << endl;
	cin >> n;
	if ( secondAdditionalSet.deleteNumber(n) == 0) 
		{
			cout << "\nПосле удаления  элемента: "; 
			secondAdditionalSet.print();
		}
	else
		cout << "Данный элемент не присутствует в множестве!";
		cout << endl;
	
	Set arrayOfSets[sizeOfArrayOfSets] ={ 2, 2, 2, 2};  // создание 4ех множеств по 2 элемента
	cout << endl;
	cout << "------------------------------------------------\n";
	cout << "Работа с массивами множеств из двух элементов\n";
	cout << "Введите элементы массива  множеств\n"; 
	for(int i = 0; i < sizeOfArrayOfSets; i++)
	{
	 arrayOfSets[i].get();
	}

	for(int i = 0; i < sizeOfArrayOfSets; i++){
		cout<<"\n"; arrayOfSets[i].print();}
	
	cout<<"\nМножества, содержащие или чётные или нечётные элементы: ";
	for(int i = 0; i < sizeOfArrayOfSets; i++)
	{
		if ( arrayOfSets[i].checkEvenOrOddElements()  == true )
		{
			
			cout << "\n";
			 arrayOfSets[i].print();
		}
		
	}	
		cout<<"\nМножества, содержащие отрицательные  элементы: ";
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
