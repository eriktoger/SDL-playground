#Build SDL
cd ../SDL/build
cmake ..
cmake --build . --config Release
cmake --install
#cd ../../SDL-test
#cp -r ../SDL/build/Release/. ../SDL-main/lib
#cp -r ../SDL-main/build/Release/. .



