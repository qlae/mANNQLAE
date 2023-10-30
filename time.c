#include <sys/time.h>

double calculate_elapsed_time(struct timeval* start_time, struct timeval* end_time) {
    double elapsed_seconds = (double)(end_time->tv_sec - start_time->tv_sec);
    double elapsed_microsec = (double)(end_time->tv_usec - start_time->tv_usec) / 1e6; // Convert microseconds to seconds
    return elapsed_seconds + elapsed_microsec;
}
