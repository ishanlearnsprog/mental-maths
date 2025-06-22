void clear() {
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(__WIN32)
        system("cls");
    #endif
}
