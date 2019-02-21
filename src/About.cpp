/*****************************************************************************
** About.cpp - Source file of About DialogBox containing info about program
** Author: Kraku
*****************************************************************************/
#include "About.h"
#include "about.xpm"
#include "const.h"

About::About (QWidget * parent):QDialog (parent)
{

  all = new QVBoxLayout (this);

  this->setWindowTitle (tr ("About"));

  box = new QGroupBox (tr ("GB Cart Flasher Project"), this);
  box->setFixedWidth (501);
  labels = new QVBoxLayout (box);
  name =
    new QLabel (tr ("GB Cart Flasher for Win9x, Win2k, WinXP version ") +
		VER + " (32-bit)", box);
  labels->addWidget (name);
  copy = new QLabel ("Copyright (c) 2005-2007 Kraku & Chroost", box);
  labels->addWidget (copy);
  email =
    new
    QLabel (tr
	    ("e-mail: <a href=mailto:gbflasher@interia.pl>gbflasher@interia.pl</a>"),
	    box);
  labels->addWidget (email);
  translator = new QLabel(tr("Translation by: Chroost"),box);
  labels->addWidget(translator);
  desc1 = new QLabel (tr ("This program and device, called set, enables to:\n"
			  "- make game backups from owned cartridges and play them on PC,\n"
			  "- transfer game saves between cartridge and PC, save and modify them,\n"
			  "- test written by yourself games directly on console (rewritable cartridge required)."),
		      box);
  labels->addWidget (desc1);
  warning = new QLabel (tr ("<b>WARNING!</b>"), box);
  labels->addWidget (warning);
  desc2 =
    new
    QLabel (tr("Using this set for purposes other than previously listed,\n"
	    "especially for making illegal copies of copyrighted games is strictly prohibited!"), box);
  labels->addWidget (desc2);
  desc3 =
    new
    QLabel (tr("Additional work for Mac by <a href=https://github.com/melka/gbcartflasher>melka</a>."), box);
  labels->addWidget (desc3);
  desc4 =
    new
    QLabel (tr("Compiled for Mac by Catskull in 2019."), box);
  labels->addWidget (desc4);
  desc5 =
    new
    QLabel (tr("Icons made by <a href=https://www.flaticon.com/authors/turkkub>turkkub</a> from <a href=https://www.flaticon.com/>www.flaticon.com</a> is licensed by <a href=http://creativecommons.org/licenses/by/3.0/>CC 3.0 BY</a>"), box);
  labels->addWidget (desc5);
  all->addWidget (box);
  ok_btn = new QPushButton (tr ("Close"), this);
  all->addWidget (ok_btn);
  connect (ok_btn, SIGNAL (clicked ()), this, SLOT (close ()));
}
