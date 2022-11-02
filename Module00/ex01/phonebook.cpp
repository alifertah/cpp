/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:52:36 by alfertah          #+#    #+#             */
/*   Updated: 2022/11/02 16:50:30 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(){
};
void    Phonebook::add()
{
    std::string str;
    this->tab[max_idx].setIdx(max_idx+1);
    
    std::cout << "FirstName : ";
    getline(std::cin, str);
    this->tab[max_idx].setFirstName(str);
    
    std::cout << "LastName : ";
    getline(std::cin, str);
    this->tab[max_idx].setLastName(str);
    
    std::cout << "Nickname : ";
    getline(std::cin, str);
    this->tab[max_idx].setNickName(str);
    
    std::cout << "Phone Num : ";
    getline(std::cin, str);
    this->tab[max_idx].setPhoneNumber(str);
    
    std::cout << "Darkest Secret : ";
    getline(std::cin, str);
    this->tab[max_idx].setDarkestSecret(str);
    
    this->max_idx += 1;
    if(this->max_idx == 8)
        max_idx = 0;
}

void    Phonebook::show()
{
    for(int i = 0; i < max_idx; i++)
    {
        std::cout << this->tab[i].getIdx() << "||";
        
        std::cout << "First Name:";
        std::cout << this->tab[i].getFirstName() << "||";
        
        std::cout << "Last Name :";
        std::cout << this->tab[i].getLastName() << "||";
        
        std::cout << "Nickname  :";
        std::cout << this->tab[i].getNickName() << std::endl;
    }
}

void    Phonebook::search()
{
    if(max_idx == 0)
        std::cout << "ther is no contact yet" << std::endl;
    else
    {
        show();
        int i;
        std::cin >> i;
        std::cout << this->tab[i].getFirstName() << "|";
        std::cout << this->tab[i].getLastName() << "|";
        std::cout << this->tab[i].getNickName() << "|"; 
        std::cout << this->tab[i].getPhoneNumber() << "|";
        std::cout << this->tab[i].getDarkestSecret() << "|";
    }
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