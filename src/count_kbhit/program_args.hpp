/* count_kbhit
 * Copyright (C) 2024 Killian Valverde.
 *
 * This file is part of count_kbhit.
 *
 * count_kbhit is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * count_kbhit is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with count_kbhit. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file        program.hpp
 * @brief       program class header.
 * @author      Killian Valverde
 * @date        2024/05/11
 */
 
#ifndef COUNT_KBHIT_PROGRAM_ARGS_HPP
#define COUNT_KBHIT_PROGRAM_ARGS_HPP


namespace count_kbhit {


/**
 * @brief       All the arguments that are forwarded to the program class.
 */
struct program_args
{
    std::size_t start_nr = 0;
    std::size_t step_inc = 1;
    double prob = 0.0;
};


}


#endif
