/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earendil <earendil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:25:49 by mmarinel          #+#    #+#             */
/*   Updated: 2022/08/22 11:36:33 by earendil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <string>
# include "../colors.hpp"

# define FPT_ARR_SIZE 4

class Harl
{
	typedef void(Harl::*HarlFp)( void );

	typedef struct s_harl_method
	{
		std::string	name;
		HarlFp		fp;
	}	t_harl_method;

private:
	static const t_harl_method	fpt_array[FPT_ARR_SIZE + 1];
	static size_t				fpt_arr_index_of( std::string level );
	void						debug( void );
	void						info( void );
	void						warning( void );
	void						error( void );
	void						no_op( void );
public:
	void	complain( std::string level );
			Harl();
			~Harl();
};


#endif /* HARL_H */
