#include <iostream>

int main()
{
	std::string name = "Silvanei Martins";
	int health = 100;
	int damage = 100;
	float speed = 10.15f;
	float attackSpeed = 2.5f;

	std::cout << "RPG Platform Game!" << std::endl;

	std::cout << "Nome! " << name << std::endl;
	std::cout << "Voda! " << health << std::endl;
	std::cout << "Dano! " << damage << std::endl;
	std::cout << "Velocidade! " << speed << std::endl;
	std::cout << "Velocidade do Ataque! " << attackSpeed << std::endl;

	return 0;
}