#include "minunit.h"
#include <lcthw/ringbuffer.h>

static RingBuffer *buffer = NULL;

char *test_create()
{
    buffer = RingBuffer_create(35);
    mu_assert(buffer != NULL, "Unable to create ringbuffer");
    mu_assert(buffer->length == 36, "Incorrect length");
    mu_assert(buffer->start == 0, "Incorrect start");
    mu_assert(buffer->end == 0, "Incorrect end");
    mu_assert(buffer->buffer != NULL, "Incorrect buffer");

    return NULL;
}

char *test_destroy()
{
  RingBuffer_destroy(buffer);

  return NULL;
}

char *all_tests()
{
  mu_suite_start();

  mu_run_test(test_create);

  return NULL;
}

RUN_TESTS(all_tests);
