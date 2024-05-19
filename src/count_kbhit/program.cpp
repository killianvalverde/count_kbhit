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
 * @file        program.cpp
 * @brief       program class implementation.
 * @author      Killian Valverde
 * @date        2024/05/11
 */

#include "program.hpp"


namespace count_kbhit {


program::program(program_args prog_args) 
        : prog_args_(std::move(prog_args))
{
}


int program::execute()
{
    int retv = 0;
    double cur_prob;
    std::error_code err_code;

    std::cout << std::fixed << std::setprecision(3);

    while (true)
    {
        if (prog_args_.prob != 0.0)
        {
            cur_prob = ((1 - std::pow(
                    (100.0 - prog_args_.prob) / 100.0, prog_args_.start_nr)) * 100.0);

            std::cout << "\r Number of keyboard hits: "
                      << prog_args_.start_nr
                      << " (" << cur_prob << "%)   "
                      << std::flush;
        }
        else
        {
            std::cout << "\r Number of keyboard hits: " << prog_args_.start_nr << std::flush;
        }

        if (!spd::sys::term::kbhit(nullptr, true, &err_code))
        {
            throw spd::exceptions::message_exception(err_code.message());
        }

        prog_args_.start_nr += prog_args_.step_inc;
    }

    std::cout << std::endl;
    
    return retv;
}


}
