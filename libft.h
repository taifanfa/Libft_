/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:19:03 by tmorais-          #+#    #+#             */
/*   Updated: 2025/04/22 22:19:07 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

size_t	ft_strlen(const char *str);

/*
NAME
	ft_strlen - calculate the length of a string.
 
SYNOPSIS
    Size_t ft_strlen(const char *s);

DESCRIPTION
	The ft_strlen() function calculates the length of the 
	string pointed to by s, excluding the terminating null byte('\0').

RETURN VALUE
	The ft_strlen() function returns the number of bytes in the string
	pointed to by s.

ATTRIBUTES
	Thread safety - MT-Safe.
*/

int		ft_isalpha(int c);

/*
NAME
	ft_isalpha - character classification function.

SYNOPSIS
	#include <ctype.h>

       int isalpha(int c);

DESCRIPTION
	Checks for an alphabetic character; in the standard "C" locale, it is 
	equivalent to (isupper(c) ||  is‐lower(c)). In some locales, there may be 
	additional characters for which isalpha() is true—letters which are neither 
	uppercase nor lowercase.

RETURN VALUE
	The values returned are nonzero if the character c falls into the tested 
	class, and zero if not.

ATTRIBUTES
	Thread safety - MT-Safe.
*/

int		ft_toupper(int c);

/*
NAME
	ft_toupper - convert lowercase to uppercase.

SYNOPSIS
	#include <ctype.h>

       int toupper(int c);

DESCRIPTION
	This function convert lowercase letters to uppercase.
    If c is a lowercase letter, ft_toupper() returns its uppercase equivalent, 
	if an uppercase representation exists in the current locale.  Otherwise, 
	it returns c.
	
RETURN VALUE
	The value returned is that of the converted letter, or c if the conversion 
	was not possible.
	
ATTRIBUTES
	Thread safety - MT-Safe.
*/

int		ft_tolower(int c);

/*
NAME
	ft_tolower - convert uppercase to lowercase.

SYNOPSIS
	 #include <ctype.h>

       int tolower(int c);
	
DESCRIPTION
	This function convert uppercase letters to lowercase.
	If c is an uppercase letter, ft_tolower() returns its lowercase equivalent, 
	if a lowercase representation exists in the current locale. Otherwise, it 
	returns c.

RETURN VALUE
	The value returned is that of the converted letter, or c if the conversion 
	was not possible.

ATTRIBUTES
	Thread safety - MT-Safe.
*/

int		ft_isprint(int c);

/*
NAME
	ft_isprint() - character classification function.

SYNOPSIS
	#include <ctype.h>
	
	int isprint(int c);

DESCRIPTION
	Checks for any printable character including space.

RETURN VALUE
	The values returned are nonzero if the character c falls into the tested 
	class, and zero if not.

ATTRIBUTES
	Thread safety - MT-Safe.
*/

int		ft_isdigit(int c);

/*
NAME
	ft_isdigit() - character classification function.

SYNOPSIS
	#include <ctype.h>

	int isdigit(int c);

DESCRIPTION
	Checks for a digit (0 through 9).

RETURN VALUE
	The values returned are nonzero if the character c falls into the tested 
	class, and zero if not.

ATTRIBUTES
	Thread safety - MT-Safe.
*/

#endif