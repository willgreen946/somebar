// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = false;

constexpr int paddingX = 8;
constexpr int paddingY = 1;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "ubuntu mono 10";

constexpr ColorScheme colorInactive = {Color(0xff, 0xff, 0xff), Color(0x33, 0x33, 0x33)};
constexpr ColorScheme colorActive = {Color(0xff, 0xff, 0xff), Color(0xab, 0x2b, 0x28)};
constexpr const char* termcmd[] = {"foot", nullptr};

static std::vector<std::string> tagNames = {
	 "", "", "",
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
