/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easytype.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 17:02:21 by rorollin          #+#    #+#             */
/*   Updated: 2026/10/02 19:12:17 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYTYPE_HPP
# define EASYTYPE_HPP
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &cont, int i)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), i);
	if (it != cont.end())
		return it;
	throw std::out_of_range("Nothing found");
}

template <typename T>
typename T::const_iterator easyfind(const T &cont, int i)
{
	typename T::const_iterator it = std::find(cont.begin(), cont.end(), i);
	if (it != cont.end())
		return it;
	throw std::out_of_range("Nothing found");
}

#endif
