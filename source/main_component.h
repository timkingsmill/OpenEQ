#pragma once

// CMake builds don't use an AppConfig.h, so it's safe to include juce module headers
// directly. If you need to remain compatible with Projucer-generated builds, and
// have called `juce_generate_juce_header(<thisTarget>)` in your CMakeLists.txt,
// you could `#include <JuceHeader.h>` here instead, to make all your module headers visible.
#include <juce_gui_extra/juce_gui_extra.h>

/**
 * @class MainComponent
 * @brief The main UI component for the application, derived from juce::Component.
 *
 * This class serves as the primary container for the application's user interface.
 * It overrides the paint and resized methods to handle custom drawing and layout logic.
 *
 * @note This class is marked as final and cannot be inherited.
 */
class MainComponent final : public juce::Component
{
public:
    //==============================================================================
    MainComponent();

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};