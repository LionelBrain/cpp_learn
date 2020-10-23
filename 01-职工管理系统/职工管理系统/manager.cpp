#include <iostream>
#include "manager.h"

using namespace std;

// 构造函数
Manager::Manager(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DId = did;
}

// 显示个人信息
void Manager::show_info()
{
	cout << "职工编号: " << this->m_Id
		<< "\t职工姓名: " << this->m_Name
		<< "\t岗位: " << this->get_dep_name()
		<< "\t岗位职责: 上传下达."
		<< endl;
}

// 获取岗位信息
string Manager::get_dep_name()
{
	return string("经理");
}