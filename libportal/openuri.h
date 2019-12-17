/*
 * Copyright (C) 2018, Matthias Clasen
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <portal-helpers.h>

G_BEGIN_DECLS

typedef enum {
  XDP_OPEN_URI_FLAG_NONE     = 0,
  XDP_OPEN_URI_FLAG_ASK      = 1 << 0,
  XDP_OPEN_URI_FLAG_WRITABLE = 1 << 1
} XdpOpenUriFlags;

XDP_PUBLIC
void       xdp_portal_open_uri                    (XdpPortal            *portal,
                                                   XdpParent            *parent,
                                                   const char           *uri,
                                                   XdpOpenUriFlags       flags,
                                                   GCancellable         *cancellable,
                                                   GAsyncReadyCallback   callback,
                                                   gpointer              data);

XDP_PUBLIC
gboolean  xdp_portal_open_uri_finish              (XdpPortal            *portal,
                                                   GAsyncResult         *result,
                                                   GError              **error);

XDP_PUBLIC
void       xdp_portal_open_directory              (XdpPortal            *portal,
                                                   XdpParent            *parent,
                                                   const char           *uri,
                                                   XdpOpenUriFlags       flags,
                                                   GCancellable         *cancellable,
                                                   GAsyncReadyCallback   callback,
                                                   gpointer              data);

XDP_PUBLIC
gboolean  xdp_portal_open_directory_finish        (XdpPortal            *portal,
                                                   GAsyncResult         *result,
                                                   GError              **error);

G_END_DECLS
