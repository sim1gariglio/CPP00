/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:32:48 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/07 15:58:55 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook
{
	public:
	PhoneBook(void);
	~PhoneBook(void);
	bool addContact(void);
	void searchContact(void);
	void printContact(void);
	
	private:
	Contact contacts[8];
};

#endif

