#include "builder.h"

void ConcreteBuilderFat::buildPartA()
{
	product->SetPartA("����ͷ");
}
void ConcreteBuilderFat::buildPartB()
{
	product->SetPartB("��������");
}

void ConcreteBuilderFat::buildPartC()
{
	product->SetPartC("���ӽ�");
}

Product* ConcreteBuilderFat::GetResult()
{
	return this->product;
}

ConcreteBuilderFat::ConcreteBuilderFat()
{
	product = new Product();
}

ConcreteBuilderFat::~ConcreteBuilderFat()
{
	delete product;
	product = NULL;
}


void ConcreteBuilderThin::buildPartA()
{
	product->SetPartA("����ͷ");
}
void ConcreteBuilderThin::buildPartB()
{
	product->SetPartB("��������");
}

void ConcreteBuilderThin::buildPartC()
{
	product->SetPartC("���ӽ�");
}

Product* ConcreteBuilderThin::GetResult()
{
	return this->product;
}

ConcreteBuilderThin::ConcreteBuilderThin()
{
	product = new Product();
}

ConcreteBuilderThin::~ConcreteBuilderThin()
{
	delete product;
	product = NULL;
}