#include"class.h"
#include <iostream>
#include"conformity.h"
using namespace std;


//����һ��Ԫ��
//�������������ͷ������һ��Ԫ�أ�Ȼ��������
void insert(LINKHEAD head)
{
	cout << "������Ҫ�������ϵ���ʹ���" << endl;
	
	Polynomial input;
	cin >> input.k >> input.exp;

	//���������ͷ�ڵ�ĺ���
	input.next = head->next;
	head->next = &input;

	conformity(head);
}