#ifndef CDOCARRANGE_H
#define CDOCARRANGE_H

#define ADMIN 1
#define USER 2
#define DOCTOR 3

#include <string>
#include <iostream>
using namespace std;

class DocArrange
{
public:
	DocArrange();
	DocArrange(int DocID, string DocName, string DocDepartment, string DocPos, bool DocState, string DocIntro);
	~DocArrange();
	int getDocID();
	string getDocName();
	string getDocDepartment();
	string getDocPos();
	bool getDocState();
	string getDocIntro();
	void setDocID();
	void setDocName();
	void setDocDepartment();
	void setDocPos();
	void setDocState();
	void setDocIntro();
protected:
	int DocID;
	string DocName;
	string DocDepartment;
	string DocPos;
	bool DocState;
	string DocIntro;
};

#endif
