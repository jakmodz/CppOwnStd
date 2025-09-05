#pragma once

#ifdef _DEBUG
#define LOG(format, ...) { printf(format), __VA_ARGS__); }

#define ASSERT(condition, exception) {\
	assert(condition);\
	if (!condition) {\
		throw exception;\
	}\
}

#else
#define LOG(format, ...) { }

#define ASSERT(condition, exception) {\
	if (!condition) {\
		throw exception;\
	}\
}
#endif // _DEBUG 
