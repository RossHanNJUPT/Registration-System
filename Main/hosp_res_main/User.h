#ifndef CUSER_H
#define  CUSER_H

#define ADMIN 1		//管理员
#define USER 2		//用户

#include<string>
#include<iostream>
using namespace std;

class User
{
public:
	User();			//默认构造
	User(string phoneNum, string pwd, int role, string sfzID, string name);		//带参构造
	~User();		//析构
	string getName();			//获取用户名字
	string getPwd();			//获取用户密码
	int getRole();				//获取用户身份
	string getSfzID();			//获取身份证号码
	string getphoneNum();		//获取手机号码 用户id(账号)
	void setPwd(string pwd);	//修改密码
	void setSfzID(string id);	//修改身份证
	void setName(string name);	//修改名字
protected:
	string name;		//用户名字（中文）
	string pwd;			//用户密码
	int role;			//用户身份
	string IDNum;		//身份证号码
	string phoneNum;	//手机号码 用户id(账号)
};

#endif