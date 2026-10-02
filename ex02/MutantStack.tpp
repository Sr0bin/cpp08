/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 17:59:10 by rorollin          #+#    #+#             */
/*   Updated: 2026/10/02 18:27:30 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const Container &cont)
	: std::stack<T, Container>(cont)
{
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &other)
	: std::stack<T, Container>(other)
{
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &other)
{
	std::stack<T, Container>::operator=(other);
	return (*this);
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack(void)
{
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin(void)
{
	return (this->c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end(void)
{
	return (this->c.end());
}
