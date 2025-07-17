cmake_minimum_required(VERSION 3.22)

project(OpenEQ VERSION 0.1.0)

juce_add_gui_app(${PROJECT_NAME}
    PRODUCT_NAME "OpenAudioEQ") 

target_sources(${PROJECT_NAME}
    PRIVATE
        main.cpp)
