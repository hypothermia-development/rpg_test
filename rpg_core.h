#include "class_core.h"
#include "class_core.cpp"



/*

RPG Core v1

This core contains the implementation of enemies, combat, xp, quests, etc.

*/

ext int starting_class;
// 1 = fighter, 2 = wizard, 3 = ranger
ext int lvl;

// x = attacker damage
// y = defender ac
// z = defender health

void attack(int x, int y, int z) 
{
    int return_value = 0;

    return_value = x - y;

    return_value = z - return_value;

    
    return return_value;
}



class enemy
{
public:

    int health;
    int ac;
    int damage;



}






//quests

class quest
{
public:
    

    int diff; 
    int reward_money;
    int reward_xp;


    bool isActive;

    void onStart() 
    {
        isActive = true;    
    }

    void onEnd(int starting_money, int starting_xp)
    {
        isActive = false;
        starting_money = reward_money + starting_money;
        starting_xp = reward_xp + starting_xp;
    }
}


