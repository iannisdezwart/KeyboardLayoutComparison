#ifndef SIMULATION_HEADER
#define SIMULATION_HEADER

#include <bits/stdc++.h>

#include "keyboard.hpp"

namespace simulation
{
	size_t press_normal(keyboard::KeyboardMap& keymap, char c)
	{
		return keyboard::keypress_strain[keymap[keyboard::char_to_key(c)]];
	}

	size_t press_shift(keyboard::KeyboardMap& keymap, char c)
	{
		keyboard::Key key = keymap[keyboard::char_to_key(c)];
		keyboard::Hand shift_hand = keyboard::get_key_hand(key);

		size_t key_strain = keyboard::keypress_strain[key];
		size_t shift_strain;

		if (shift_hand == keyboard::Hand::LEFT)
		{
			shift_strain = keyboard::keypress_strain[keyboard::Key::LEFT_SHIFT];
		}
		else
		{
			shift_strain = keyboard::keypress_strain[keyboard::Key::RIGHT_SHIFT];
		}

		return key_strain + shift_strain;
	}

	size_t press(keyboard::KeyboardMap& keymap, char c)
	{
		if (c >= 'A' && c <= 'Z')
		{
			return press_shift(keymap, c);
		}

		if (c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
		{
			return press_normal(keymap, c);
		}

		switch (c)
		{
			case '!':
			case '@':
			case '#':
			case '$':
			case '%':
			case '^':
			case '&':
			case '*':
			case '(':
			case ')':
			case '_':
			case '{':
			case ':':
			case '"':
			case '<':
			case '>':
			case '?':
				return press_shift(keymap, c);

			case '-':
			case '[':
			case ';':
			case '\'':
			case ',':
			case '.':
			case '/':
			case ' ':
			case '\n':
				return press_normal(keymap, c);
		}

		std::cerr << "Unknown character '" << c << "' (" << (int) c << ")" <<  std::endl;
		return 0;
	}

	size_t simulate(keyboard::KeyboardMap& keymap, const std::string& text)
	{
		size_t strain = 0;

		for (char c : text)
		{
			strain += press(keymap, c);
		}

		return strain;
	}
};

#endif