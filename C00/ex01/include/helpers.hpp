/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:23:09 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/12 22:02:21 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERS_HPP
# define HELPERS_HPP

# include <iostream>
# include <string>

void	printHeader(void);
std::string promptToGet(std::string varname, bool isNumber);
void	printValue(std::string value);
std::string intToString(int number);

#endif