/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babonnet <babonnet@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:53:29 by bbonnet           #+#    #+#             */
/*   Updated: 2023/11/06 12:58:05 by babonnet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int i)
{
	return (i >= 0 && i <= 127);
}
