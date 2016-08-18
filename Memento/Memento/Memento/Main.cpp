#include"Memento.h"

int main()
{
	CareTaker care;
	GameRole role;
	role.Show();
	care.Save(*(role.Save()));
	role.Attach();
	role.Show();
	care.Restore(0);
	role.Load(care.Restore(0));
	role.Show();
	return 0;
}