# PiPicoW_CMongoose_HotWaterTimer
Heating Timer with DS18B20 using C and Mongoose Web Server

To clone

    git clone --recurse-submodules https://github.com/electro-dan/PiPicoW_CMongoose_HeatingControl

Change mongoose to specific tag as master may be unstable

    cd ~/GIT/PiPicoW_CMongoose_HeatingControl/lib/mongoose/
    git fetch
    git checkout 7.19

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

For first time file after clone or update mongoose, pack needs to be built:
    
    cd ~/GIT/PiPicoW_CMongoose_HotWaterTimer/lib/mongoose/test/
    make pack

Todo list


Bug list

