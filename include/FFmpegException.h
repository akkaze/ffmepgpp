#pragma once

#include <stdexcept>
#include "ffmpeg.h"

#include "std.h"

namespace ffmpegcpp
{
	class FFmpegException : std::runtime_error
	{

	public:

		FFmpegException(std::string error);

		FFmpegException(std::string error, int returnValue);

		virtual char const* what() const throw()
		{
			return std::runtime_error::what();
		}


	private:

		char error[AV_ERROR_MAX_STRING_SIZE];
	};
}
