#include"class.h"
#include <iostream>
using namespace std;


void begin(LINKHEAD& head)
{
	head = new Polynomial;//����ʹ�����һ��ͷ�ڵ�
	head->next = nullptr;

	Polynomial* p = head;
	int count;
	cout << "����Ҫ����������" << endl;
	cin >> count;
	
	if (count < 0)
	{
		cout << "�����������Ǹ���" << endl;
		exit(0);
	}


	for (int i = 0; i < count; i++)
	{
		Polynomial* temp = new Polynomial;
		p->next = temp;
		p = p->next;
	}
	if (!p) { exit(0); }
	p->next = nullptr;//β���ڵ��ָ���ÿ�
}