#ifndef KEYBOARD_LAYOUTS_HEADER
#define KEYBOARD_LAYOUTS_HEADER

#include <bits/stdc++.h>

#include "keyboard.hpp"

namespace keyboard
{
	/**
	 * @brief Reads a keyboard layout from a file.
	 * Format: 4 lines of keys, each line is a row of the keyboard.
	 * @param filename The name of the file to read.
	 */
	Keyboard read_layout(const std::string& filename)
	{
		std::ifstream file(filename);
		if (!file.is_open())
		{
			std::cerr << "Could not open file " << filename << std::endl;
			exit(1);
		}

		Keyboard layout;

		// Get the name of the layout.
		// The name is the name of the file without the extension
		// and the path.

		std::string name = filename;

		size_t last_dot = name.find_last_of('.');

		if (last_dot != std::string::npos)
		{
			name = name.substr(0, last_dot);
		}

		size_t last_slash = name.find_last_of('/');

		if (last_slash != std::string::npos)
		{
			name = name.substr(last_slash + 1);
		}

		layout.name = name;

		char c;

		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::ONE);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::TWO);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::THREE);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::FOUR);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::FIVE);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::SIX);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::SEVEN);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::EIGHT);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::NINE);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::ZERO);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::DASH);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::EQUALS);

		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::Q);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::W);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::E);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::R);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::T);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::Y);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::U);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::I);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::O);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::P);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::LEFT_BRACKET);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::RIGHT_BRACKET);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::BACKSLASH);

		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::A);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::S);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::D);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::F);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::G);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::H);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::J);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::K);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::L);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::SEMICOLON);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::QUOTE);

		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::Z);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::X);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::C);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::V);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::B);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::N);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::M);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::COMMA);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::DOT);
		file >> c;
		layout.map[Key::from_char(c)] = Button::from_key(Key::SLASH);

		layout.map[Key::SPACE] = Button::from_key(Key::SPACE);
		layout.map[Key::ENTER] = Button::from_key(Key::ENTER);
		layout.map[Key::LEFT_SHIFT] = Button::from_key(Key::LEFT_SHIFT);
		layout.map[Key::RIGHT_SHIFT] = Button::from_key(Key::RIGHT_SHIFT);

		return layout;
	}
}

#endif