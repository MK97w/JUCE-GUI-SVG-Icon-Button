/*
  ==============================================================================

    PopUpWindow.cpp
    Created: 5 Jul 2023 11:32:29pm
    Author:  MERT KABUKÇUOĞLU

  ==============================================================================
*/

#include "PopUpWindow.h"

popUpWindow::popUpWindow(juce::String name)
            :DocumentWindow (name,
                             juce::Desktop::getInstance().getDefaultLookAndFeel()
                             .findColour (juce::ResizableWindow::backgroundColourId),
                             DocumentWindow::allButtons)
{
}

void popUpWindow::closeButtonPressed()
{
    delete this;
}
