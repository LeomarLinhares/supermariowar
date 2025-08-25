#pragma once


/// Creates the user-writable settings directory, if it doesn't exist yet.
void ensureSettingsDir();


class App {
public:
    static int screenWidth;
    static int screenHeight;
    static constexpr int menuTransparency = 72;
};
