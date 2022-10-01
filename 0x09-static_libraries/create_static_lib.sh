#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=bnu89 -c *c
ar rc liball.a *o
