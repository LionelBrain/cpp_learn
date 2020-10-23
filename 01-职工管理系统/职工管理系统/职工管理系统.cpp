#include <iostream>
#include <string>
#include "workerManager.h"
#include "worker.h"
#include "employer.h"
#include "boos.h"
#include "manager.h"
using namespace std;

// 调试测试函数
void test()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
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
	// 实例化管理对象
	WorkerManager wm;
	
	int choice = 0;  // 用来储存用户的选项
	//// 测试代码
	//Worker * worker = NULL;
	//worker = new Manager(1, "张三", 1);
	//worker->show_info();
	//

	while (true)
	{
		wm.Show_Menu(); // 打印菜单

		cout << "请输入要使用的功能" << endl;
		cin >> choice;
		
		switch (choice)
		{
		case 0:  // 退出系统
			wm.Exit_System();
			break;
		case 1:  // 增加职工
			wm.add_empolayer();
			break;
		case 2:  // 显示职工
			break;
		case 3:  // 删除职工
			break;
		case 4:  // 修改职工
			break;
		case 5:  // 查找职工
			break;
		case 6:  // 排序
			break;
		case 7:  // 清空
			test();
			break;
		default:
			cout << "输入错误,请重新输入" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}