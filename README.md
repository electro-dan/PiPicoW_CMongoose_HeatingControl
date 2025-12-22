# PiPicoW_CMongoose_HotWaterTimer
Heating Timer with DS18B20 using C and Mongoose Web Server

Set variables to begin:

    export PICO_SDK_PATH=~/GIT/pico-sdk
    export WIFI_SSID=myssid
    export WIFI_PASSWORD=mywifipassword

To build code:

    cd ~/GIT/PiPicoW_CMongoose_HeatingControl/build
    cmake ..
    make
    make install

Rebuild:

    cd .. && rm -r build && mkdir build && cd build

To build the file system:

    cd ~/GIT/PiPicoW_CMongoose_HeatingControl
    lib/mongoose/test/pack web/* > src/fs.c

Todo list


Bug list

