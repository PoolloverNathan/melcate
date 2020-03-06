#ifndef NATHAN_KULZER_03_2020_MELCATE
#define NATHAN_KULZER_03_2020_MELCATE
#include <iostream>
#include <cstdlib>
#include <string>
namespace melcate {
	template <typename T> class Alloc {
		private T* allocloc;
		private bool alloced;
		private bool exis;
		void initmem() {
			if (! this->alloced) {
				this->allocloc = malloc(sizeof(T));
				if (this->allocloc == 0) {
						std::cerr << "[fatal error @ " << __FILE__ << ":" << __LINE__ << "] out of memory (need to allocate " << std::to_string(sizeof(T)) << ")";
						std::abort();
				} else
						this->alloced = true;
			}
		}
