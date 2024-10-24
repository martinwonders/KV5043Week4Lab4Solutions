#include <iostream>

namespace Player
{
	const int MAX_HEALTH = 100;
	const int DAMAGE_INCREMENT = 10;
}

int CauseDamage();

int main()
{
	std::cout << "The players health is: " << Player::MAX_HEALTH << std::endl;
	std::cout << "Remaining Health = " << CauseDamage() << std::endl;
	return 0;
}

int CauseDamage()
{
	int numberOfHits = 0;
	int remainingHealth = 0;

	std::cout << "Enter the number of hits the player takes: ";
	std::cin >> numberOfHits;

	int totalDamage = numberOfHits * Player::DAMAGE_INCREMENT;
	remainingHealth = Player::MAX_HEALTH - totalDamage;

	if (remainingHealth < 0)
	{
		remainingHealth = 0;
	}

	return remainingHealth;
}