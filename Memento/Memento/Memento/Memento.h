#include <vector>
class Memento;
class GameRole
{
private:
	int m_blood;
	int m_enery;
public:
	GameRole(int blood = 100, int energy = 100);
	Memento* Save();
	void Load(Memento&);
	void Attach();
	void Show() const;
};

class Memento
{
public:
	int m_blood;
	int m_enery;

	Memento(int blood=0, int energy=0);

	void SetState(const int, const int);

};

class CareTaker
{
private:
	std::vector<Memento> vec;
public:
	void Save(Memento);
	Memento Restore(int index);
};