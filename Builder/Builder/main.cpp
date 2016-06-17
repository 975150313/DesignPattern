#include "Director.h"

int main()
{
	ConcreteBuilderFat *mBuilderfat = new ConcreteBuilderFat();
	Director dir;
	dir.SetBuilder(mBuilderfat);
	dir.Construct();
	Product *fat = mBuilderfat->GetResult();
	fat->ShowPartA();
	fat->ShowPartB();
	fat->ShowPartC();


	ConcreteBuilderThin * mbuilderThin = new ConcreteBuilderThin();
	dir.SetBuilder(mbuilderThin);
	dir.Construct();
	Product* thin = mbuilderThin->GetResult();
	thin->ShowPartA();
	thin->ShowPartB();
	thin->ShowPartC();
	delete mBuilderfat;
	delete mbuilderThin;
	//����ָ����ͬ���Ĺ�������Construct�����Դ�����һ���Ķ�������ǽ�����Ĺ����ͱ�ʾ�ֿ����������ǰ���ͳһ�Ĳ��蹹����
	return 0;
}