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
 
#ifndef COUNT_KBHIT_PROGRAM_HPP
#define COUNT_KBHIT_PROGRAM_HPP

#include <speed/speed.hpp>

#include "exception.hpp"
#include "program_args.hpp"


/**
 * @brief       Contians all count_kbhit resources.
 */
namespace count_kbhit {


class program
{
public:
    /**
     * @brief       Constructor with parameters.
     * @param       prog_args : The program arguments.
     */
    explicit program(program_args prog_args);
    
    /**
     * @brief       Execute the program.
     * @return      The value that represents if the program succeed.
     */
    int execute();

private:

private:
    /** The program arguments. */
    program_args prog_args_;
};


}


#endif
