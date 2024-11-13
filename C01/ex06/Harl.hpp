/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:17:22 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/13 14:33:59 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
  private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);

  public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif