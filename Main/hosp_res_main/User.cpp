#include "User.h"
#include <iostream>
using namespace std;

//Ĭ�Ϲ���
User::User()
{
}

//���ι���
User::User(string phoneNum, string pwd, int role, string sfzID, string name)
{
	//���Ը�ֵ
	this->name = name;
	this->pwd = pwd;
	this->role = role;
	this->sfzID = sfzID;
	this->phoneNum = phoneNum;
}

//����
User::~User()
{
}

//��ȡ�û�����
string User::getName()
{
	return this->name;
}
//��ȡ�û�����
string User::getPwd()
{
	return this->pwd;
}
//��ȡ�û���ɫ
int User::getRole()
{
	return this->role;
}
//��ȡ�û����֤����
string User::getSfzID()
{
	return this->sfzID;
}
//��ȡ�û��ֻ�����
string User::getphoneNum()
{
	return this->phoneNum;
}

//�޸��û�����
void User::setPwd(string pwd)
{
	this->pwd = pwd;
}
//�޸��û����֤����
void User::setSfzID(string id)
{
	this->sfzID = id;
}
//�޸��û�����
void User::setName(string name)
{
	this->name = name;
}