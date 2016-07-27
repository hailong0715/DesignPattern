#include "Adapter.h"

int main()
{
	Player* bt = new Guards("batier");
	bt->Attack();
	
	Player* md = new Forwards("MgRadi");
	md->Attack();

	Player* ym = new Translater("yaoming");
	ym->Attack();
	ym->Defend();

	delete bt;
	delete md;
	delete ym;
	return 0;
}