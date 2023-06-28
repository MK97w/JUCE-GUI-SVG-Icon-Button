#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    newButton.addListener(this);
    addAndMakeVisible(newButton);
    setSize (700, 500);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setFont (juce::Font (16.0f));
    g.setColour (juce::Colours::white);
    g.drawText ("Hello World!", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    newButton.setBounds(getLocalBounds().reduced(100));
                        
}
void MainComponent::buttonClicked(juce::Button*)
{
    DBG("pressed");
}
