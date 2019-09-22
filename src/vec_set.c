/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiachko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:07:09 by vmiachko          #+#    #+#             */
/*   Updated: 2019/09/07 15:07:14 by vmiachko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libvec.h"

void vec_set(t_vec *vec, float x, float y, float z)
{
	vec->x = x;
	vec->y = y;
	vec->z = z;
}
