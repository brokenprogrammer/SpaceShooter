#pragma once

#include <Windows.h>
#include <string>

class Graphics
{
public:
	Graphics();
	Graphics(const Graphics&) = default;

	Graphics& operator =(const Graphics&) = default;

	~Graphics();

	void SetBuffer(CHAR_INFO *m_bufScreen, int m_screenWidth, int m_screenHeight);

	void Draw(float x, float y); // Draw one pixel
	void DrawLine(float x1, float y1, float x2, float y2);
	void DrawString(float x, float y, std::string str);
	void Fill(float x, float y, float width, float height);
	void Clear();

private:
	CHAR_INFO *m_bufScreen;
	int m_screenWidth;
	int m_screenHeight;
};