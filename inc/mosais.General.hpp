#pragma once

#include <iostream>

#include "mosais.Types.hpp"

#define LOG(x) std::cout << "-> LOG: '" << x << "'." << std::endl

namespace mosais
{
	struct RetType
	{
		RetType(uint _status = Success, std::string _msg = std::string())
			: status(_status), msg(_msg)
		{}
		
		enum {
			Success,
			Error
		};
		uint status;
		std::string msg;
	};
}
