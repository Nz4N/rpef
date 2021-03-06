/*
 *
 * Copyright (c) 2009, 2010
 * Phillip Lougher <phillip@lougher.demon.co.uk>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * compressor.h
 */

struct compressor {
	int (*compress)(void **, char *, char *, int, int, int *);
	int (*uncompress)(char *, char *, int, int, int *);
	int id;
	char *name;
	int supported;
};

extern struct compressor *lookup_compressor(char *);
extern struct compressor *lookup_compressor_id(int);
extern void display_compressors(char *, char *);
