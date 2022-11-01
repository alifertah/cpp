/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:52:36 by alfertah          #+#    #+#             */
/*   Updated: 2022/11/01 02:39:07 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(){
};
void    Phonebook::add()
{
    std::string str;
    this->tab[max_idx].setIdx(max_idx+1);
    std::cout << "Fullname : ";
    getline(std::cin, str);
    this->tab[max_idx].setFullname(str);
    std::cout << "Phone : ";
    getline(std::cin, str);
    this->tab[max_idx].setPhone(str);
    this->max_idx += 1;
    if(this->max_idx == 8)
        max_idx = 0;
}

void    Phonebook::show()
{
    if(max_idx == 0)
        std::cout << "ther is no contact yet" << std::endl;
    else
        for(int i = 0; i < max_idx; i++)
        {
            std::cout << "Name :";
            std::cout << this->tab[i].getFullname();
            std::cout << "Phone:";
            std::cout << this->tab[i].getPhone() << std::endl;
        }
}

void    Phonebook::search()
{
    show();
    int i;
    std::cin >> i;
    std::cout << this->tab[i].getFullname();
    std::cout << this->tab[i].getPhone() << std::endl;
}

int main(void)
{
    std::string action;
    Phonebook *p = new Phonebook();    
    while(std::getline(std::cin, action))
    {
        if(action == "add")
            p->add();
        if(action == "search")
            {
            p->search();
            }
        if(action == "exit")
            return 0;
    }
}