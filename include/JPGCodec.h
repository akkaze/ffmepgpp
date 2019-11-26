#pragma once
#include "Codecs/VideoCodec.h"

namespace ffmpegcpp
{

	class JPGCodec : public VideoCodec
	{

	public:

		JPGCodec();

		void SetCompressionLevel(int compressionLevel);
	};


}
