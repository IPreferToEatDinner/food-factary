#include"class.h"
#include"conformity.h"
#include <iostream>
using namespace std;


//�ҵ�expΪ�ض�ֵ���ɾ��

void killexp(LINKHEAD head)
{
	int exp;
	cout << endl << "������Ҫɾ�����ϵ��" << endl;
	cin >> exp;

	conformity(head);

	Polynomial* former = head;
	Polynomial* latter = head->next;

	while (latter != nullptr)
	{
		if (latter->exp == exp && latter->next != nullptr)
		{
			former->next = latter->next;
			delete latter;
			break;
		}
		else if(latter->exp == exp && latter->next == nullptr)
		{
			delete latter;
			former->next = nullptr;
			break;
		}
		else
		{
			former = latter;
			latter = latter->next;
		}
	}
}