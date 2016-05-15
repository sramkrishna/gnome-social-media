/* gnome-social-media.c
 *
 * Copyright (C) 2016 Sriram Ramkrishna  <sri@ramkrishna.me>
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

#include "gnome-social-media.h"
#include <glib.h>
#include <libsoup/soup.h>

typedef struct
{
  guint dummy;
} GnomeSocialMediaPrivate;

G_DEFINE_TYPE_WITH_PRIVATE (GnomeSocialMedia, gnome_social_media, G_TYPE_OBJECT)

enum {
	PROP_0,
	PROP_NAME,
	N_PROPS
};

static GParamSpec *properties [N_PROPS];

GnomeSocialMedia *
gnome_social_media_new (void)
{
	return g_object_new (GNOME_TYPE_SOCIAL_MEDIA, NULL);
}

static void
gnome_social_media_finalize (GObject *object)
{
/*	GnomeSocialMedia *self = GNOME_SOCIAL_MEDIA (object);*/
/*	GnomeSocialMediaPrivate *priv = gnome_social_media_get_instance_private (self);*/

	G_OBJECT_CLASS (gnome_social_media_parent_class)->finalize (object);
}

static void
gnome_social_media_get_property (GObject    *object,
                                 guint       prop_id,
                                 GValue     *value,
                                 GParamSpec *pspec)
{
/*	GnomeSocialMedia *self = GNOME_SOCIAL_MEDIA (object);*/

	switch (prop_id)
	  {
	  default:
	    G_OBJECT_WARN_INVALID_PROPERTY_ID (object, prop_id, pspec);
	  }
}

static void
gnome_social_media_set_property (GObject      *object,
                                 guint         prop_id,
                                 const GValue *value,
                                 GParamSpec   *pspec)
{
/*	GnomeSocialMedia *self = GNOME_SOCIAL_MEDIA (object);*/

	switch (prop_id)
	  {
	  default:
	    G_OBJECT_WARN_INVALID_PROPERTY_ID (object, prop_id, pspec);
	  }
}

static void
gnome_social_media_class_init (GnomeSocialMediaClass *klass)
{
	GObjectClass *object_class = G_OBJECT_CLASS (klass);

	object_class->finalize = gnome_social_media_finalize;
	object_class->get_property = gnome_social_media_get_property;
	object_class->set_property = gnome_social_media_set_property;

  properties [PROP_NAME] =
      g_param_spec_string ("name",
                           "Name",
                           "The name.",
                           NULL,
                           G_PARAM_READWRITE |
                           G_PARAM_CONSTRUCT_ONLY |
                           G_PARAM_STATIC_STRINGS);
}

static void
gnome_social_media_init (GnomeSocialMedia *self)
{
}


gint
main (gint    argc,
      gchar **argv)
{
  return 0;
}
