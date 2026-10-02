/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 17:55:58 by rorollin          #+#    #+#             */
/*   Updated: 2026/10/02 19:12:43 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:

	typedef typename Container::iterator	iterator;
	typedef typename Container::reverse_iterator	reverse_iterator;
	typedef typename Container::const_iterator	const_iterator;
	typedef typename Container::const_reverse_iterator	const_reverse_iterator;

	MutantStack(const Container &cont = Container());
	MutantStack(const MutantStack &other);
	MutantStack &operator=(const MutantStack &other);
	~MutantStack(void);

	iterator	begin(void);
	iterator	end(void);

	reverse_iterator	rbegin(void);
	reverse_iterator	rend(void);

	// called on a const MutantStack: read-only iterators
	const_iterator	begin(void) const;
	const_iterator	end(void) const;

	const_reverse_iterator	rbegin(void) const;
	const_reverse_iterator	rend(void) const;
};

# include "MutantStack.tpp"
#endif
