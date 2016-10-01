#pragma once
class Set
{

	int *data, size;

	public:
		Set(int);				// �����������

		Set(const Set &);

		~Set();
		void get();
		void print();

		Set &intersectionOfSets (const Set&);				// �������� ����������� 
		Set &differenceSets (const Set&);

		operator int () const;								// ��������

		int deleteNumber(int deleteNum);

		bool checkEvenOrOddElements();			// �������� ������ ��� �������� ���������
		bool checkNegativsElements ();			// �������� ������������� ���������
};