#include "AWeapon.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
    Character* moi = new Character("moi");

    std::cout << *moi;

    Enemy* b = new RadScorpion();
    Enemy* m = new SuperMutant();


    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    moi->attack(b);
    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);

    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->recoverAP();
    std::cout << *moi;
    moi->attack(m);
    moi->recoverAP();
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(m);
    moi->recoverAP();
    std::cout << *moi;
    moi->attack(m);
    moi->attack(m);
    moi->attack(m);
    moi->equip(pf);
    moi->attack(m);
    moi->attack(m);
    std::cout << *moi;

    return 0;
}