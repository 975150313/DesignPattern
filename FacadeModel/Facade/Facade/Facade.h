/*Facade Ϊ����࣬����ͻ��˵���������������˿ͻ��������ϵͳ��
ʹ�ÿͻ��˲���Ҫ֪����ϵͳ��ʵ��ϸ�ڣ�����ϵͳͨ�������ͳһ�����ṩ
����˵�и�VC�ı��빦�ܣ�ͨ��VC��BUILD�����ṩ�����ǲ���Ҫ֪���ڲ�
��ʶ�����������Ž����ȵȵ�ϸ��.

*/


#include<iostream>

class Class1
{
public:
	void MethodA(){ std::cout << "class 1 MethodA\n"; };

};

class Class2
{
public:
	void MethodB(){ std::cout << "class 2 MethodB\n"; };

};

class Class3
{
public:
	void MethodC(){ std::cout << "class 3 MethodC\n"; };

};

class Class4
{
public:
	void MethodD(){ std::cout << "class 4 MethodD\n"; };

};

class Class5
{
public:
	void MethodE(){ std::cout << "class 5 MethodE\n"; };

};

class Facade
{
public:
	Facade();
	~Facade();
	void FunctionA();
	void FuncTionB();
private:
	Class1* pm_class1;
	Class2* pm_class2;
	Class3* pm_class3;
	Class4* pm_class4;
	Class5* pm_class5;
};