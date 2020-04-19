[![Donate](https://img.shields.io/badge/Donate-PayPal-green.svg)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=F2TW6JW3DRDE2&source=url)

## :file_folder: The Project
This project was developed during the 4th semester of graduation in Mechatronic Engineering. Its purpose was to get started with the use of Visual Studio to create a program with a friendly user interface. The context of the project is to simulate the inspection of shampoo bottles on a conveyor belt to verify if the bottle cap has been placed properly.

[![Demonstration video](Demonstration%20Video/Print.jpg)](Demonstration%20Video/20171201_105418.mp4)

## :gear: How does it work?

The software takes a photo os the background and when a bottle is positioned it takes another photo. Using the **OpenCV** library it identifies the bottle contours and compares it with the expected contour and classify between approved or not approved. For every bottle that passes thought the system it's index of similarity and it status are stored in a local **SQL database**. The user interface uses this database to plot the percentage of approved/non-approved bottles.

## :exclamation: Observation
The strategy implemented was very simplified once the focus os the project was to learn working with Visual Studio to create user interfaces. For a real-world industrial scenario the strategy would have to be remodeled. Based on the same argument, the new bottle detection is manually triggered. For a real-world industrial scenario where a conveyor belt runs fast, the trigger would have to be based on a sensor, or more interestingly, based on the change of tone of a ROI (Region Of Interest).
