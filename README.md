# Nervetelligence
PennApps Hackathon Project: https://devpost.com/software/nervetelligence

## Inspiration
In third-world countries and in remote areas, there are few doctors available to diagnose disease. Among these diseases are strokes, which require immediate medical attention to avoid serious injury. Unfortunately, many do not receive treatment in time, simply because they cannot identify whether they are indeed having a stroke or not.

Telemedicine offers a solution to this problem. However, it is only a partial solution. Doctors can only gain information through visual and audio cues—much is left out in regards to sensory and musculoskeletal performance. Nervetelligence bridges this knowledge gap by providing physicians with key information that could traditionally only be gained by touching the patient.

## What it does
Nervetelligence is a machine a patient insert's their arm into, along with an accompanying web application. It gathers three different data types: the existence of proprioception; light touch sensation in the palm and in the forearm; and musculoskeletal strength in the arm.

In order to detect the existence of proprioception, patients will extend their arm into Nerveintelligence until their finger fits snugly in single-finger compartment. Then, a rotating wheel with spokes will either push the distal and intermediate phalanges up or down. The patient will be asked to answer about the directionality of the given push (stroke victims will have difficulty recognizing their joint's position in space).

Light touch sensation will be solicited through two hanging servo motors, one fixed with a pencil and the other with a leaf. These two objects will be dragged across skin as they oscillate back and forth. Patients will respond to whether the object was felt or not. Missing or partial sensation can indicate a stroke.

Finally, musculoskeletal strength will be measured with a Myo Armband. Nerveintelligence supports the testing of two distinct hand movements which reveal overall arm strength.

## How I built it
Nervetelligence was prototyped in a cardboard box. There are two breadboards, three servo 180-degree motors, two Arduino Uno's, and one force sensor attached. The force sensor detects when a finger is inserted into the proprioception cavity. The Arduino Uno's control the servo motors responsible for light touch sensation.

## Challenges I ran into
We faced challenges when trying to control the servo motors in real-time. This proved difficult since they were controlled by Arduino's, which are microcontrollers. Furthermore, we faced hiccups when implementing video messaging functionality on the web application.

## Accomplishments that I'm proud of
We are proud of all of the hardware we had to put together and its software. It was most of our first times working with hardware.

## What I learned
We learned about breadboards, resistors, jump wires, soldering, Arduinos, servos, and force sensors, web development, the Myo armband, and the diagnosis of stroke.

## What's next for Nervetelligence
We want to expand the capabilities of Nervetelligence to gather information about other diseases, such as diabetes and rheumatoid arthritis.
