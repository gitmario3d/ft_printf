/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:05:30 by malena-b          #+#    #+#             */
/*   Updated: 2023/10/05 09:15:14 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_printf(char const *str, ...);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printdecimal(int n);
int	ft_printunsint(unsigned int n);
int	ft_printhex(unsigned long i, char c);

#endif