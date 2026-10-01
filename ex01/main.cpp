/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:40:00 by rorollin          #+#    #+#             */
/*   Updated: 2026/10/02 17:54:25 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <climits>

int	main(void)
{
	std::cout << "--- subject ---" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "--- 10000 numbers (addRange) ---" << std::endl;
	std::vector<int>	big;
	for (int i = 0; i < 10000; i++)
		big.push_back(i * 3);
	Span	bigSpan(10000);
	bigSpan.addRange(big.begin(), big.end());
	std::cout << bigSpan.shortestSpan() << std::endl;
	std::cout << bigSpan.longestSpan() << std::endl;

	std::cout << "--- INT_MIN / INT_MAX ---" << std::endl;
	Span	ext(2);
	ext.addNumber(INT_MIN);
	ext.addNumber(INT_MAX);
	std::cout << ext.longestSpan() << std::endl;

	std::cout << "--- errors ---" << std::endl;
	try
	{
		sp.addNumber(42);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Span	one(1);
		one.addNumber(1);
		one.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	try
	{
		Span	small(3);
		small.addRange(big.begin(), big.end());
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
