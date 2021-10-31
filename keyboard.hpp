#ifndef KEYBOARD_HEADER
#define KEYBOARD_HEADER

#include <bits/stdc++.h>

namespace keyboard
{
	/**
	 *  Represents the key to a character to type.
	 */
	struct Key
	{
		enum Value : uint8_t
		{
			ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, ZERO,      DASH,         EQUALS,
			Q,   W,   E,     R,    T,    Y,    U,    I,     O,    P,         LEFT_BRACKET, RIGHT_BRACKET, BACKSLASH,
			A,   S,   D,     F,    G,    H,    J,    K,     L,    SEMICOLON, QUOTE,
			Z,   X,   C,     V,    B,    N,    M,    COMMA, DOT,  SLASH,
			                     SPACE,
			LEFT_SHIFT, RIGHT_SHIFT, ENTER
		};

		Value value;

		Key() {}

		Key(Value value) : value(value) {}

		// Allow switch comparisons

		operator Value() const { return value; }

		// Don't allow conversion to boolean

		explicit operator bool() = delete;

		/**
		 *  @returns The key that corresponds to a character to type.
		 */
		static Key from_char(char c)
		{
			switch (c)
			{
				default:
					throw "Unknown character";

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

				case '=':
				case '+':
					return Key::EQUALS;

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

				case ']':
				case '}':
					return Key::RIGHT_BRACKET;

				case '\\':
				case '|':
					return Key::BACKSLASH;

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
	};

	enum class Hand : uint8_t
	{
		LEFT,
		RIGHT,
		THUMBS,
		UNKNOWN
	};

	enum class Finger : uint8_t
	{
		LEFT_PINKY,
		LEFT_RING,
		LEFT_MIDDLE,
		LEFT_INDEX,
		THUMBS,
		RIGHT_INDEX,
		RIGHT_MIDDLE,
		RIGHT_RING,
		RIGHT_PINKY,
		UNKNOWN
	};

	enum class Row : uint8_t
	{
		NUMBER_ROW,
		TOP_ROW,
		HOME_ROW,
		BOTTOM_ROW,
		SPACEBAR_ROW
	};

	/**
	 *  Represents the location of a key on a keyboard.
	 */
	struct Button
	{
		Key key;
		Finger finger;
		Row row;

		Button() {}

		Button(Key key, Finger finger, Row row)
			: key(key), finger(finger), row(row) {}

		/**
		 *  @returns The hand this button corresponds to.
		 */
		Hand hand()
		{
			switch (finger)
			{
				default:
					throw "Unknown finger";

				case Finger::LEFT_PINKY:
				case Finger::LEFT_RING:
				case Finger::LEFT_MIDDLE:
				case Finger::LEFT_INDEX:
					return Hand::LEFT;

				case Finger::THUMBS:
					return Hand::THUMBS;

				case Finger::RIGHT_INDEX:
				case Finger::RIGHT_MIDDLE:
				case Finger::RIGHT_RING:
				case Finger::RIGHT_PINKY:
					return Hand::RIGHT;
			};
		}

		/**
		 *  @returns The strain borne by the fingers
		 */
		size_t strain()
		{
			switch (key)
			{
				default:
					throw "Unknown key";

				case Key::ONE: return 10;
				case Key::TWO: return 6;
				case Key::THREE: return 6;
				case Key::FOUR: return 8;
				case Key::FIVE: return 8;
				case Key::SIX: return 12;
				case Key::SEVEN: return 8;
				case Key::EIGHT: return 6;
				case Key::NINE: return 6;
				case Key::ZERO: return 10;
				case Key::DASH: return 10;
				case Key::EQUALS: return 12;
				case Key::Q: return 8;
				case Key::W: return 4;
				case Key::E: return 4;
				case Key::R: return 6;
				case Key::T: return 8;
				case Key::Y: return 10;
				case Key::U: return 6;
				case Key::I: return 4;
				case Key::O: return 4;
				case Key::P: return 8;
				case Key::LEFT_BRACKET: return 8;
				case Key::RIGHT_BRACKET: return 10;
				case Key::BACKSLASH: return 12;
				case Key::A: return 3;
				case Key::S: return 2;
				case Key::D: return 2;
				case Key::F: return 2;
				case Key::G: return 6;
				case Key::H: return 6;
				case Key::J: return 2;
				case Key::K: return 2;
				case Key::L: return 2;
				case Key::SEMICOLON: return 3;
				case Key::QUOTE: return 5;
				case Key::Z: return 8;
				case Key::X: return 8;
				case Key::C: return 6;
				case Key::V: return 4;
				case Key::B: return 10;
				case Key::N: return 6;
				case Key::M: return 4;
				case Key::COMMA: return 6;
				case Key::DOT: return 8;
				case Key::SLASH: return 8;
				case Key::SPACE: return 2;
				case Key::LEFT_SHIFT: return 4;
				case Key::RIGHT_SHIFT: return 4;
				case Key::ENTER: return 6;
			}
		}

		/**
		 *  @returns The button posiontion of a QWERTY key.
		 */
		static Button from_key(Key key)
		{
			switch (key)
			{
				default:
					throw "Unknown key";

				case Key::ONE: return Button(key, Finger::LEFT_PINKY, Row::NUMBER_ROW);
				case Key::TWO: return Button(key, Finger::LEFT_RING, Row::NUMBER_ROW);
				case Key::THREE: return Button(key, Finger::LEFT_MIDDLE, Row::NUMBER_ROW);
				case Key::FOUR: return Button(key, Finger::LEFT_INDEX, Row::NUMBER_ROW);
				case Key::FIVE: return Button(key, Finger::LEFT_INDEX, Row::NUMBER_ROW);
				case Key::SIX: return Button(key, Finger::LEFT_INDEX, Row::NUMBER_ROW);
				case Key::SEVEN: return Button(key, Finger::RIGHT_INDEX, Row::NUMBER_ROW);
				case Key::EIGHT: return Button(key, Finger::RIGHT_MIDDLE, Row::NUMBER_ROW);
				case Key::NINE: return Button(key, Finger::RIGHT_RING, Row::NUMBER_ROW);
				case Key::ZERO: return Button(key, Finger::RIGHT_RING, Row::NUMBER_ROW);
				case Key::DASH: return Button(key, Finger::RIGHT_PINKY, Row::NUMBER_ROW);
				case Key::EQUALS: return Button(key, Finger::RIGHT_PINKY, Row::NUMBER_ROW);

				case Key::Q: return Button(key, Finger::LEFT_PINKY, Row::TOP_ROW);
				case Key::W: return Button(key, Finger::LEFT_RING, Row::TOP_ROW);
				case Key::E: return Button(key, Finger::LEFT_MIDDLE, Row::TOP_ROW);
				case Key::R: return Button(key, Finger::LEFT_INDEX, Row::TOP_ROW);
				case Key::T: return Button(key, Finger::LEFT_INDEX, Row::TOP_ROW);
				case Key::Y: return Button(key, Finger::RIGHT_INDEX, Row::TOP_ROW);
				case Key::U: return Button(key, Finger::RIGHT_INDEX, Row::TOP_ROW);
				case Key::I: return Button(key, Finger::RIGHT_MIDDLE, Row::TOP_ROW);
				case Key::O: return Button(key, Finger::RIGHT_RING, Row::TOP_ROW);
				case Key::P: return Button(key, Finger::RIGHT_PINKY, Row::TOP_ROW);
				case Key::LEFT_BRACKET: return Button(key, Finger::RIGHT_PINKY, Row::TOP_ROW);
				case Key::RIGHT_BRACKET: return Button(key, Finger::RIGHT_PINKY, Row::TOP_ROW);
				case Key::BACKSLASH: return Button(key, Finger::RIGHT_PINKY, Row::TOP_ROW);

				case Key::A: return Button(key, Finger::LEFT_PINKY, Row::HOME_ROW);
				case Key::S: return Button(key, Finger::LEFT_RING, Row::HOME_ROW);
				case Key::D: return Button(key, Finger::LEFT_MIDDLE, Row::HOME_ROW);
				case Key::F: return Button(key, Finger::LEFT_INDEX, Row::HOME_ROW);
				case Key::G: return Button(key, Finger::LEFT_INDEX, Row::HOME_ROW);
				case Key::H: return Button(key, Finger::RIGHT_INDEX, Row::HOME_ROW);
				case Key::J: return Button(key, Finger::RIGHT_INDEX, Row::HOME_ROW);
				case Key::K: return Button(key, Finger::RIGHT_MIDDLE, Row::HOME_ROW);
				case Key::L: return Button(key, Finger::RIGHT_RING, Row::HOME_ROW);
				case Key::SEMICOLON: return Button(key, Finger::RIGHT_PINKY, Row::HOME_ROW);
				case Key::QUOTE: return Button(key, Finger::RIGHT_PINKY, Row::HOME_ROW);

				case Key::Z: return Button(key, Finger::LEFT_PINKY, Row::BOTTOM_ROW);
				case Key::X: return Button(key, Finger::LEFT_RING, Row::BOTTOM_ROW);
				case Key::C: return Button(key, Finger::LEFT_MIDDLE, Row::BOTTOM_ROW);
				case Key::V: return Button(key, Finger::LEFT_INDEX, Row::BOTTOM_ROW);
				case Key::B: return Button(key, Finger::LEFT_INDEX, Row::BOTTOM_ROW);
				case Key::N: return Button(key, Finger::RIGHT_INDEX, Row::BOTTOM_ROW);
				case Key::M: return Button(key, Finger::RIGHT_INDEX, Row::BOTTOM_ROW);
				case Key::COMMA: return Button(key, Finger::RIGHT_MIDDLE, Row::BOTTOM_ROW);
				case Key::DOT: return Button(key, Finger::RIGHT_RING, Row::BOTTOM_ROW);
				case Key::SLASH: return Button(key, Finger::RIGHT_PINKY, Row::BOTTOM_ROW);

				case Key::LEFT_SHIFT: return Button(key, Finger::LEFT_PINKY, Row::BOTTOM_ROW);
				case Key::RIGHT_SHIFT: return Button(key, Finger::RIGHT_PINKY, Row::BOTTOM_ROW);
				case Key::SPACE: return Button(key, Finger::THUMBS, Row::SPACEBAR_ROW);
				case Key::ENTER: return Button(key, Finger::RIGHT_PINKY, Row::HOME_ROW);
			}
		}
	};

	class Keyboard
	{
		public:
			// The name of the keyboard

			std::string name;

			// Strain analytics

			size_t strain = 0;

			// Finger analytics

			size_t left_pinky_finger_hits = 0;
			size_t left_ring_finger_hits = 0;
			size_t left_middle_finger_hits = 0;
			size_t left_index_finger_hits = 0;
			size_t thumb_hits = 0;
			size_t right_index_finger_hits = 0;
			size_t right_middle_finger_hits = 0;
			size_t right_ring_finger_hits = 0;
			size_t right_pinky_finger_hits = 0;

			Finger prev_finger = Finger::UNKNOWN;
			size_t same_finger_usage = 0;

			Hand prev_hand = Hand::UNKNOWN;
			size_t same_hand_usage = 0;

			// Keyboard map

			std::map<Key, Button> map;

			size_t total_hits()
			{
				return left_pinky_finger_hits + left_ring_finger_hits
					+ left_middle_finger_hits + left_index_finger_hits
					+ thumb_hits
					+ right_pinky_finger_hits + right_ring_finger_hits
					+ right_middle_finger_hits + right_index_finger_hits;
			}

			float left_pinky_finger_ratio()
			{
				return (float) left_pinky_finger_hits / (float) total_hits();
			}

			float left_ring_finger_ratio()
			{
				return (float) left_ring_finger_hits / (float) total_hits();
			}

			float left_middle_finger_ratio()
			{
				return (float) left_middle_finger_hits / (float) total_hits();
			}

			float left_index_finger_ratio()
			{
				return (float) left_index_finger_hits / (float) total_hits();
			}

			float thumb_ratio()
			{
				return (float) thumb_hits / (float) total_hits();
			}

			float right_index_finger_ratio()
			{
				return (float) right_index_finger_hits / (float) total_hits();
			}

			float right_middle_finger_ratio()
			{
				return (float) right_middle_finger_hits / (float) total_hits();
			}

			float right_ring_finger_ratio()
			{
				return (float) right_ring_finger_hits / (float) total_hits();
			}

			float right_pinky_finger_ratio()
			{
				return (float) right_pinky_finger_hits / (float) total_hits();
			}

			float same_finger_ratio()
			{
				return (float) same_finger_usage / (float) total_hits();
			}

			// Hand analytics

			size_t left_hand_hits()
			{
				return left_pinky_finger_hits + left_ring_finger_hits
					+ left_middle_finger_hits + left_index_finger_hits;
			}

			float left_hand_ratio()
			{
				return (float) left_hand_hits() / (float) total_hits();
			}

			size_t right_hand_hits()
			{
				return right_pinky_finger_hits + right_ring_finger_hits
					+ right_middle_finger_hits + right_index_finger_hits;
			}

			float right_hand_ratio()
			{
				return (float) right_hand_hits() / (float) total_hits();
			}

			float same_hand_ratio()
			{
				return (float) same_hand_usage / (float) total_hits();
			}

			// Row analytics

			size_t number_row_hits = 0;
			size_t top_row_hits = 0;
			size_t home_row_hits = 0;
			size_t bottom_row_hits = 0;
			size_t spacebar_row_hits = 0;

		private:
			size_t press(Button button)
			{
				size_t press_strain = 0;

				switch (button.finger)
				{
					case Finger::LEFT_PINKY: left_pinky_finger_hits++; break;
					case Finger::LEFT_RING: left_ring_finger_hits++; break;
					case Finger::LEFT_MIDDLE: left_middle_finger_hits++; break;
					case Finger::LEFT_INDEX: left_index_finger_hits++; break;
					case Finger::THUMBS: thumb_hits++; break;
					case Finger::RIGHT_INDEX: right_index_finger_hits++; break;
					case Finger::RIGHT_MIDDLE: right_middle_finger_hits++; break;
					case Finger::RIGHT_RING: right_ring_finger_hits++; break;
					case Finger::RIGHT_PINKY: right_pinky_finger_hits++; break;
				}

				if (button.finger == prev_finger)
				{
					same_finger_usage++;
					press_strain += 1;
				}

				if (button.hand() == prev_hand)
				{
					same_hand_usage++;
				}

				prev_finger = button.finger;
				prev_hand = button.hand();

				switch (button.row)
				{
					case Row::NUMBER_ROW: number_row_hits++; break;
					case Row::TOP_ROW: top_row_hits++; break;
					case Row::HOME_ROW: home_row_hits++; break;
					case Row::BOTTOM_ROW: bottom_row_hits++; break;
					case Row::SPACEBAR_ROW: spacebar_row_hits++; break;
				}

				press_strain += button.strain();

				return press_strain;
			}

			size_t press_normal(char c)
			{
				Button button = map[Key::from_char(c)];
				return press(button);
			}

			size_t press_shift(char c)
			{
				Button button = map[Key::from_char(c)];
				Hand shift_hand = button.hand();

				size_t key_strain = press(button);
				size_t shift_strain;

				if (shift_hand == Hand::LEFT)
				{
					shift_strain = press(Button::from_key(Key::LEFT_SHIFT));
				}
				else
				{
					shift_strain = press(Button::from_key(Key::LEFT_SHIFT));
				}

				return key_strain + shift_strain;
			}

		public:
			/**
			 *  @brief Presses a button on the keyboard by its character code.
			 *  Keypress analytics will be gathered.
			 *  @returns The keypress strain.
			 */
			size_t press_by_char(char c)
			{
				if (c >= 'A' && c <= 'Z')
				{
					return press_shift(c);
				}

				if (c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
				{
					return press_normal(c);
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
					case '+':
					case '{':
					case '}':
					case '|':
					case ':':
					case '"':
					case '<':
					case '>':
					case '?':
						return press_shift(c);

					case '-':
					case '=':
					case '[':
					case ']':
					case '\\':
					case ';':
					case '\'':
					case ',':
					case '.':
					case '/':
					case ' ':
					case '\n':
						return press_normal(c);
				}

				std::cerr << "Unknown character '" << c << "' (" << (int) c << ")" <<  std::endl;
				return 0;
			}

			/**
			 *  @brief Simulates typing text.
			 */
			Keyboard& type(const std::string& text)
			{
				for (size_t i = 0; i < text.size(); i++)
				{
					// Unicode characters outside of the ASCII range

					if ((text[i] & 0b11110000) == 0b11110000 && !(text[i] & 0b00001000))
					{
						std::cerr << "Skipped unknown character '" << text.substr(i, 4)
							<< "' at index " << i << std::endl;
						i += 3;
						continue;
					}

					if ((text[i] & 0b11100000) == 0b11100000 && !(text[i] & 0b00010000))
					{
						std::cerr << "Skipped unknown character '" << text.substr(i, 3)
							<< "' at index " << i << std::endl;
						i += 2;
						continue;
					}

					if ((text[i] & 0b11000000) == 0b11000000 && !(text[i] & 0b00100000))
					{
						std::cerr << "Skipped unknown character '" << text.substr(i, 2)
							<< "' at index " << i << std::endl;
						i += 1;
						continue;
					}

					strain += press_by_char(text[i]);
				}

				return *this;
			}

			/**
			 *  Pretty-prints keyboard analytics.
			 */
			void print_analytics()
			{
				std::cout << "Total strain: " << strain << std::endl;
				std::cout << "Total hits: " << total_hits() << std::endl;
				std::cout << "Finger distrubution: "
					<< left_pinky_finger_ratio() * 100 << "% "
					<< left_ring_finger_ratio() * 100 << "% "
					<< left_middle_finger_ratio() * 100 << "% "
					<< left_index_finger_ratio() * 100 << "% "
					<< "- "
					<< thumb_ratio() * 100 << "% "
					<< "- "
					<< right_index_finger_ratio() * 100 << "% "
					<< right_middle_finger_ratio() * 100 << "% "
					<< right_ring_finger_ratio() * 100 << "% "
					<< right_pinky_finger_ratio() * 100 << "% "
					<< std::endl;
				std::cout << "Same finger usage: "
					<< same_finger_ratio() * 100 << "% "
					<< std::endl;
				std::cout << "Same hand usage: "
					<< same_hand_ratio() * 100 << "% "
					<< std::endl;
				std::cout << "Hand distrubution: "
					<< left_hand_ratio() * 100 << "% (L)" << " / "
					<< right_hand_ratio() * 100 << "% (R)" << std::endl;
			}
	};
};

#endif