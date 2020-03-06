namespace melcate {
	void Alloc::initmem() {
		if (! this->alloced) {
			this->allocloc = malloc(sizeof(T));
			if (this->allocloc == 0) {
				std::cerr << "[fatal error @ " << __FILE__ << ":" << __LINE__ << "] out of memory (need to allocate " << std::to_string(sizeof(T)) << ")";
				std::abort();
			} else {
				this->alloced = true;
            }
		}
	}
}
