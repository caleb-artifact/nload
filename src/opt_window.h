/***************************************************************************
                                opt_window.h
                             -------------------
    begin                : Thu Jan 17 2002
    copyright            : (C) 2002 by Roland Riegel
    email                : support@roland-riegel.de
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef OPT_WINDOW_H
#define OPT_WINDOW_H

#include <vector>

#include <stdlib.h>
#include <stdio.h>
#include <curses.h>
#include <form.h>

#include "status.h"

#include "options.h"

class OptWindow
{
public:
	
	OptWindow();
	~OptWindow();
	
	void show( int, int, int, int );
	void hide();
	bool visible();
	
	void processRequest( int );
	
	vector<OptionBase *>& options();
	
private:
	
	bool m_visible;
	vector<OptionBase *> m_options;
	WINDOW *m_window;
	FORM *m_form;
	FIELD **m_fields;
	
};

#endif
