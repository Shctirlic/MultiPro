#include "structure.h"

void show_person(person& P)
{
	std::cout << "���: " << P.name << "\n";
	std::cout << "�������: " << P.age << "\n";
	std::cout << "���������: " << P.position << "\n";
	std::cout << "��������: " << P.salary << "\n";
}
