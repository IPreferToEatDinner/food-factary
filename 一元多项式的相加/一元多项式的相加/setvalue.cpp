#include"class.h"
#include"sort.h"
#include <iostream>
using namespace std;


void setvalue(LINKHEAD head)
{
	Polynomial* p = head->next;
	int count = 0;

	//���Ǽ򵥵����������Ծ
	while (p != nullptr)
	{
		count++;
		cout << "����ϵ���ʹ���" << endl;
		cin >> p->k >> p->exp;
		cout << "�� " << count << " ���Ѿ�¼��" << endl;

		p = p->next;//��һ�ε���Ծ��������
	}

	sort(head);

}