// $Id$
/*
 * Copyright (C) 2010 AXIM Communications Inc.
 * Copyright (C) 2010 Cedric Shih <cedric.shih@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef EVCPE_OBJ_XML_H_
#define EVCPE_OBJ_XML_H_

#include <event.h>

#include "minixml.h"
#include "xml_stack.h"

#include "obj.h"

struct evcpe_obj_parser {
	struct xmlparser xml;
	struct evcpe_xml_stack stack;
	struct evcpe_obj *root;
};

int evcpe_obj_from_xml(struct evcpe_obj *obj, struct evbuffer *buffer);

int evcpe_obj_to_xml(struct evcpe_obj *obj, struct evbuffer *buffer);

#endif /* EVCPE_OBJ_XML_H_ */
