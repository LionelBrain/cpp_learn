#include "workerManager.h"

WorkerManager::WorkerManager()
{
	// 1.�ļ�������

	ifstream ifs;
	ifs.open(FILLNAME, ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		// ��ʼ������
		// ��ʼ����¼����
		this->m_EmpNum = 0;
		// ��ʼ������ָ��
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		return;
	}

	// �ļ�����,����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		// �ļ�Ϊ��
		// ��ʼ������
		// ��ʼ����¼����
		cout << "�ļ�Ϊ��" << endl;
		this->m_EmpNum = 0;
		// ��ʼ������ָ��
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		return;
	}
}

WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

void WorkerManager::Show_Menu()
{
	cout << "********************************" << endl;
	cout << "***** ��ӭʹ��ְ������ϵͳ *****" << endl;
	cout << "******** 0-�˳��������  *******" << endl;
	cout << "******** 1-����ְ����Ϣ  *******" << endl;
	cout << "******** 2-��ʾְ����Ϣ  *******" << endl;
	cout << "******** 3-ɾ����ְְ��  *******" << endl;
	cout << "******** 4-�޸�ְ����Ϣ  *******" << endl;
	cout << "******** 5-����ְ����Ϣ  *******" << endl;
	cout << "******** 6-���ձ������  *******" << endl;
	cout << "******** 7-��չ������  *******" << endl;
	cout << "********************************" << endl;
	cout << endl;
}

// �˳��ӿ�
void WorkerManager::Exit_System()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

// ���ְ���ӿ�
void WorkerManager::add_empolayer()
{
	cout << "������Ҫ��ӵ�����" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		// ������ӿռ�Ĵ�С
		int newSize = this->m_EmpNum + addNum;  // �¿ռ������

		// �����¿ռ�
		Worker ** newSpace = new Worker *[newSize];

		// ��ԭ�������ݿ������¿ռ�
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		// ���������
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int did;

			cout << "�������" << i + 1 << "��Ա�����" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "��Ա������" << endl;
			cin >> name;
			cout << "�������" << i + 1 << "��Ա����λ" << endl;
			cout << "1-->ְ��\n2-->����\n3-->�ϰ�" << endl;
			cin >> did;
			Worker * worker = NULL;
			switch (did)
			{
			case 1:
				worker = new Employer(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boos(id, name, 3);
				break;
			default:
				cout << "�������" << endl;
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;
		}

		// �ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		// �����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		// ����ְ������
		this->m_EmpNum = newSize;
		this->m_FileIsEmpty = false;

		cout << "��ӳɹ�" << endl;

		// �������ݵ��ļ���
		this->seve_file();
	}
	else
	{
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");
}


// �����ļ�
void WorkerManager::seve_file()
{
	ofstream ofs;
	ofs.open(FILLNAME, ios::out); // ������ķ�ʽ���ļ�  -- д�ļ�

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DId << endl;
	}

	// �ر��ļ�
	ofs.close();
}

// ��ȡ�ļ���������
void get_file_content()
{
}