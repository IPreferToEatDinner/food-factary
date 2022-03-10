#include"class.h"
#include"sort.h"
#include"getcount.h"
#include <iostream>
using namespace std;


//���ϲ�����������һ������ϲ���һ����
//����һ���Ƚ϶���Ĳ������Ƚ����������֮���ٶ���������
void conformity(LINKHEAD head)
{
	sort(head);

	Polynomial* p = head->next;//pָ����Ԫ�ڵ�

	//���ɶҲû�оͷ���
	if (p == nullptr)
	{
		return;
	}

	int count = getcount(head);
	int position = 1;

	//���濪ʼ����
	while (position != count)
	{
		if (p->exp == p->next->exp)
		{
			p->k += p->next->k;//��ֵ����

			Polynomial* temp = p->next;
			p->next = temp->next;
			delete temp;
			count--;
		}
		if (count == 1)
		{
			return;
		}
		if (p->exp != p->next->exp)
		{
			p = p->next;
			position++;
		}
	}

	p->next = nullptr;


}