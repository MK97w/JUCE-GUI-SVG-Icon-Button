/*
  ==============================================================================

    PopUpWindow.cpp
    Created: 5 Jul 2023 11:32:29pm
    Author:  MERT KABUKÇUOĞLU

  ==============================================================================
*/

#include "PopUpWindow.h"

popUpWindow::popUpWindow(const juce::String& name, juce::Colour backgroundColour, int buttonsNeeded)
    : DocumentWindow (name, backgroundColour, buttonsNeeded)
    {
    }

void popUpWindow::closeButtonPressed()
{
    delete this;
}
