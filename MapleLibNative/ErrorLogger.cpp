/*  MapleLibNative - A general-purpose MapleStory library for C++ 11+
 * Copyright (C) 2014 DeadCode, Felix Lebel
   
 * This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.*/

#include "ErrorLogger.h"


MAPLELIB
namespace Helpers
{
	// Error class
	ErrorLogger::Error::Error(ErrorLevel lvl, std::string msg)
	{
		this->level = lvl;
		this->message = msg;
	}
	// End Error class

	void ErrorLogger::Log(ErrorLevel lvl, std::string msg)
	{
		errorList.push_back(Error(lvl, msg));
	}
}
END_MAPLELIB