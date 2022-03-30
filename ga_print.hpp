#pragma once
#include "ga_structs.hpp"
#include <queue>
#include <vector>
#ifndef GA_PRINT
#define GA_PRINT
void print_schedule(const schedule s);
void print_queue_of_tasks_on_processor(
    const std::vector<std::queue<gene>> tasks_on_processor);
void print_chromosome(const chromosome c);
#endif // GA_PRINT
