#include "array.h"
​
int get_index_of(const int numbers[], const size_t element_count, const int num)
{
    const int* p;
    const int* const end = numbers + element_count;
    ​
        for (p = numbers; p < end; p++) {
            if (*p == num) {
                return p - numbers;
            }
        }
    ​
        return -1;
}
​
int get_last_index_of(const int numbers[], const size_t element_count, const int num)
{
    const int* p;
    const int* const end = numbers + element_count;
    size_t idx_last = -1;

    for (p = numbers; p < end; p++) {
        if (*p == num) {
            idx_last = p - numbers;
        }
    }
    ​
        return idx_last;
}
​
int get_max_index(const int numbers[], const size_t element_count)
{
    const int* p;
    const int* const end = numbers + element_count;
    const int* max = numbers;

    if (element_count == 0) {
        return -1;
    }
    ​
        for (p = numbers; p < end; p++) {
            if (*p > *max) {
                max = p;
            }
        }
    ​
        return max - numbers;
}
​
int get_min_index(const int numbers[], const size_t element_count)
{
    const int* p;
    const int* const end = numbers + element_count;
    const int* min = numbers;
    size_t empty_count = 0;
    int first_find_flag = FALSE;
    ​
        for (p = numbers; p < end; p++) {
            if (*p != INT_MIN) {
                if (first_find_flag == FALSE) {
                    min = p;
                    first_find_flag = TRUE;
                }
                if (*p < *min) {
                    min = p;
                }
            }
            else {
                empty_count++;
            }
        }
    ​
        if (empty_count == element_count) {
            return -1;
        }
        else {
            return min - numbers;
        }
}
​
int is_all_positive(const int numbers[], const size_t element_count)
{
    const int* p;
    const int* const end = numbers + element_count;
    size_t empty_count = 0;
    ​
        for (p = numbers; p < end; p++) {
            if (*p < 0) {
                return FALSE;
            }
            if (*p == INT_MIN) {
                empty_count++;
            }
        }
    ​
        if (empty_count == element_count) {
            return FALSE;
        }
        else {
            return TRUE;
        }
}
​
int has_even(const int numbers[], const size_t element_count)
{
    const int* p;
    const int* const end = numbers + element_count;
    ​
        for (p = numbers; p < end; p++) {
            if ((*p & 1) == 0) {
                return TRUE;
            }
        }
    ​
        return FALSE;
}
​
int insert(int numbers[], const size_t element_count, const int num, const size_t pos)
{
    int* p;
    int* const end = numbers + element_count;
    int* const begin = numbers + pos;
    ​
        if (pos > element_count) {
            return FALSE;
        }
    ​
        /* shift */
        for (p = end; p > begin; p--) {
            *p = *(p - 1);
        }
    ​
        * begin = num;
    ​
        return TRUE;
}
​
int remove_at(int numbers[], const size_t element_count, const size_t index)
{
    int* p;
    int* const begin = numbers + index;
    int* const end = numbers + element_count - 1;
    ​
        if (index >= element_count) {
            return FALSE;
        }
    ​
        /* shift */
        for (p = begin; p < end; p++) {
            *p = *(p + 1);
        }
    ​
        * end = INT_MIN;
    ​
        return TRUE;
}
접기