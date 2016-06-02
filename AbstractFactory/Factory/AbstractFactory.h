/*���󹤳�ģʽ��һ���򵥵�ģʽ��ʹ�õĳ����ǳ��࣬����������Ʒ���������У�
�漰����ͬ����ϵͳ��ʱ�򣬶����Կ���ʹ�ó��󹤳�ģʽ������һ��Ӧ�ã���Ҫ��������ͬƽ̨�����У�
Windows��Linux��Android��Google�����������ն˲���ϵͳ�������У������ô��ƣ��ֱ�������ײ�ͬ��Ӧ�ã���Ҳ��Ҳ��
ͨ�����󹤳�ģʽ���ε�����ϵͳ��Ӧ�õ�Ӱ�졣������ͬ����ϵͳ�ϵ�������ܡ�Ӧ���߼���UI��Ӧ���Ƿǳ����ƣ�Ψһ��ͬ���ǵ��ò�ͬ�Ĺ���������
�ɲ�ͬ�Ĳ�Ʒ��ȥ���������ϵͳ��������Ϣ��*/



#include "Product.h"

class ProductA;
class ProductB;
class AbstreactFactory
{
public:
	virtual ProductA* CreateProductA() = 0;
	virtual ProductB* CreateProductB() = 0;
};

class ConcreteFactoryA : public AbstreactFactory
{
public:
	ConcreteFactoryA(){};
	virtual ~ConcreteFactoryA(){};
	virtual ProductA* CreateProductA();
	virtual ProductB* CreateProductB();
};

class ConcreteFactoryB : public AbstreactFactory
{
public:
	ConcreteFactoryB(){};
	virtual ~ConcreteFactoryB(){};
	virtual ProductA* CreateProductA();
	virtual ProductB* CreateProductB();
};