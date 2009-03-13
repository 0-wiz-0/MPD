/*
 * Copyright (C) 2003-2009 The Music Player Daemon Project
 * http://www.musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

/*
 * This library provides easy helper functions for working with
 * sockets.
 *
 */

#ifndef SOCKET_UTIL_H
#define SOCKET_UTIL_H

#include <glib.h>

struct sockaddr;

/**
 * Converts the specified socket address into a string in the form
 * "IP:PORT".  The return value must be freed with g_free() when you
 * don't need it anymore.
 *
 * @param sa the sockaddr struct
 * @param length the length of #sa in bytes
 * @param error location to store the error occuring, or NULL to
 * ignore errors
 */
char *
sockaddr_to_string(const struct sockaddr *sa, size_t length, GError **error);

#endif
