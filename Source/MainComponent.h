#pragma once

#include <JuceHeader.h>
#include "PopUpWindow.h"
using namespace juce;
//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent  : public juce::Component                        
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    //void buttonClicked (juce::Button*) override;
    void setNewSize(int x, int y);

private:
    //==============================================================================
    
    // Your private member variables go here...
    ShapeButton buttonOne {"Size",juce::Colours::grey,
        juce::Colours::white,
        juce::Colours::white};
   /* ShapeButton buttonTwo {"Website",juce::Colours::white,
        juce::Colours::white,
        juce::Colours::white};
    ShapeButton buttonThree {"Settings",juce::Colours::white,
        juce::Colours::white,
        juce::Colours::white};
    */
    TextButton buttonTwo{"Website"};
    TextButton buttonThree{"Settings"};
    PopupMenu sizeMenu;
    Component::SafePointer<popUpWindow> settingsWindow;
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
