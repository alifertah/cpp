#include "Zombie.hpp"

int main()
{
    Zombie *horde;
    int n = 5;
    horde = zombieHorde(n, "fertah");
    for (int i = 0; i < n; i++)
    {
        horde->announce();
    }
    delete[] horde;

    return (0);
 }