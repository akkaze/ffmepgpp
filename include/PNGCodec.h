#pragma once
#include "Codecs/VideoCodec.h"

namespace ffmpegcpp
{

	class PNGCodec : public VideoCodec
	{

	public:

		PNGCodec();

		void SetCompressionLevel(int compressionLevel);
	};


}
