#pragma once

#include <JuceHeader.h>

struct Car {
    
    struct CarSeat {
        bool seatIsLeather;
    };
    
    float speed {20.f};
    int numberOfWheels;
    bool convertible;
    CarSeat driversSeat;
    CarSeat navigatorSeat;
    
    bool switchedSeats (CarSeat oldSeat, CarSeat newSeat);
    
    void accelerate (float howFarToPushThePedal = 1.f);
};

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

private:
    //==============================================================================
    // Your private member variables go here...
    juce::ToggleButton toggleButton;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
