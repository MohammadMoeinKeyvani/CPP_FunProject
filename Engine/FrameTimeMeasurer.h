#pragma once

#include <chrono>

class FrameTimeMeasurer
{
public:
	FrameTimeMeasurer();
	float Mark();

private:
	std::chrono::steady_clock::time_point last;
};
