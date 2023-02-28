/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   png.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alflores <alflores@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:43:21 by alflores          #+#    #+#             */
/*   Updated: 2023/02/23 17:45:23 by alflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

int main()
{
	void	*img;
	void	*mlx;

	mlx = mlx_init();
	img = mlx_new_image(mlx, 1920, 1080);
}