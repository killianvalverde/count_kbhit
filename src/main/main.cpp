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
 * @file        main.hpp
 * @brief       count_kbhit entry point.
 * @author      Killian Valverde
 * @date        2024/05/11
 */

#include <speed/speed.hpp>

#include "../count_kbhit/program.hpp"


int main(int argc, char* argv[])
{
    std::string messge;
    int retv;
    
    try 
    {
        count_kbhit::program_args prog_args;
        spd::ap::arg_parser ap("count_kbhit");
        
        ap.add_help_menu()
                .description("Count keyboard hits.")
                .epilogue("Example: $ count_kbhit -n 0 -s 2 -p 0.073");

        ap.add_key_value_arg("--start-number", "-n")
                .description("Start number of keyboard hits.")
                .values_names("INTEGER")
                .scan<std::uint64_t>()
                .store_into(&prog_args.start_nr);

        ap.add_key_value_arg("--step-increase", "-s")
                .description("Number step increase per keyboard hit.")
                .values_names("INTEGER")
                .scan<std::uint64_t>()
                .store_into(&prog_args.step_inc);

        ap.add_key_value_arg("--probability", "-p")
                .description("Probability of the event to happen.")
                .values_names("FLOAT")
                .scan<double>()
                .store_into(&prog_args.prob);

        ap.add_help_arg("--help", "-h")
                .description("Display this help and exit.");

        ap.add_version_arg("--version", "-v")
                .description("Output version information and exit.")
                .gplv3_version_information("0.1.0", "2024", "Killian Valverde");

        ap.parse_args(argc, argv);
        
        count_kbhit::program prog(std::move(prog_args));
                
        return prog.execute();
    }
    catch (const count_kbhit::exception_base& e)
    {
        messge = e.what();
        retv = 1;
    }
    catch (const std::exception& e)
    {
        messge = e.what();
        retv = -1;
    }
    catch (...)
    {
        messge = "Unknown error";
        retv = -1;
    }
    
    std::cerr << spd::ios::newl
              << spd::ios::set_light_red_text << "count_kbhit: "
              << spd::ios::set_default_text << messge
              << std::endl;

    return retv;
}
