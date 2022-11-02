/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:13:09 by alfertah          #+#    #+#             */
/*   Updated: 2022/11/02 16:55:29 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int     Contact::getIdx()
{
    return this->idx;
}

std::string     Contact::getFirstName()
{
    return this->firstName;
}

std::string     Contact::getLastName()
{
    return this->lastName;
}

std::string     Contact::getNickName()
{
    return this->nickName;
}


std::string     Contact::getPhoneNumber()
{
    return this->phoneNumber;
}

std::string     Contact::getDarkestSecret()
{
    return this->darkestSecret;
}

void Contact::setIdx(int i)
{
    this->idx = i;
}

void Contact::setFirstName(std::string first)
{
    this->firstName = first;
}

void Contact::setLastName(std::string last)
{
    this->lastName = last;
}

void Contact::setNickName(std::string nick)
{
    this->nickName = nick;
}

void Contact::setPhoneNumber(std::string phone)
{
    this->phoneNumber = phone;
}

void Contact::setDarkestSecret(std::string secret)
{
    this->darkestSecret= secret;
}