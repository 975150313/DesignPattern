#include "Template.h"
#include <iostream>
void AbstractClass::TemplateMethod()
{
	//ģ�巽�������㷨�ĹǼ�
	PrimitiveOperation1();
	PrimitiveOperation2();
}

void ConcreteClass1::PrimitiveOperation1()
{
	std::cout << "�㷨����1" << std::endl;
}

void ConcreteClass1::PrimitiveOperation2()
{
	std::cout << "�㷨����2" << std::endl;
}

void ConcreteClass2::PrimitiveOperation1()
{
	std::cout << "��ɲ���1" << std::endl;
}

void ConcreteClass2::PrimitiveOperation2()
{
	std::cout << "��ɲ���2" << std::endl;
}