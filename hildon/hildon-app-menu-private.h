/*
 * This file is a part of hildon
 *
 * Copyright (C) 2008 Nokia Corporation, all rights reserved.
 *
 * Contact: Rodrigo Novo <rodrigo.novo@nokia.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser Public License as published by
 * the Free Software Foundation; version 2 of the license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser Public License for more details.
 *
 */

#ifndef                                         __HILDON_APP_MENU_PRIVATE_H__
#define                                         __HILDON_APP_MENU_PRIVATE_H__

G_BEGIN_DECLS

#define                                         HILDON_APP_MENU_GET_PRIVATE(obj) \
                                                (G_TYPE_INSTANCE_GET_PRIVATE ((obj), \
                                                HILDON_TYPE_APP_MENU, HildonAppMenuPrivate));

struct                                          _HildonAppMenuPrivate
{
    GtkBox *filters_hbox;
    GtkBox *vbox;
    GtkTable *table;
    GtkWindow *parent_window;
    GdkWindow *transfer_window;
    gboolean pressed_outside;
    gboolean inhibit_repack;
    GtkButton *last_pressed_button;
    GList *buttons;
    GList *filters;
    guint columns;
    gint width_request;
    guint find_intruder_idle_id;
    guint hide_idle_id;
};

void G_GNUC_INTERNAL
hildon_app_menu_set_parent_window              (HildonAppMenu *self,
                                                GtkWindow     *parent_window);

gpointer G_GNUC_INTERNAL
hildon_app_menu_get_parent_window              (HildonAppMenu *self);

gboolean G_GNUC_INTERNAL
hildon_app_menu_has_visible_children (HildonAppMenu *menu);

G_END_DECLS

#endif /* __HILDON_APP_MENU_PRIVATE_H__ */
