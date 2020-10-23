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
	// ��¼ְ������
	int m_EmpNum;

	// ְ�������ָ��
	Worker ** m_EmpArray;

	// �ж��ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	// ���캯��
	WorkerManager();

	// չʾ�˵�
	void Show_Menu();

	// �˳��ӿ�
	void Exit_System();

	// ���ְ���ӿ�
	void add_empolayer();

	// �����ļ�
	void seve_file();

	// ��ȡ�ļ���������
	void get_file_content();

	// ��������
	~WorkerManager();
};