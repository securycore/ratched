/**
 *	ratched - TLS connection router that performs a man-in-the-middle attack
 *	Copyright (C) 2017-2017 Johannes Bauer
 *
 *	This file is part of ratched.
 *
 *	ratched is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; this program is ONLY licensed under
 *	version 3 of the License, later versions are explicitly excluded.
 *
 *	ratched is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with ratched; if not, write to the Free Software
 *	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *	Johannes Bauer <JohannesBauer@gmx.de>
**/

#ifndef __INTERCEPTDB_H__
#define __INTERCEPTDB_H__

#include "openssl_certs.h"

struct intercept_entry_t {
	const char *hostname;
	bool do_intercept;
	struct tls_endpoint_config_t server;
	struct tls_endpoint_config_t client;
};

/*************** AUTO GENERATED SECTION FOLLOWS ***************/
struct intercept_entry_t* interceptdb_find_entry(const char *hostname, uint32_t ipv4_nbo);
bool init_interceptdb(void);
void deinit_interceptdb(void);
/***************  AUTO GENERATED SECTION ENDS   ***************/

#endif
