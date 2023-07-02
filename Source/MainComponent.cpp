#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    addAndMakeVisible(buttonOne);
    buttonOne.setToggleState(true, NotificationType::dontSendNotification);
    buttonOne.onClick = [this](){setSize(1440,1060);};
    
    addAndMakeVisible(buttonTwo);
    buttonTwo.setToggleState(true, NotificationType::dontSendNotification);
    buttonTwo.onClick = [this](){setSize(1080,800);};
    
    addAndMakeVisible(buttonThree);
    buttonThree.setToggleState(true, NotificationType::dontSendNotification);
    buttonThree.onClick = [this](){setSize(720,530);};
    
    setSize (720, 530);
    
   
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
    auto leftMargin = 20;
    auto bottomMargin = 100 ;
    auto space = 10;
    
    buttonOne.setBounds(leftMargin,getHeight()-bottomMargin,100,80);
    buttonTwo.setBounds(buttonOne.getX()+space+buttonOne.getWidth(),buttonOne.getY() ,100, 80);
    buttonThree.setBounds(buttonTwo.getX()+space+buttonOne.getWidth(),buttonOne.getY() ,100, 80);

}



