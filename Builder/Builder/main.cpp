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
	//调用指挥者同样的构建过程Construct，可以创建不一样的对象，这就是讲对象的构建和表示分开，对象总是按照统一的步骤构建的
	return 0;
}