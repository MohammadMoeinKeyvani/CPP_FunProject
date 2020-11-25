#include "FrameTimeMeasurer.h"

using namespace std::chrono;

FrameTimeMeasurer::FrameTimeMeasurer()
{
	last = steady_clock::now();
}

float FrameTimeMeasurer::Mark()
{
	const auto oldTime = last;
	last = steady_clock::now();
	const duration<float> timePerFrame = last - oldTime;
	return timePerFrame.count();
}
