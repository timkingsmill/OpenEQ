#include <iostream>

#include "main_component.h"

/**
 * @brief The main entry point of the application.
 *
 * This function initializes the JUCE application and starts the event loop.
 */
int main(int argc, char* argv[])
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
    // This will create the main application window and start the event loop.
}


//==============================================================================
// This macro generates the main() routine that launches the app.
//START_JUCE_APPLICATION(GuiAppApplication)