#pragma once

#include <JuceHeader.h>
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
    TextButton buttonOne {"Button One"};
    TextButton buttonTwo {"Button Two"};
    TextButton buttonThree {"Button Three"};
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
