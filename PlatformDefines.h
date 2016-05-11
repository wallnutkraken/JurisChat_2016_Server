#ifdef __linux__
#define pause system("read -p Press the [ENTER] key to continue...")

#elif _WIN32
#define pause system("pause")
#endif