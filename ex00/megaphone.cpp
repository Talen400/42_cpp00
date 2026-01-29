/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:06:38 by tlavared          #+#    #+#             */
/*   Updated: 2026/01/28 17:17:35 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char *argv[])
{
	if (argc != 1)
	{
		for (int i = 1; argv[i];i++)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				std::cout << (char ) toupper(argv[i][j]);
			}
			std::cout << " ";
		}
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return (0);
}
