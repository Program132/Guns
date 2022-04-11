#include <iostream>
#include <string>

#include "headers/GunsManager.h"

int main()
{
    GunsManager gun;
    bool end = false;
    bool endCMD = false;

    while (!end) {
        gun.gunManagerInfo();
        std::string arg;
        std::cin >> arg;

        if (arg == "Y") {
            end = true;
            std::cout << "Your gun: \n- Type:" << gun.getType()<< "\n- Damage:" << gun.getDamage() << std::endl;
            break;
        }
        else if (arg == "N") {
            while (!endCMD) {
                std::cout << "To create your gun, you have 2 commands: 'type', 'damage'." << std::endl;
                std::cout << "If you want to leave this part, tell us 'leave'." << std::endl;
                std::string argument;
                std::cin >> argument;

                if (argument == "type") {
                    std::cout << "Give us the type of your gun (assault, grenade, pistol, etc.): " << std::endl;
                    std::string type;
                    std::cin >> type;
                    gun.setType(type);
                }
                else if (argument == "damage") {
                    std::cout << "Give us the damages of your gun: " << std::endl;
                    int damage;
                    std::cin >> damage;
                    gun.setDamage(damage);
                }
                else if (argument == "leave") {
                    endCMD = true;
                    break;
                }
            }
        }
        else {
            gun.gunManagerInfo();
        }
    }

    return 0;
}