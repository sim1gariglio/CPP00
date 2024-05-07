/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 09:29:03 by sgarigli          #+#    #+#             */
/*   Updated: 2024/05/07 15:54:45 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string cmd;
	PhoneBook instance;

	while(1)
	{
		std::cout << "Avaiable commands: ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			break;
		else if (cmd == "ADD")
			instance.addContact();
		else if (cmd == "SEARCH")
			instance.searchContact();
		else
			std::cout << "Invalid command" << std::endl;
	}
}