#include "workerManager.h"

WorkerManager::WorkerManager()
{
	// 1.文件不存在

	ifstream ifs;
	ifs.open(FILLNAME, ios::in);

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		// 初始化属性
		// 初始化记录人数
		this->m_EmpNum = 0;
		// 初始化数组指针
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		return;
	}

	// 文件存在,数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		// 文件为空
		// 初始化属性
		// 初始化记录人数
		cout << "文件为空" << endl;
		this->m_EmpNum = 0;
		// 初始化数组指针
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
	cout << "***** 欢迎使用职工管理系统 *****" << endl;
	cout << "******** 0-退出管理程序  *******" << endl;
	cout << "******** 1-增加职工信息  *******" << endl;
	cout << "******** 2-显示职工信息  *******" << endl;
	cout << "******** 3-删除离职职工  *******" << endl;
	cout << "******** 4-修改职工信息  *******" << endl;
	cout << "******** 5-查找职工信息  *******" << endl;
	cout << "******** 6-按照编号排序  *******" << endl;
	cout << "******** 7-清空管理程序  *******" << endl;
	cout << "********************************" << endl;
	cout << endl;
}

// 退出接口
void WorkerManager::Exit_System()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

// 添加职工接口
void WorkerManager::add_empolayer()
{
	cout << "请输入要添加的数量" << endl;
	int addNum = 0;
	cin >> addNum;
	if (addNum > 0)
	{
		// 计算添加空间的大小
		int newSize = this->m_EmpNum + addNum;  // 新空间的人数

		// 开辟新空间
		Worker ** newSpace = new Worker *[newSize];

		// 将原来的数据拷贝到新空间
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		// 添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id;
			string name;
			int did;

			cout << "请输入第" << i + 1 << "个员工编号" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个员工姓名" << endl;
			cin >> name;
			cout << "请输入第" << i + 1 << "个员工岗位" << endl;
			cout << "1-->职工\n2-->经理\n3-->老板" << endl;
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
				cout << "输入错误" << endl;
				break;
			}
			newSpace[this->m_EmpNum + i] = worker;
		}

		// 释放原有空间
		delete[] this->m_EmpArray;

		// 更改新空间的指向
		this->m_EmpArray = newSpace;

		// 更新职工人数
		this->m_EmpNum = newSize;
		this->m_FileIsEmpty = false;

		cout << "添加成功" << endl;

		// 保存数据到文件中
		this->seve_file();
	}
	else
	{
		cout << "输入有误" << endl;
	}

	system("pause");
	system("cls");
}


// 保存文件
void WorkerManager::seve_file()
{
	ofstream ofs;
	ofs.open(FILLNAME, ios::out); // 用输出的方式打开文件  -- 写文件

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DId << endl;
	}

	// 关闭文件
	ofs.close();
}

// 获取文件内容数量
void get_file_content()
{
}