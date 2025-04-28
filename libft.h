/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:19:03 by tmorais-          #+#    #+#             */
/*   Updated: 2025/04/28 18:53:24 by tmorais-         ###   ########.fr       */
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
    size_t ft_strlen(const char *s);

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
    int ft_isalpha(int c);

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
    int ft_toupper(int c);

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
    int ft_tolower(int c);
	
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
	int ft_isprint(int c);

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
	int ft_isdigit(int c);

DESCRIPTION
	Checks for a digit (0 through 9).

RETURN VALUE
	The values returned are nonzero if the character c falls into the tested 
	class, and zero if not.

ATTRIBUTES
	Thread safety - MT-Safe.
*/

int		ft_atoi(const char *nptr);

/*
NAME
	ft_atoi - convert a string to an integer.

SYNOPSIS
	int	ft_atoi(const char *nptr);

DESCRIPTION
	The ft_atoi() function converts the initial portion of the string pointed to 
	by nptr to int. The behavior is the same as ft_strtol(nptr, NULL, 10);
    except that ft_atoi() does not detect errors.

RETURN VALUE
	The converted value or 0 on error.

ATTRIBUTES
	Thread safety - MT-Safe locale.
*/

int		ft_strncmp(const char s1[.n], const char s2[.n], size_t n);

/*
NAME
	ft_strncmp - compare two strings.

SYNOPSIS
	int ft_strncmp(const char s1[.n], const char s2[.n], size_t n);

DESCRIPTION
	The ft_strncmp() function compares the two strings s1 and s2.  The locale is 
	not	taken into account (for a locale-aware comparison, see ft_strcoll(3)).  
	The comparison is done using unsigned characters.

       ft_strncmp() returns an integer indicating the result of the comparison,
	   as follows:

       •  0, if the s1 and s2 are equal;

       •  a negative value if s1 is less than s2;

       •  a positive value if s1 is greater than s2;
	   
	   •  it compares only the first (at most) n bytes of s1 and s2.

RETURN VALUE
	The strncmp() function returns an integer less than, equal to, or greater 
	than zero if s1 (or the first n bytes thereof) is found, respectively, to 
	be less than, to match, or be greater than s2.

ATTRIBUTES
	Thread safety - MT-Safe.
*/

char	*ft_strnstr(const char haystack[.len],
			const char needle[.len], size_t len);

/*
NAME
	ft_strnstr - locate a substring in a string, where length is limited.

SYNOPSIS
	char *ft_strnstr(const char haystack[.len],
			const char needle[.len], size_t len);

DESCRIPTION
	The ft_strnstr() function locates the first occurrence of the null-terminated
	string needle in the string haystack, where not more than len characters are
	searched. Characters that appear after a '\0' character are not searched.

	If needle is an empty string, haystack is returned; if needle occurs nowhere
	in haystack within the first len characters, NULL is returned.

	The search is case-sensitive and does not consider locale-specific rules.

RETURN VALUE
	If needle is found within the first len characters of haystack, a pointer to
	the beginning of the located substring is returned. If needle is not found,
	NULL is returned. If needle is an empty string, haystack is returned.

ATTRIBUTES
	Thread safety - MT-Safe.
*/

size_t	ft_strlcpy(char dst[.size], const char *src, size_t size);

/*
NAME
	ft_strlcpy - copy a string to a sized buffer.

SYNOPSIS
	size_t ft_strlcpy(char dst[.size], const char *src, size_t size);

DESCRIPTION
	The ft_strlcpy() function copies up to size - 1 characters from the
	null-terminated string src to dst, null-terminating the result.

	This function is designed to be safer, more consistent, and less error-prone
	than strncpy(). Unlike strncpy(), ft_strlcpy() guarantees null-termination
	(as long as size is greater than 0) and never writes more than size bytes
	(including the null byte) to dst.

	The source and destination strings should not overlap, as this will result
	in undefined behavior.

RETURN VALUE
	The ft_strlcpy() function returns the total length of the string it tried to
	create — that is, the length of src. If the return value is greater than or
	equal to size, truncation occurred.

ATTRIBUTES
	Thread safety - MT-Safe.
*/

size_t	ft_strlcat(char dst[.size], const char *src, size_t size);

/*
NAME
	ft_strlcat - concatenate two strings into a limited-size buffer.

SYNOPSIS
	size_t ft_strlcat(char dst[.size], const char *src, size_t size);

DESCRIPTION
	The ft_strlcat() function appends the null-terminated string src to the end
	of dst. It will append at most size - strlen(dst) - 1 bytes, null-terminating
	the result.

	It is designed to be a safer, more consistent, and less error-prone 
	replacement for strncat(). Unlike strncat(), ft_strlcat() takes the full size
	of the buffer (dst), not the remaining space. It also ensures 
	null-termination as long as	size is greater than 0.

	The strings dst and src should not overlap, as this will result in undefined
	behavior.

RETURN VALUE
	The ft_strlcat() function returns the total length of the string it tried to
	create — that is, the initial length of dst plus the length of src. If the 
	return value is greater than or equal to size, truncation occurred.

ATTRIBUTES
	Thread safety - MT-Safe.
*/

#endif