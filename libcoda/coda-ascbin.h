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

#ifndef CODA_ASCBIN_H
#define CODA_ASCBIN_H

#include "coda-internal.h"

int coda_ascbin_recognize_file(const char *filename, int64_t size, coda_format *format,
                               coda_product_definition **definition);

int coda_ascbin_cursor_set_product(coda_cursor *cursor, coda_product *product);
int coda_ascbin_cursor_goto_record_field_by_index(coda_cursor *cursor, long index);
int coda_ascbin_cursor_goto_next_record_field(coda_cursor *cursor);
int coda_ascbin_cursor_goto_available_union_field(coda_cursor *cursor);
int coda_ascbin_cursor_goto_array_element(coda_cursor *cursor, int num_subs, const long subs[]);
int coda_ascbin_cursor_goto_array_element_by_index(coda_cursor *cursor, long index);
int coda_ascbin_cursor_goto_next_array_element(coda_cursor *cursor);
int coda_ascbin_cursor_goto_attributes(coda_cursor *cursor);
int coda_ascbin_cursor_use_base_type_of_special_type(coda_cursor *cursor);
int coda_ascbin_cursor_get_bit_size(const coda_cursor *cursor, int64_t *bit_size);
int coda_ascbin_cursor_get_num_elements(const coda_cursor *cursor, long *num_elements);
int coda_ascbin_cursor_get_record_field_available_status(const coda_cursor *cursor, long index, int *available);
int coda_ascbin_cursor_get_available_union_field_index(const coda_cursor *cursor, long *index);
int coda_ascbin_cursor_get_array_dim(const coda_cursor *cursor, int *num_dims, long dim[]);

#endif
