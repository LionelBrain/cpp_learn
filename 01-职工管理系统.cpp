#include <iostream>
#include <string>
#include "workerManager.h"
#include "worker.h"
#include "employer.h"
#include "boos.h"
#include "manager.h"
using namespace std;

// ���Բ��Ժ���
void test()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}
	else
	{
		string a;
		while (ifs >> a)
		{
			cout << a << endl;
		}
	}
	system("pause");
	system("cls");
}

int main()	
{
	// ʵ�����������
	WorkerManager wm;
	
	int choice = 0;  // ���������û���ѡ��
	//// ���Դ���
	//Worker * worker = NULL;
	//worker = new Manager(1, "����", 1);
	//worker->show_info();
	//

	while (true)
	{
		wm.Show_Menu(); // ��ӡ�˵�

		cout << "������Ҫʹ�õĹ���" << endl;
		cin >> choice;
		
		switch (choice)
		{
		case 0:  // �˳�ϵͳ
			wm.Exit_System();
			break;
		case 1:  // ����ְ��
			wm.add_empolayer();
			break;
		case 2:  // ��ʾְ��
			break;
		case 3:  // ɾ��ְ��
			break;
		case 4:  // �޸�ְ��
			break;
		case 5:  // ����ְ��
			break;
		case 6:  // ����
			break;
		case 7:  // ���
			test();
			break;
		default:
			cout << "�������,����������" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}