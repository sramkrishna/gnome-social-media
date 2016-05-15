/* gnome-social-media.h
 *
 * Copyright (C) 2016 Sriram Ramkrishna <sri@ramkrishna.me>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GNOME_SOCIAL_MEDIA_H
#define GNOME_SOCIAL_MEDIA_H

#include <glib-object.h>

G_BEGIN_DECLS

#define GNOME_TYPE_SOCIAL_MEDIA (gnome_social_media_get_type())

G_DECLARE_DERIVABLE_TYPE (GnomeSocialMedia, gnome_social_media, GNOME, SOCIAL_MEDIA, GObject)

struct _GnomeSocialMediaClass
{
	GObjectClass parent;
};

GnomeSocialMedia *gnome_social_media_new (void);

G_END_DECLS

#endif /* GNOME_SOCIAL_MEDIA_H */

