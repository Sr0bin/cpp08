/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:01:44 by rorollin          #+#    #+#             */
/*   Updated: 2026/10/01 17:02:16 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easytype.hpp"
#include <iostream>
#include <vector>
#include <list>

int	main(void)
{
	std::vector<int>	v;
	v.push_back(1);
	v.push_back(42);
	v.push_back(3);

	std::list<int>		l;
	l.push_back(10);
	l.push_back(20);

	try
	{
		std::cout << *easyfind(v, 42) << std::endl;
		std::cout << *easyfind(l, 20) << std::endl;
		std::cout << *easyfind(v, 99) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
