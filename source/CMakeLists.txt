cmake_minimum_required(VERSION 3.22)

project(OpenEQ VERSION 0.1.0)

juce_add_gui_app(${PROJECT_NAME}
    PRODUCT_NAME "OpenAudioEQ") 

target_sources(${PROJECT_NAME}
    PRIVATE
        main.cpp)

target_compile_definitions(${PROJECT_NAME}
    PRIVATE
        # JUCE_WEB_BROWSER and JUCE_USE_CURL would be on by default, but you might not need them.
        JUCE_WEB_BROWSER=0  # If you remove this, add `NEEDS_WEB_BROWSER TRUE` to the `juce_add_gui_app` call
        JUCE_USE_CURL=0     # If you remove this, add `NEEDS_CURL TRUE` to the `juce_add_gui_app` call
        )

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        # GuiAppData            # If we'd created a binary data target, we'd link to it here
        juce::juce_gui_extra
    PUBLIC
        juce::juce_recommended_config_flags
        juce::juce_recommended_lto_flags
        juce::juce_recommended_warning_flags)
