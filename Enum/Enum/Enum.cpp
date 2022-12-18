
#include "Weapon.h"
#include "Magic.h"
#include "User.h"
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    Weapon AWP("AWP", 115, 5, KindOfWeapon::TWOHANDED);    
    
    cout << AWP << endl;   
        
    User BiBitka("ip.567891234", "BiBitka", "1234_@Vovka_Put");
    cout << endl << BiBitka << endl;
        
    MagicWeapon Wand("Волшебная палочка", 50000, 2000, 0.3, KindOfWeapon::ONEHANDED);
    cout << endl<<"Поднимит ли Рон волшебную палочку весом 300 граммов, если он может поднят Гермиону?" << (Wand.raise(0.3) ? "\n - Yes" : "\n - No") << endl<<endl;

    cout << Wand << endl;
}

