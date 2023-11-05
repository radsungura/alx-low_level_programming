#ifndef MAIN_H
#define MAIN_H

/*
 * File: holberton.h
 * Auth: Aimé Rukundo
 * Desc: Header file containing prototypes for all functions
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif/* MAIN_H */
