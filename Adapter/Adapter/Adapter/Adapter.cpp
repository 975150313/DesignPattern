#include "Adapter.h"

void Forwards::Attack()
{
	std::cout <<  "Forwards " << m_name.c_str() << " Attack\n";
}

void Forwards::Defend()
{
	std::cout << "Forwards " << m_name.c_str() << "Defend\n";
}

void Center::Attack()
{
	std::cout << "Center " << m_name.c_str() << " Attack\n";
}

void Center::Defend()
{
	std::cout << "Center " << m_name.c_str() << " Defend\n";
}

void Guards::Attack()
{
	std::cout << "Guards " << m_name.c_str() << " Attack\n";
}

void Guards::Defend()
{
	std::cout << "Guards " << m_name.c_str() << " Defend\n";
}

void FroeignCenter::Attack()
{
	std::cout << "�⼮�з棺" << m_name.c_str() << "����\n";
}

void FroeignCenter::Defend()
{
	std::cout << "�⼮�з棺" << m_name.c_str() << "����\n";
}

Translater::Translater(const char* name) :Player(name)
{
	pForCenter = new FroeignCenter(name);
}

void Translater::Attack()
{
	pForCenter->Attack();
}

void Translater::Defend()
{
	pForCenter->Defend();
}