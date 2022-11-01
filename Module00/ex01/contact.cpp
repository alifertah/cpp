/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:13:09 by alfertah          #+#    #+#             */
/*   Updated: 2022/10/31 16:19:49 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int     Contact::getIdx()
{
    return this->idx;
}

std::string     Contact::getFullname()
{
    return this->fullname;
}

std::string     Contact::getPhone()
{
    return this->phone;
}

void Contact::setIdx(int i)
{
    this->idx = i;
}

void Contact::setFullname(std::string name)
{
    this->fullname = name;
}

void Contact::setPhone(std::string phone)
{
    this->phone = phone;
}