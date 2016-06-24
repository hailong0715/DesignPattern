#include "Decrator.h"

int main()
{
	ConcreteCake *pConCake = new ConcreteCake();
	pConCake->showCake();
	
	CakeDecratorMilk* pDecMilk = new CakeDecratorMilk(pConCake);
	pDecMilk->showCake();
	CakeDecratorCholate *pDecCho = new CakeDecratorCholate(pDecMilk);
	pDecCho->showCake();

	delete pConCake;
	delete pDecMilk;
	delete pDecCho;
	return 0;
}