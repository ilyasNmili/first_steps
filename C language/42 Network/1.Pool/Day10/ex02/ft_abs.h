/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inmili <inmili@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 17:35:40 by inmili            #+#    #+#             */
/*   Updated: 2023/09/04 19:12:46 by inmili           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ((Value < 0) * (-Value) + (Value >= 0) * Value)

#endif
/*
 * #ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(x) ((x) < 0 ? -(x) : (x))

#endif
*/
