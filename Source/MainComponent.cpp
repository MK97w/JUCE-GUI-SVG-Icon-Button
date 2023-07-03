#include "MainComponent.h"

static const unsigned char pathDataResize[] = { 110,109,229,208,191,65,82,184,231,65,108,229,208,191,65,150,67,216,65,108,82,184,223,65,150,67,216,65,108,82,184,223,65,42,92,184,65,108,14,45,240,65,42,92,184,65,108,14,45,240,65,83,184,231,65,108,229,208,191,65,83,184,231,65,99,109,82,184,223,65,170,
241,190,64,108,230,208,191,65,170,241,190,64,108,230,208,191,65,184,30,129,64,108,15,45,240,65,184,30,129,64,108,15,45,240,65,174,71,31,65,108,83,184,223,65,174,71,31,65,108,83,184,223,65,170,241,190,64,99,109,113,61,66,64,174,71,31,65,108,192,159,122,
63,174,71,31,65,108,192,159,122,63,184,30,129,64,108,156,196,224,64,184,30,129,64,108,156,196,224,64,170,241,190,64,108,113,61,66,64,170,241,190,64,108,113,61,66,64,174,71,31,65,99,109,170,241,158,64,53,94,0,65,108,150,67,208,65,53,94,0,65,108,150,67,
208,65,216,206,199,65,108,172,241,158,64,216,206,199,65,108,172,241,158,64,52,94,0,65,99,109,106,188,224,64,41,92,184,65,108,216,206,191,65,41,92,184,65,108,216,206,191,65,174,71,31,65,108,104,188,224,64,174,71,31,65,108,104,188,224,64,41,92,184,65,99,
109,186,73,16,65,39,49,64,65,108,41,92,176,65,39,49,64,65,108,41,92,176,65,121,233,167,65,108,186,73,16,65,121,233,167,65,108,186,73,16,65,39,49,64,65,99,109,113,61,66,64,150,67,216,65,108,106,188,224,64,150,67,216,65,108,106,188,224,64,82,184,231,65,
108,184,159,122,63,82,184,231,65,108,184,159,122,63,41,92,184,65,108,209,77,66,64,41,92,184,65,108,209,77,66,64,150,67,216,65,99,101,0,0 };



//==============================================================================
MainComponent::MainComponent()
{
    Path pathResize;
    pathResize.loadPathFromData (pathDataResize, sizeof (pathDataResize));

    
    sizeMenu.addItem("Small",[&](){setSize(725,520);});
    sizeMenu.addItem("Medium",[&](){setSize(1000,730);});
    sizeMenu.addItem("Large",[&](){setSize(1080,780);});
    
    addAndMakeVisible(buttonOne);
    //buttonOne.setToggleState(true, NotificationType::dontSendNotification);
    buttonOne.setShape(pathResize, true, true, false);
    buttonOne.onClick = [&]
    {
        sizeMenu.getNumItems();
        sizeMenu.showMenuAsync (PopupMenu::Options{}.withTargetComponent(buttonOne)
                                  .withPreferredPopupDirection(juce::PopupMenu::Options::PopupDirection::upwards));
        
    };
 
    addAndMakeVisible(buttonTwo);
   // buttonTwo.setToggleState(true, NotificationType::dontSendNotification);
    buttonTwo.onClick = [&]
    {
        URL("https://juce.com").launchInDefaultBrowser();
        
    };
    
    addAndMakeVisible(buttonThree);
  //  buttonThree.setToggleState(true, NotificationType::dontSendNotification);
/*    buttonThree.onClick = [&]
    {
        if (window)
            window->broughtToFront();
        else
        {
            window = new DocumentWindow ("Settings",
                                            juce::Desktop::getInstance().getDefaultLookAndFeel()
                                                                        .findColour (juce::ResizableWindow::backgroundColourId),
                                            DocumentWindow::allButtons,
                                            true);
            window->addToDesktop();
            window->centreWithSize(600, 400);
            window->setVisible (true);
        }
        
    };
*/
    setSize (720, 520);
    

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
    
    buttonOne.setBounds(leftMargin,getHeight()-bottomMargin,80,80);
    buttonTwo.setBounds(buttonOne.getX()+space+buttonOne.getWidth(),buttonOne.getY() ,80,80);
    buttonThree.setBounds(buttonTwo.getX()+space+buttonOne.getWidth(),buttonOne.getY() ,80, 80);

}



