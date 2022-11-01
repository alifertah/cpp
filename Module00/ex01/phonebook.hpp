/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:09:43 by alfertah          #+#    #+#             */
/*   Updated: 2022/11/01 02:35:40 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <string>
#include "contact.hpp"
#include <cctype>
#include <iomanip>

class Phonebook{
    public:
        Phonebook();
        int max_idx = 0;
        Contact tab[8];
        void    add();
        void    show();
        void    search();
};

#endif