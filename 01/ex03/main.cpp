#include <string>
#include "./HumanA.hpp"
#include "./HumanB.hpp"
#include "./Weapon.hpp"

int main() {
    {
        Weapon c;
        c = Weapon("crude spiked club");
        Weapon club(c);
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    } 
    {
        Weapon club;
        club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0; 
}