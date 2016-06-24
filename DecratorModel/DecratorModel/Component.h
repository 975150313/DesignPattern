#ifndef COMPONENT_H_
#define COMPONENT_H_
#include <iostream>

//����һ��ԭʼ�ĳ����൰�⣬װ�����Ĺ����Ǹ�������ϸ���װ�Σ������ͣ��ɿ����������ʣ������׵�
class Cake
{

public:
	virtual void showCake()=0;
	virtual ~Cake(){};
	std::string name;
};

class ConcreteCake :public Cake
{
public:
	ConcreteCake()
	{
		name = "ԭʼ����";
	}
	void showCake(){ std::cout << name.c_str() << std::endl; };
	virtual  ~ConcreteCake(){};
};

#endif