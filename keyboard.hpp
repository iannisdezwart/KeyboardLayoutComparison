#ifndef KEYBOARD_HEADER
#define KEYBOARD_HEADER

#include <bits/stdc++.h>

namespace keyboard
{
	enum class Key : uint8_t
	{
		ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, ZERO,      DASH,
		Q,   W,   E,     R,    T,    Y,    U,    I,     O,    P,         LEFT_BRACKET,
		A,   S,   D,     F,    G,    H,    J,    K,     L,    SEMICOLON, QUOTE,
		Z,   X,   C,     V,    B,    N,    M,    COMMA, DOT,  SLASH,
		                       SPACE,
		LEFT_SHIFT, RIGHT_SHIFT, ENTER
	};

	enum class Hand : uint8_t
	{
		LEFT, RIGHT, THUMBS
	};

	Hand get_key_hand(Key key)
	{
		switch (key)
		{
			case Key::ONE:
			case Key::TWO:
			case Key::THREE:
			case Key::FOUR:
			case Key::FIVE:
			case Key::SIX:
			case Key::Q:
			case Key::W:
			case Key::E:
			case Key::R:
			case Key::T:
			case Key::A:
			case Key::S:
			case Key::D:
			case Key::F:
			case Key::G:
			case Key::Z:
			case Key::X:
			case Key::C:
			case Key::V:
			case Key::B:
			case Key::LEFT_SHIFT:
				return Hand::LEFT;

			case Key::SEVEN:
			case Key::EIGHT:
			case Key::NINE:
			case Key::ZERO:
			case Key::DASH:
			case Key::Y:
			case Key::U:
			case Key::I:
			case Key::O:
			case Key::P:
			case Key::LEFT_BRACKET:
			case Key::H:
			case Key::J:
			case Key::K:
			case Key::L:
			case Key::SEMICOLON:
			case Key::QUOTE:
			case Key::N:
			case Key::M:
			case Key::COMMA:
			case Key::DOT:
			case Key::SLASH:
			case Key::RIGHT_SHIFT:
			case Key::ENTER:
				return Hand::RIGHT;

			case Key::SPACE:
				return Hand::THUMBS;
		}
	}

	Key char_to_key(char c)
	{
		switch (c)
		{
			case '1':
			case '!':
				return Key::ONE;

			case '2':
			case '@':
				return Key::TWO;

			case '3':
			case '#':
				return Key::THREE;

			case '4':
			case '$':
				return Key::FOUR;

			case '5':
			case '%':
				return Key::FIVE;

			case '6':
			case '^':
				return Key::SIX;

			case '7':
			case '&':
				return Key::SEVEN;

			case '8':
			case '*':
				return Key::EIGHT;

			case '9':
			case '(':
				return Key::NINE;

			case '0':
			case ')':
				return Key::ZERO;

			case '-':
			case '_':
				return Key::DASH;

			case 'Q':
			case 'q':
				return Key::Q;

			case 'W':
			case 'w':
				return Key::W;

			case 'E':
			case 'e':
				return Key::E;

			case 'R':
			case 'r':
				return Key::R;

			case 'T':
			case 't':
				return Key::T;

			case 'Y':
			case 'y':
				return Key::Y;

			case 'U':
			case 'u':
				return Key::U;

			case 'I':
			case 'i':
				return Key::I;

			case 'O':
			case 'o':
				return Key::O;

			case 'P':
			case 'p':
				return Key::P;

			case '[':
			case '{':
				return Key::LEFT_BRACKET;

			case 'A':
			case 'a':
				return Key::A;

			case 'S':
			case 's':
				return Key::S;

			case 'D':
			case 'd':
				return Key::D;

			case 'F':
			case 'f':
				return Key::F;

			case 'G':
			case 'g':
				return Key::G;

			case 'H':
			case 'h':
				return Key::H;

			case 'J':
			case 'j':
				return Key::J;

			case 'K':
			case 'k':
				return Key::K;

			case 'L':
			case 'l':
				return Key::L;

			case ';':
			case ':':
				return Key::SEMICOLON;

			case '\'':
			case '"':
				return Key::QUOTE;

			case 'Z':
			case 'z':
				return Key::Z;

			case 'X':
			case 'x':
				return Key::X;

			case 'C':
			case 'c':
				return Key::C;

			case 'V':
			case 'v':
				return Key::V;

			case 'B':
			case 'b':
				return Key::B;

			case 'N':
			case 'n':
				return Key::N;

			case 'M':
			case 'm':
				return Key::M;

			case ',':
			case '<':
				return Key::COMMA;

			case '.':
			case '>':
				return Key::DOT;

			case '/':
			case '?':
				return Key::SLASH;

			case ' ':
				return Key::SPACE;

			case '\n':
				return Key::ENTER;
		}
	}

	std::map<Key, size_t> keypress_strain = {
		{ Key::ONE, 10 },
		{ Key::TWO, 6 },
		{ Key::THREE, 6 },
		{ Key::FOUR, 8 },
		{ Key::FIVE, 8 },
		{ Key::SIX, 12 },
		{ Key::SEVEN, 8 },
		{ Key::EIGHT, 6 },
		{ Key::NINE, 6 },
		{ Key::ZERO, 10 },
		{ Key::DASH, 10 },

		{ Key::Q, 8 },
		{ Key::W, 4 },
		{ Key::E, 4 },
		{ Key::R, 6 },
		{ Key::T, 8 },
		{ Key::Y, 10 },
		{ Key::U, 6 },
		{ Key::I, 4 },
		{ Key::O, 4 },
		{ Key::P, 8 },
		{ Key::LEFT_BRACKET, 8 },

		{ Key::A, 3 },
		{ Key::S, 2 },
		{ Key::D, 2 },
		{ Key::F, 2 },
		{ Key::G, 6 },
		{ Key::H, 6 },
		{ Key::J, 2 },
		{ Key::K, 2 },
		{ Key::L, 2 },
		{ Key::SEMICOLON, 3 },
		{ Key::QUOTE, 5 },

		{ Key::Z, 8 },
		{ Key::X, 8 },
		{ Key::C, 6 },
		{ Key::V, 4 },
		{ Key::B, 10 },
		{ Key::N, 6 },
		{ Key::M, 4 },
		{ Key::COMMA, 6 },
		{ Key::DOT, 8 },
		{ Key::SLASH, 8 },

		{ Key::SPACE, 2 },
		{ Key::LEFT_SHIFT, 4 },
		{ Key::RIGHT_SHIFT, 4 },
	};

	using KeyboardMap = std::unordered_map<Key, Key>;

	KeyboardMap qwerty_layout = {
		{ Key::ONE, Key::ONE },
		{ Key::TWO, Key::TWO },
		{ Key::THREE, Key::THREE },
		{ Key::FOUR, Key::FOUR },
		{ Key::FIVE, Key::FIVE },
		{ Key::SIX, Key::SIX },
		{ Key::SEVEN, Key::SEVEN },
		{ Key::EIGHT, Key::EIGHT },
		{ Key::NINE, Key::NINE },
		{ Key::ZERO, Key::ZERO },
		{ Key::DASH, Key::DASH },

		{ Key::Q, Key::Q },
		{ Key::W, Key::W },
		{ Key::E, Key::E },
		{ Key::R, Key::R },
		{ Key::T, Key::T },
		{ Key::Y, Key::Y },
		{ Key::U, Key::U },
		{ Key::I, Key::I },
		{ Key::O, Key::O },
		{ Key::P, Key::P },
		{ Key::LEFT_BRACKET, Key::LEFT_BRACKET },

		{ Key::A, Key::A },
		{ Key::S, Key::S },
		{ Key::D, Key::D },
		{ Key::F, Key::F },
		{ Key::G, Key::G },
		{ Key::H, Key::H },
		{ Key::J, Key::J },
		{ Key::K, Key::K },
		{ Key::L, Key::L },
		{ Key::SEMICOLON, Key::SEMICOLON },
		{ Key::QUOTE, Key::QUOTE },

		{ Key::Z, Key::Z },
		{ Key::X, Key::X },
		{ Key::C, Key::C },
		{ Key::V, Key::V },
		{ Key::B, Key::B },
		{ Key::N, Key::N },
		{ Key::M, Key::M },
		{ Key::COMMA, Key::COMMA },
		{ Key::DOT, Key::DOT },
		{ Key::SLASH, Key::SLASH },

		{ Key::SPACE, Key::SPACE }
	};

	KeyboardMap workman_layout = {
		{ Key::ONE, Key::ONE },
		{ Key::TWO, Key::TWO },
		{ Key::THREE, Key::THREE },
		{ Key::FOUR, Key::FOUR },
		{ Key::FIVE, Key::FIVE },
		{ Key::SIX, Key::SIX },
		{ Key::SEVEN, Key::SEVEN },
		{ Key::EIGHT, Key::EIGHT },
		{ Key::NINE, Key::NINE },
		{ Key::ZERO, Key::ZERO },
		{ Key::DASH, Key::DASH },

		{ Key::Q, Key::Q },
		{ Key::W, Key::R },
		{ Key::E, Key::K },
		{ Key::R, Key::E },
		{ Key::T, Key::F },
		{ Key::Y, Key::H },
		{ Key::U, Key::I },
		{ Key::I, Key::SEMICOLON },
		{ Key::O, Key::L },
		{ Key::P, Key::O },
		{ Key::LEFT_BRACKET, Key::LEFT_BRACKET },

		{ Key::A, Key::A },
		{ Key::S, Key::S },
		{ Key::D, Key::W },
		{ Key::F, Key::U },
		{ Key::G, Key::G },
		{ Key::H, Key::D },
		{ Key::J, Key::Y },
		{ Key::K, Key::N },
		{ Key::L, Key::M },
		{ Key::SEMICOLON, Key::P },
		{ Key::QUOTE, Key::QUOTE },

		{ Key::Z, Key::Z },
		{ Key::X, Key::X },
		{ Key::C, Key::V },
		{ Key::V, Key::B },
		{ Key::B, Key::T },
		{ Key::N, Key::J },
		{ Key::M, Key::C },
		{ Key::COMMA, Key::COMMA },
		{ Key::DOT, Key::DOT },
		{ Key::SLASH, Key::SLASH },

		{ Key::SPACE, Key::SPACE  }
	};

	KeyboardMap dvorak_layout = {
		{ Key::ONE, Key::ONE },
		{ Key::TWO, Key::TWO },
		{ Key::THREE, Key::THREE },
		{ Key::FOUR, Key::FOUR },
		{ Key::FIVE, Key::FIVE },
		{ Key::SIX, Key::SIX },
		{ Key::SEVEN, Key::SEVEN },
		{ Key::EIGHT, Key::EIGHT },
		{ Key::NINE, Key::NINE },
		{ Key::ZERO, Key::ZERO },
		{ Key::DASH, Key::DASH },

		{ Key::Q, Key::X },
		{ Key::W, Key::COMMA },
		{ Key::E, Key::D },
		{ Key::R, Key::O },
		{ Key::T, Key::K },
		{ Key::Y, Key::T },
		{ Key::U, Key::F },
		{ Key::I, Key::G },
		{ Key::O, Key::S },
		{ Key::P, Key::R },
		{ Key::LEFT_BRACKET, Key::DASH },

		{ Key::A, Key::A },
		{ Key::S, Key::SEMICOLON },
		{ Key::D, Key::H },
		{ Key::F, Key::Y },
		{ Key::G, Key::U },
		{ Key::H, Key::J },
		{ Key::J, Key::C },
		{ Key::K, Key::V },
		{ Key::L, Key::O },
		{ Key::SEMICOLON, Key::Z },
		{ Key::QUOTE, Key::DASH },

		{ Key::Z, Key::SLASH },
		{ Key::X, Key::B },
		{ Key::C, Key::I },
		{ Key::V, Key::DOT },
		{ Key::B, Key::B },
		{ Key::N, Key::K },
		{ Key::M, Key::M },
		{ Key::COMMA, Key::W },
		{ Key::DOT, Key::E },
		{ Key::SLASH, Key::LEFT_BRACKET },

		{ Key::SPACE, Key::SPACE }
	};
};


#endif