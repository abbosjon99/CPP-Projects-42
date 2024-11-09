/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:52:44 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/08 08:07:15 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
  public:
	// Getter methods
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickName(void);
	std::string getSecret(void);
	std::string getPhoneNumber(void);

	// Setter methods
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickName(std::string str);
	void setPhoneNumber(std::string str);
	void setSecret(std::string str);

  private:
	std::string phone_number;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string secret;
};

#endif