/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpauwels   <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14/22/25 by cpauwels          #+#    #+#             */
/*   Updated: 2018/09/03 14/22/25 by cpauwels         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GAME_HPP
# define	GAME_HPP

#include <vector>
#include <iostream>
#include "eGameObjects.hpp"
#include "ScreenObject.hpp"
#include "Snake.hpp"
#include "eDirection.hpp"
#include "IFunctions.hpp"
#include "Factory.hpp"

class Game {
	public:
		Game();
		Game(Game const & src);
		Game(int width, int height);
		~Game();
		Game & operator=(Game const & src);

		void	PrintMap();
		void	PlaceFood();
		void	PlaceSnake();
		bool	MoveSnake();
		void	CheckFood();
		void	ChangeSnakeDirection(int direction);
		void	Loop();

	private:
		int								_width;
		int								_height;
		int								_columns;
		int								_rows;
		Snake							*_snake;
		ScreenObject					_food;
		std::vector<std::vector<int>> 	_map;

};

#endif