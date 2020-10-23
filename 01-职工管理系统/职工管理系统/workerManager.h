#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "worker.h"
#include "employer.h"
#include "boos.h"
#include "manager.h"

#define FILLNAME "empFile.txt"
using namespace std;

class WorkerManager
{
public:
	// 记录职工人数
	int m_EmpNum;

	// 职工数组的指针
	Worker ** m_EmpArray;

	// 判断文件是否为空
	bool m_FileIsEmpty;

	// 构造函数
	WorkerManager();

	// 展示菜单
	void Show_Menu();

	// 退出接口
	void Exit_System();

	// 添加职工接口
	void add_empolayer();

	// 保存文件
	void seve_file();

	// 获取文件内容数量
	void get_file_content();

	// 析构函数
	~WorkerManager();
};