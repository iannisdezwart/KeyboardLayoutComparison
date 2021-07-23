#ifndef KEYBOARD_LAYOUTS_HEADER
#define KEYBOARD_LAYOUTS_HEADER

#include <bits/stdc++.h>

#include "keyboard.hpp"

namespace keyboard
{
	struct QwertyKeyboard : public Keyboard
	{
		Button map(Key key)
		{
			switch (key)
			{
				default:
					throw "Unknown key";

				case Key::ONE: return Button::from_key(Key::ONE);
				case Key::TWO: return Button::from_key(Key::TWO);
				case Key::THREE: return Button::from_key(Key::THREE);
				case Key::FOUR: return Button::from_key(Key::FOUR);
				case Key::FIVE: return Button::from_key(Key::FIVE);
				case Key::SIX: return Button::from_key(Key::SIX);
				case Key::SEVEN: return Button::from_key(Key::SEVEN);
				case Key::EIGHT: return Button::from_key(Key::EIGHT);
				case Key::NINE: return Button::from_key(Key::NINE);
				case Key::ZERO: return Button::from_key(Key::ZERO);
				case Key::DASH: return Button::from_key(Key::DASH);
				case Key::EQUALS: return Button::from_key(Key::EQUALS);
				case Key::Q: return Button::from_key(Key::Q);
				case Key::W: return Button::from_key(Key::W);
				case Key::E: return Button::from_key(Key::E);
				case Key::R: return Button::from_key(Key::R);
				case Key::T: return Button::from_key(Key::T);
				case Key::Y: return Button::from_key(Key::Y);
				case Key::U: return Button::from_key(Key::U);
				case Key::I: return Button::from_key(Key::I);
				case Key::O: return Button::from_key(Key::O);
				case Key::P: return Button::from_key(Key::P);
				case Key::LEFT_BRACKET: return Button::from_key(Key::LEFT_BRACKET);
				case Key::RIGHT_BRACKET: return Button::from_key(Key::RIGHT_BRACKET);
				case Key::BACKSLASH: return Button::from_key(Key::BACKSLASH);
				case Key::A: return Button::from_key(Key::A);
				case Key::S: return Button::from_key(Key::S);
				case Key::D: return Button::from_key(Key::D);
				case Key::F: return Button::from_key(Key::F);
				case Key::G: return Button::from_key(Key::G);
				case Key::H: return Button::from_key(Key::H);
				case Key::J: return Button::from_key(Key::J);
				case Key::K: return Button::from_key(Key::K);
				case Key::L: return Button::from_key(Key::L);
				case Key::SEMICOLON: return Button::from_key(Key::SEMICOLON);
				case Key::QUOTE: return Button::from_key(Key::QUOTE);
				case Key::Z: return Button::from_key(Key::Z);
				case Key::X: return Button::from_key(Key::X);
				case Key::C: return Button::from_key(Key::C);
				case Key::V: return Button::from_key(Key::V);
				case Key::B: return Button::from_key(Key::B);
				case Key::N: return Button::from_key(Key::N);
				case Key::M: return Button::from_key(Key::M);
				case Key::COMMA: return Button::from_key(Key::COMMA);
				case Key::DOT: return Button::from_key(Key::DOT);
				case Key::SLASH: return Button::from_key(Key::SLASH);
				case Key::SPACE: return Button::from_key(Key::SPACE);
				case Key::LEFT_SHIFT: return Button::from_key(Key::LEFT_SHIFT);
				case Key::RIGHT_SHIFT: return Button::from_key(Key::RIGHT_SHIFT);
				case Key::ENTER: return Button::from_key(Key::ENTER);
			}
		}
	};

	struct WorkmanKeyboard : public Keyboard
	{
		Button map(Key key)
		{
			switch (key)
			{
				default:
					throw "Unknown key";

				case Key::ONE: return Button::from_key(Key::ONE);
				case Key::TWO: return Button::from_key(Key::TWO);
				case Key::THREE: return Button::from_key(Key::THREE);
				case Key::FOUR: return Button::from_key(Key::FOUR);
				case Key::FIVE: return Button::from_key(Key::FIVE);
				case Key::SIX: return Button::from_key(Key::SIX);
				case Key::SEVEN: return Button::from_key(Key::SEVEN);
				case Key::EIGHT: return Button::from_key(Key::EIGHT);
				case Key::NINE: return Button::from_key(Key::NINE);
				case Key::ZERO: return Button::from_key(Key::ZERO);
				case Key::DASH: return Button::from_key(Key::DASH);
				case Key::EQUALS: return Button::from_key(Key::EQUALS);
				case Key::Q: return Button::from_key(Key::Q);
				case Key::W: return Button::from_key(Key::R);
				case Key::E: return Button::from_key(Key::K);
				case Key::R: return Button::from_key(Key::E);
				case Key::T: return Button::from_key(Key::F);
				case Key::Y: return Button::from_key(Key::H);
				case Key::U: return Button::from_key(Key::I);
				case Key::I: return Button::from_key(Key::SEMICOLON);
				case Key::O: return Button::from_key(Key::L);
				case Key::P: return Button::from_key(Key::O);
				case Key::LEFT_BRACKET: return Button::from_key(Key::LEFT_BRACKET);
				case Key::RIGHT_BRACKET: return Button::from_key(Key::RIGHT_BRACKET);
				case Key::BACKSLASH: return Button::from_key(Key::BACKSLASH);
				case Key::A: return Button::from_key(Key::A);
				case Key::S: return Button::from_key(Key::S);
				case Key::D: return Button::from_key(Key::W);
				case Key::F: return Button::from_key(Key::U);
				case Key::G: return Button::from_key(Key::G);
				case Key::H: return Button::from_key(Key::D);
				case Key::J: return Button::from_key(Key::Y);
				case Key::K: return Button::from_key(Key::N);
				case Key::L: return Button::from_key(Key::M);
				case Key::SEMICOLON: return Button::from_key(Key::P);
				case Key::QUOTE: return Button::from_key(Key::QUOTE);
				case Key::Z: return Button::from_key(Key::Z);
				case Key::X: return Button::from_key(Key::X);
				case Key::C: return Button::from_key(Key::V);
				case Key::V: return Button::from_key(Key::B);
				case Key::B: return Button::from_key(Key::T);
				case Key::N: return Button::from_key(Key::J);
				case Key::M: return Button::from_key(Key::C);
				case Key::COMMA: return Button::from_key(Key::COMMA);
				case Key::DOT: return Button::from_key(Key::DOT);
				case Key::SLASH: return Button::from_key(Key::SLASH);
				case Key::SPACE: return Button::from_key(Key::SPACE);
				case Key::LEFT_SHIFT: return Button::from_key(Key::LEFT_SHIFT);
				case Key::RIGHT_SHIFT: return Button::from_key(Key::RIGHT_SHIFT);
				case Key::ENTER: return Button::from_key(Key::ENTER);
			}
		}
	};

	struct WorkmanPlusKeyboard : public Keyboard
	{
		Button map(Key key)
		{
			switch (key)
			{
				default:
					throw "Unknown key";

				case Key::ONE: return Button::from_key(Key::ONE);
				case Key::TWO: return Button::from_key(Key::TWO);
				case Key::THREE: return Button::from_key(Key::THREE);
				case Key::FOUR: return Button::from_key(Key::FOUR);
				case Key::FIVE: return Button::from_key(Key::FIVE);
				case Key::SIX: return Button::from_key(Key::SIX);
				case Key::SEVEN: return Button::from_key(Key::SEVEN);
				case Key::EIGHT: return Button::from_key(Key::EIGHT);
				case Key::NINE: return Button::from_key(Key::NINE);
				case Key::ZERO: return Button::from_key(Key::ZERO);
				case Key::DASH: return Button::from_key(Key::DASH);
				case Key::EQUALS: return Button::from_key(Key::EQUALS);
				case Key::Q: return Button::from_key(Key::Q);
				case Key::W: return Button::from_key(Key::R);
				case Key::E: return Button::from_key(Key::K);
				case Key::R: return Button::from_key(Key::E);
				case Key::T: return Button::from_key(Key::F);
				case Key::Y: return Button::from_key(Key::H);
				case Key::U: return Button::from_key(Key::I);
				case Key::I: return Button::from_key(Key::SEMICOLON);
				case Key::O: return Button::from_key(Key::L);
				case Key::P: return Button::from_key(Key::O);
				case Key::LEFT_BRACKET: return Button::from_key(Key::LEFT_BRACKET);
				case Key::RIGHT_BRACKET: return Button::from_key(Key::RIGHT_BRACKET);
				case Key::BACKSLASH: return Button::from_key(Key::BACKSLASH);
				case Key::A: return Button::from_key(Key::S);
				case Key::S: return Button::from_key(Key::A);
				case Key::D: return Button::from_key(Key::W);
				case Key::F: return Button::from_key(Key::U);
				case Key::G: return Button::from_key(Key::G);
				case Key::H: return Button::from_key(Key::D);
				case Key::J: return Button::from_key(Key::Y);
				case Key::K: return Button::from_key(Key::N);
				case Key::L: return Button::from_key(Key::M);
				case Key::SEMICOLON: return Button::from_key(Key::P);
				case Key::QUOTE: return Button::from_key(Key::QUOTE);
				case Key::Z: return Button::from_key(Key::Z);
				case Key::X: return Button::from_key(Key::X);
				case Key::C: return Button::from_key(Key::V);
				case Key::V: return Button::from_key(Key::B);
				case Key::B: return Button::from_key(Key::T);
				case Key::N: return Button::from_key(Key::J);
				case Key::M: return Button::from_key(Key::C);
				case Key::COMMA: return Button::from_key(Key::COMMA);
				case Key::DOT: return Button::from_key(Key::DOT);
				case Key::SLASH: return Button::from_key(Key::SLASH);
				case Key::SPACE: return Button::from_key(Key::SPACE);
				case Key::LEFT_SHIFT: return Button::from_key(Key::LEFT_SHIFT);
				case Key::RIGHT_SHIFT: return Button::from_key(Key::RIGHT_SHIFT);
				case Key::ENTER: return Button::from_key(Key::ENTER);
			}
		}
	};

	struct DvorakKeyboard : public Keyboard
	{
		Button map(Key key)
		{
			switch (key)
			{
				default:
					throw "Unknown key";

				case Key::ONE: return Button::from_key(Key::ONE);
				case Key::TWO: return Button::from_key(Key::TWO);
				case Key::THREE: return Button::from_key(Key::THREE);
				case Key::FOUR: return Button::from_key(Key::FOUR);
				case Key::FIVE: return Button::from_key(Key::FIVE);
				case Key::SIX: return Button::from_key(Key::SIX);
				case Key::SEVEN: return Button::from_key(Key::SEVEN);
				case Key::EIGHT: return Button::from_key(Key::EIGHT);
				case Key::NINE: return Button::from_key(Key::NINE);
				case Key::ZERO: return Button::from_key(Key::ZERO);
				case Key::DASH: return Button::from_key(Key::DASH);
				case Key::EQUALS: return Button::from_key(Key::RIGHT_BRACKET);
				case Key::Q: return Button::from_key(Key::X);
				case Key::W: return Button::from_key(Key::COMMA);
				case Key::E: return Button::from_key(Key::D);
				case Key::R: return Button::from_key(Key::O);
				case Key::T: return Button::from_key(Key::K);
				case Key::Y: return Button::from_key(Key::T);
				case Key::U: return Button::from_key(Key::F);
				case Key::I: return Button::from_key(Key::G);
				case Key::O: return Button::from_key(Key::S);
				case Key::P: return Button::from_key(Key::R);
				case Key::LEFT_BRACKET: return Button::from_key(Key::DASH);
				case Key::RIGHT_BRACKET: return Button::from_key(Key::EQUALS);
				case Key::BACKSLASH: return Button::from_key(Key::BACKSLASH);
				case Key::A: return Button::from_key(Key::A);
				case Key::S: return Button::from_key(Key::SEMICOLON);
				case Key::D: return Button::from_key(Key::H);
				case Key::F: return Button::from_key(Key::Y);
				case Key::G: return Button::from_key(Key::U);
				case Key::H: return Button::from_key(Key::J);
				case Key::J: return Button::from_key(Key::C);
				case Key::K: return Button::from_key(Key::V);
				case Key::L: return Button::from_key(Key::O);
				case Key::SEMICOLON: return Button::from_key(Key::Z);
				case Key::QUOTE: return Button::from_key(Key::DASH);
				case Key::Z: return Button::from_key(Key::SLASH);
				case Key::X: return Button::from_key(Key::B);
				case Key::C: return Button::from_key(Key::I);
				case Key::V: return Button::from_key(Key::DOT);
				case Key::B: return Button::from_key(Key::B);
				case Key::N: return Button::from_key(Key::K);
				case Key::M: return Button::from_key(Key::M);
				case Key::COMMA: return Button::from_key(Key::W);
				case Key::DOT: return Button::from_key(Key::E);
				case Key::SLASH: return Button::from_key(Key::LEFT_BRACKET);
				case Key::SPACE: return Button::from_key(Key::SPACE);
				case Key::LEFT_SHIFT: return Button::from_key(Key::LEFT_SHIFT);
				case Key::RIGHT_SHIFT: return Button::from_key(Key::RIGHT_SHIFT);
				case Key::ENTER: return Button::from_key(Key::ENTER);
			}
		}
	};
}

#endif