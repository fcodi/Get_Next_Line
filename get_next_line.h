/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 16:39:19 by fcodi             #+#    #+#             */
/*   Updated: 2019/07/03 19:22:51 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include "libft/includes/libft.h"
# define BUFF_SIZE 1
# define TFILE_HEAD 1
# define TFILE_NONE 0

int						get_next_line(const int fd, char **line);

typedef struct s_file	t_file;

struct					s_file
{
	int					fd;
	char				*string;
	t_file				*head;
	t_file				*next;
};

#endif
