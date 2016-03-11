/* measure.h - macros for timing code */

#include <sys/time.h>
#include <unistd.h>

/* global variables for collecting times */

struct timeval measure_begin, measure_end;
int    measure_ubegin, measure_uend;
double measure_diff, measure_tpo;


#define measure_begin() gettimeofday(&measure_begin, (struct timezone *) NULL)
#define measure_end() gettimeofday(&measure_end, (struct timezone *) NULL)

#define measure_print(div) \
        measure_ubegin = (1000000 * measure_begin.tv_sec)    \
                             + measure_begin.tv_usec;            \
        measure_uend   = (1000000 * measure_end.tv_sec)      \
                             + measure_end.tv_usec;              \
        measure_diff   = measure_uend - measure_ubegin;  \
        measure_tpo    = measure_diff / div;                \
        printf("%.4f\n", measure_tpo);

#define measure_print_seconds(div) \
        measure_ubegin = (1000000 * measure_begin.tv_sec)    \
                             + measure_begin.tv_usec;            \
        measure_uend   = (1000000 * measure_end.tv_sec)      \
                             + measure_end.tv_usec;              \
        measure_diff   = measure_uend - measure_ubegin;  \
        measure_tpo    = (measure_diff / 1000000) / div;     \
        printf("%.4f\n", measure_tpo);
