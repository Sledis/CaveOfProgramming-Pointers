#pragma once
#include <iostream>

namespace jwp {

	const std::string name = "Ishi";

	class Cat {
	public:
		Cat();
		virtual ~Cat();
		void speak();
	};
}
