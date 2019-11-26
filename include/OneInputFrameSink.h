#pragma once

#include "ffmpeg.h"

#include "FrameSinks/FrameWriter.h"
#include "FrameSinks/FrameSink.h"


namespace ffmpegcpp
{
	class OneInputFrameSink : public FrameSink
	{
	public:

		OneInputFrameSink(FrameWriter* writer);
		~OneInputFrameSink();

		FrameSinkStream* CreateStream();


	private:

		int nStreamsGenerated = 0;

		FrameWriter* writer;

		FrameSinkStream* stream = nullptr;
	};
}

