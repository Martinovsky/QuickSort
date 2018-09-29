#include <queue>
#include <utility>
#include "quickSort.hpp"

static std::size_t partition(std::vector<int> &data, std::size_t min, std::size_t max)
{
    max = max - 1;
    std::size_t j = min;
    bool first = true;
    int save = 0;
    for (std::size_t i = min; i < max; ++i)
    {
        if (data[i] <= data[max])
        {
            (first) ? first = false : ++j;
            if (j != i)
            {
                save = data[j];
                data[j] = data[i];
                data[i] = save;
            }
        }
    }
    (first) ? first = false : ++j;
    save = data[j];
    data[j] = data[max];
    data[max] = save;
    return j;
}

void quickSort(std::vector<int> &data)
{
    if (data.empty() || data.size() < 2)
    {
        return;
    }
    std::queue<std::pair<std::size_t, std::size_t>> todo;
    std::pair<std::size_t, std::size_t> current = {0, data.size()};
    do
    {
        if (!todo.empty())
        {
            current = todo.front();
            todo.pop();
        }
        if (current.first < current.second)
        {
            std::size_t pivot = partition(data, current.first, current.second);
            todo.push({current.first, pivot});
            todo.push({pivot + 1, current.second});
        }
    } while (!todo.empty());
}