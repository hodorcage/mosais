#pragma once

#include <iostream>

#include "mosais.memory.Manager.hpp"
#include "mosais.cognitive.Manager.hpp"
#include "mosais.nlp.Manager.hpp"
#include "mosais.General.hpp"

namespace mosais
{
	class System
	{
	public:
		System();
		~System();
		
		memory::Manager memory;
		cognitive::Manager cognitive;
		nlp::Manager nlp;
		
		RetType formatInput();
		RetType setInput();
		RetType formatOutput();
		RetType getOutput();
		
	private:
		
		
		int argc;
		char** argv;
	};
}
