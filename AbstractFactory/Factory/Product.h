#ifndef PRODUCT_H_
#define PRODUCT_H_

//ProductA �� ProductB �ֱ�������ֲ�ͬ��Ʒ���ֻ��͵���.����ProductA�����ֻ� ��ProductB�������

//ProductA1����Linux����ϵͳ���ֻ���ProductA2����windowsxϵͳ�ֻ�
class ProductA
{
public:
	virtual void show() = 0;
};


class ProductA1 : public ProductA
{
public:
	ProductA1(){};
	virtual ~ProductA1(){};
	virtual void show();
};

class ProductA2 : public ProductA
{
public:
	ProductA2(){};
	virtual ~ProductA2(){};
	virtual void show();
};


class ProductB
{
public:
	ProductB(){};
	virtual ~ProductB(){};
	virtual void show()=0;
};

//ProductB1����Linux����ϵͳ�ĵ��ԣ�ProductB2����Windowsϵͳ�ĵ���
class ProductB1 :public ProductB
{
public:
	ProductB1(){};
	virtual ~ProductB1(){};
	virtual void show();
};

class ProductB2 :public ProductB
{
public:
	ProductB2(){};
	virtual ~ProductB2(){};
	virtual void show();
};
#endif