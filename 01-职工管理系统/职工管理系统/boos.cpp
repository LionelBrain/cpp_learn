#include <iostream>
#include "boos.h"

using namespace std;

// 构造函数
Boos::Boos(int id, string name, int did)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DId = did;
}

// 显示个人信息
void Boos::show_info()
{
	cout << "职工编号: " << this->m_Id
		<< "\t职工姓名: " << this->m_Name
		<< "\t岗位: " << this->get_dep_name()
		<< "\t岗位职责: 负责公司的日常运作."
		<< endl;
}

// 获取岗位信息
string Boos::get_dep_name()
{
	return string("总裁");
}