/*
  ==============================================================================

    PopUpWindow.h
    Created: 5 Jul 2023 11:32:10pm
    Author:  MERT KABUKÇUOĞLU

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class popUpWindow: public juce::DocumentWindow
{
public:
    popUpWindow( const juce::String& name, juce::Colour backgroundColour, int buttonsNeeded );
    void closeButtonPressed() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (popUpWindow)
};
