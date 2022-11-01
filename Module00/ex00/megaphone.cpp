/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:23:08 by alfertah          #+#    #+#             */
/*   Updated: 2022/10/20 18:35:57 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

using namespace std;

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    if(ac > 1)
    {
        while(i < ac)
        {
            j = 0;
            while(av[i][j])
            {
                av[i][j] = toupper(av[i][j]);
                cout << av[i][j];
                j++;
            }
                cout << " ";
            i++;
        }
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    cout << endl;
}