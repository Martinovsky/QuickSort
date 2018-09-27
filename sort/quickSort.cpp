#include <queue>
#include <utility>
#include "quickSort.hpp"

static std::size_t partition(std::vector<int> &data, std::size_t min, std::size_t max)
{
    std::size_t j = min - 1; // Pb with min = 0;
    int save = 0;
    for (std::size_t i = min; i < (max - 1); ++i)
    {
        if (data[i] <= data[max - 1])
        {
            ++j;
            if (j != i)
            {
                save = data[j];
                data[j] = data[i];
                data[i] = save;
            }
        }
    }
    ++j;
    save = data[j];
    data[j] = data[max - 1];
    data[max - 1] = save;
    return j;
}

void quickSort(std::vector<int> &data, std::size_t min, std::size_t max)
{
    if (data.empty() || data.size() < 2)
    {
        return;
    }
    std::queue<std::pair<std::size_t,std::size_t>> left;
    std::queue<std::pair<std::size_t,std::size_t>> right;
    do
    {
        if (min < max)
        {
            std::size_t pivot  ; 
        }
    }

    
}