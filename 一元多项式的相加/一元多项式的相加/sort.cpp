#include"class.h"
#include <iostream>
using namespace std;


void sort(LINKHEAD head)
{
	//����һ����ЧԪ�ص�ð������
	Polynomial* former = head->next;
	Polynomial* latter = head->next->next;

	//������ʽһ��Ԫ��Ҳû�е�ʱ��
	if (former == nullptr)
	{
		cout << "�ö���ʽû���κ���" << endl;
		exit(0);
	}

	//������ʽֻ��һ��Ԫ�ص�ʱ��
	if (latter == nullptr)
	{
		return;
	}

	//������ʽ��С��������
	while (true)
	{
		bool issorted = true;
		former = head->next;
		latter = head->next->next;

		while (true)
		{
			if (former->exp > latter->exp)
			{
				//���������������ô��Ҫ�ı��־
				issorted = false;

				//�����ݴ�,
				int tempexp = former->exp;
				former->exp = latter->exp;
				latter->exp = tempexp;
			
				//����ϵ��
				int tempk = former->k;
				former->k = latter->k;
				latter->k = tempk;
			}


			former = latter;

			//�������һ����ת����������while���������Ϊ��һ����ִ���ǲ����е�
			if (former->next == nullptr)
			{
				break;
			}

			latter = latter->next;
		}

		if (issorted == true)
		{
			break;
		}
	}
}