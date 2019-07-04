
# Heart Monitor Library by CureIO

![C++](https://img.shields.io/badge/Built%20For%3A-C%2B%2B-blue.svg?style=for-the-badge&logo=cplusplus)
![MIT License](https://img.shields.io/badge/License-MIT-brightgreen.svg?style=for-the-badge)



#### This library allows you to detect an irregular heart rate, find times where the user's heart is at risk and perform calculations around user specific heart rate data (MHR & THR).



## Installation

Once inside your projects directory perform either of the following ...

Use [ cURL](https://curl.haxx.se/) to install the library.

```bash
curl -O https://raw.githubusercontent.com/cureio/heart/master/src/c++/CureIOHR.h
```

Use [ Wget](https://www.gnu.org/software/wget/) to install the library.

```bash
wget https://raw.githubusercontent.com/cureio/heart/master/src/c++/CureIOHR.h
```

## Usage

```c+
#include <CureIOHR.h> 

// Link Library

int receive();

// Only needed if functions called before full declaration of receive()

irregularHeartRateCheck(receive(), 56); 

// Function: Attempts to find an irregular heart rate if the user is 56. 
// Return Style: Boolean (0 = No, 1 = Yes)
// Requires: A receive() Function Like Below
// Variables: The number 56 can be changed to the user's real age

riskCheck(receive(), 56);

// Function: Finds if the user's heart is at risk
// Return Style: Boolean (0 = No, 1 = Yes)
// Requires: A receive() Function Like Below
// Variables: The number 56 can be changed to the user's real age

maxHeartRate(56);

// Function: Finds the maximum heart rate
// Return Style: Integer
// Requires: None
// Variables: The number 56 can be changed to the user's real age

minTargetHeartRate(56);

// Function: Finds the minimum target heart rate
// Return Style: Integer
// Requires: None
// Variables: The number 56 can be changed to the user's real age

maxTargetHeartRate(56);

// Function: Finds the maximum target heart rate
// Return Style: Integer
// Requires: None
// Variables: The number 56 can be changed to the user's real age

int receive(){

   heartRate = // Insert Specific Way to Read BPM (ONLY CHANGE THIS LINE)

   return heartRate

}

```
#### More Examples Coming Soon
## Contributing
Pull requests are welcome and greatly appreciated. If you need help open an issue and we will provide support ASAP. If you need any ideas on what to contribute check the issues tab! Thanks in advance for your support!

![](https://s3.amazonaws.com/one_org_international/international/media/international/2015/11/06135444/tank-you-gif.gif)

## Contributors
 - [Sam Poder](https://github.com/sampoder)
 - [Arsh Shrivastava](https://github.com/Arshshrivastava)
 - Neil Ghosh

Want to be on the list? When ever you make your first pull request add your name in. 

## About CureIO
More Info Coming Soon

## Licensed Under The MIT License
[View License](https://github.com/cureio/heart/blob/master/LICENSE)
