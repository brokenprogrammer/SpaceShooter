#ifndef INPUT_H
#define INPUT_H
#pragma once

struct KeyState
{
	bool m_pressed;
	bool m_released;
	bool m_held;
};

class Input
{
public:
	Input();
	Input(const Input&) = default;

	Input& operator =(const Input&) = default;

	~Input();

	void poll();

	inline KeyState getKey(int t_key) { return m_keyboardKeys[t_key]; }

	inline int getMouseX() { return m_mouseX; }
	inline int getMouseY() { return m_mouseY; }
	inline KeyState getMouseKey(int t_mouseKey) { return m_keyboardKeys[t_mouseKey]; }

private:
	KeyState m_keyboardKeys[256];
	short m_oldKeyboardState[256];
	short m_newKeyboardState[256];

	KeyState m_mouseKeys[5];
	int m_mouseX;
	int m_mouseY;
};

#endif
