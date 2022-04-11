#ifndef GUNSMANAGER_HPP_INCLUDED
#define GUNSMANAGER_HPP_INCLUDED

#include <iostream>

class GunsManager
{
	public:
		GunsManager(); // Constructor

		static void gunManagerInfo();
		void setType(std::string type);
		std::string getType() const;
		void setDamage(int damage);
		int getDamage() const;

	private:
		std::string _type;
		int _damage;


};

#endif // GUNSMANAGER_HPP_INCLUDED