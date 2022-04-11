#include <iostream>
#include "GunsManager.h"

GunsManager::GunsManager() {
	_type = "Unknow";
	_damage = 0;
}

void GunsManager::gunManagerInfo() {
	std::cout << "Welcome ! In this program you can create your own gun." << std::endl;
	std::cout << "To create your gun, you have 2 commands: 'type', 'damage'." << std::endl;
	std::cout << "If you want to leave tell us:'Y' or 'N' if you want to continue." << std::endl;
}

void GunsManager::setType(std::string type) {
	_type = type;
}

void GunsManager::setDamage(int damage) {
	if (damage <= 0) {
		std::cout << "Your gun can not do 0 damage!" << std::endl;
	}
	else if (damage > 25) {
		std::cout << "Your gun can not do more than 25 damage." << std::endl;
	}
	else {
		_damage = damage;
	}
}

std::string GunsManager::getType() const {
	return _type;
}

int GunsManager::getDamage() const {
	return _damage;
}