/*
 * Copyright (C) 2007-2015 S[&]T, The Netherlands.
 *
 * This file is part of CODA.
 *
 * CODA is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * CODA is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with CODA; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef CODA_ASCII_H
#define CODA_ASCII_H

#include "coda-internal.h"

long coda_ascii_parse_int64(const char *buffer, long buffer_length, int64_t *dst, int ignore_trailing_bytes);
long coda_ascii_parse_uint64(const char *buffer, long buffer_length, uint64_t *dst, int ignore_trailing_bytes);
long coda_ascii_parse_double(const char *buffer, long buffer_length, double *dst, int ignore_trailing_bytes);

int coda_ascii_open(const char *filename, int64_t file_size, const coda_product_definition *definition,
                    coda_product **product);
int coda_ascii_close(coda_product *product);

int coda_ascii_cursor_get_string_length(const coda_cursor *cursor, long *length);
int coda_ascii_cursor_get_bit_size(const coda_cursor *cursor, int64_t *bit_size);
int coda_ascii_cursor_get_num_elements(const coda_cursor *cursor, long *num_elements);

int coda_ascii_cursor_read_int8(const coda_cursor *cursor, int8_t *dst);
int coda_ascii_cursor_read_uint8(const coda_cursor *cursor, uint8_t *dst);
int coda_ascii_cursor_read_int16(const coda_cursor *cursor, int16_t *dst);
int coda_ascii_cursor_read_uint16(const coda_cursor *cursor, uint16_t *dst);
int coda_ascii_cursor_read_int32(const coda_cursor *cursor, int32_t *dst);
int coda_ascii_cursor_read_uint32(const coda_cursor *cursor, uint32_t *dst);
int coda_ascii_cursor_read_int64(const coda_cursor *cursor, int64_t *dst);
int coda_ascii_cursor_read_uint64(const coda_cursor *cursor, uint64_t *dst);
int coda_ascii_cursor_read_float(const coda_cursor *cursor, float *dst);
int coda_ascii_cursor_read_double(const coda_cursor *cursor, double *dst);
int coda_ascii_cursor_read_char(const coda_cursor *cursor, char *dst);
int coda_ascii_cursor_read_string(const coda_cursor *cursor, char *dst, long dst_length);
int coda_ascii_cursor_read_bits(const coda_cursor *cursor, uint8_t *dst, int64_t bit_offset, int64_t bit_length);
int coda_ascii_cursor_read_bytes(const coda_cursor *cursor, uint8_t *dst, int64_t offset, int64_t length);

int coda_ascii_cursor_read_int8_array(const coda_cursor *cursor, int8_t *dst, coda_array_ordering array_ordering);
int coda_ascii_cursor_read_uint8_array(const coda_cursor *cursor, uint8_t *dst, coda_array_ordering array_ordering);
int coda_ascii_cursor_read_int16_array(const coda_cursor *cursor, int16_t *dst, coda_array_ordering array_ordering);
int coda_ascii_cursor_read_uint16_array(const coda_cursor *cursor, uint16_t *dst, coda_array_ordering array_ordering);
int coda_ascii_cursor_read_int32_array(const coda_cursor *cursor, int32_t *dst, coda_array_ordering array_ordering);
int coda_ascii_cursor_read_uint32_array(const coda_cursor *cursor, uint32_t *dst, coda_array_ordering array_ordering);
int coda_ascii_cursor_read_int64_array(const coda_cursor *cursor, int64_t *dst, coda_array_ordering array_ordering);
int coda_ascii_cursor_read_uint64_array(const coda_cursor *cursor, uint64_t *dst, coda_array_ordering array_ordering);
int coda_ascii_cursor_read_float_array(const coda_cursor *cursor, float *dst, coda_array_ordering array_ordering);
int coda_ascii_cursor_read_double_array(const coda_cursor *cursor, double *dst, coda_array_ordering array_ordering);
int coda_ascii_cursor_read_char_array(const coda_cursor *cursor, char *dst, coda_array_ordering array_ordering);

int coda_ascii_cursor_read_int8_partial_array(const coda_cursor *cursor, long offset, long length, int8_t *dst);
int coda_ascii_cursor_read_uint8_partial_array(const coda_cursor *cursor, long offset, long length, uint8_t *dst);
int coda_ascii_cursor_read_int16_partial_array(const coda_cursor *cursor, long offset, long length, int16_t *dst);
int coda_ascii_cursor_read_uint16_partial_array(const coda_cursor *cursor, long offset, long length, uint16_t *dst);
int coda_ascii_cursor_read_int32_partial_array(const coda_cursor *cursor, long offset, long length, int32_t *dst);
int coda_ascii_cursor_read_uint32_partial_array(const coda_cursor *cursor, long offset, long length, uint32_t *dst);
int coda_ascii_cursor_read_int64_partial_array(const coda_cursor *cursor, long offset, long length, int64_t *dst);
int coda_ascii_cursor_read_uint64_partial_array(const coda_cursor *cursor, long offset, long length, uint64_t *dst);
int coda_ascii_cursor_read_float_partial_array(const coda_cursor *cursor, long offset, long length, float *dst);
int coda_ascii_cursor_read_double_partial_array(const coda_cursor *cursor, long offset, long length, double *dst);
int coda_ascii_cursor_read_char_partial_array(const coda_cursor *cursor, long offset, long length, char *dst);

int coda_ascii_cursor_set_asciilines(coda_cursor *cursor, coda_product *product);

int coda_ascii_init_asciilines(coda_product *product);

#endif
