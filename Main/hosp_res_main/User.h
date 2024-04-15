#ifndef CUSER_H
#define  CUSER_H

#define ADMIN 1		//����Ա
#define USER 2		//�û�

#include<string>
#include<iostream>
using namespace std;

class User
{
public:
	User();			//Ĭ�Ϲ���
	User(string phoneNum, string pwd, int role, string sfzID, string name);		//���ι���
	~User();		//����
	string getName();			//��ȡ�û�����
	string getPwd();			//��ȡ�û�����
	int getRole();				//��ȡ�û����
	string getSfzID();			//��ȡ���֤����
	string getphoneNum();		//��ȡ�ֻ����� �û�id(�˺�)
	void setPwd(string pwd);	//�޸�����
	void setSfzID(string id);	//�޸����֤
	void setName(string name);	//�޸�����
protected:
	string name;		//�û����֣����ģ�
	string pwd;			//�û�����
	int role;			//�û����
	string IDNum;		//���֤����
	string phoneNum;	//�ֻ����� �û�id(�˺�)
};

#endif