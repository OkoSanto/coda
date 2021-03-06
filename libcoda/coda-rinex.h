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

#ifndef CODA_RINEX_H
#define CODA_RINEX_H

#include "coda-internal.h"

int coda_rinex_init(void);
void coda_rinex_done(void);

int coda_rinex_open(const char *filename, int64_t file_size, const coda_product_definition *definition,
                    coda_product **product);
int coda_rinex_close(coda_product *product);
int coda_rinex_cursor_set_product(coda_cursor *cursor, coda_product *product);

#endif
