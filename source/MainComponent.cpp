#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    juce::RuntimePermissions::request(juce::RuntimePermissions::recordAudio,
                                     [this] (bool granted)
                                     {
                                         int numInputChannels = granted ? 2 : 0;
                                         audioDeviceManager.initialise (numInputChannels, 2, nullptr, true, {}, nullptr);
                                     });
    audioSetupComp.reset(new juce::AudioDeviceSelectorComponent 
        (audioDeviceManager, 0, 256, 0, 256, true, true, true, false)
    );
    addAndMakeVisible(audioSetupComp.get());
    setSize (600, 400);
}

//==============================================================================

void MainComponent::resized()
{
    audioSetupComp->setBounds(getLocalBounds().reduced(10));
    sidePanel.setBounds(getLocalBounds().removeFromLeft(sidePanel.getWidth()));
}

void MainComponent::paint (juce::Graphics& g)
{
    g.fillAll(juce::LookAndFeel::getDefaultLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
}

//==============================================================================