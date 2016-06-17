#ifndef BUILDER_H_
#define BUILDER_H_
#include "product.h"
class builder
{

	//����ͳһ���蹹����Ʒ�����ǲ�Ʒ�Ĺ������̶Կͻ����ɼ��������Ϳ��Դ�����һ���Ĳ�Ʒ��������Ĺ��������ı�ʾʵ�ַ����Ŀ��
public:
	virtual void buildPartA(){};
	virtual void buildPartB(){};
	virtual void buildPartC(){};

public:
	Product *product;
};

class ConcreteBuilderFat : public builder
{
public:
	ConcreteBuilderFat();
	~ConcreteBuilderFat();
	void buildPartA();
	void buildPartB();
	void buildPartC();
	Product * GetResult();
};

class ConcreteBuilderThin : public builder
{
public:
	ConcreteBuilderThin();
	~ConcreteBuilderThin();
	void buildPartA();
	void buildPartB();
	void buildPartC();
	Product * GetResult();
};
#endif

