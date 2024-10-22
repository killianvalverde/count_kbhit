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
 * @file        count_kbhit_gtest/program_test.cpp
 * @brief       program unit test.
 * @author      Killian Valverde
 * @date        2024/05/11
 */

#include <gtest/gtest.h>

#include "count_kbhit/program.hpp"


TEST(count_kbhit_program, execute)
{
    int ret = -1;
    count_kbhit::program_args prog_args;
    
    count_kbhit::program prog(std::move(prog_args));
    
    EXPECT_NO_THROW(ret = prog.execute());
    EXPECT_TRUE(ret == 0);
}
