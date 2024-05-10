/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:30:54 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/10 11:59:13 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <cstdio>

class Contact
{
	public:

	Contact(void);
	~Contact(void);
	void setIndex(int index);
	void setFirstName(const std::string firstName);
	void setLastName(const std::string lastName);
	void setNickname(const std::string nickname);
	void setPhoneNumber(const std::string phoneNumber);
	void setDarkestSecret(const std::string darkestSecret);
	int	getIndex(void) const;
	std::string	getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;

	private:
	int			_index;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

#endif