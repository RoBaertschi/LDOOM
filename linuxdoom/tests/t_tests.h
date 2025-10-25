// TODO(robin): how to do header docs?

#ifndef __T_TESTS__
#define __T_TESTS__

void T_Init(void);
void T_Fail(const char* format, ...);

#define ASSERT(...) do { if(!(__VA_ARGS__)) T_Fail("ASSERTION FAILED " #__VA_ARGS__); } while(0)

#endif // __T_TESTS__
