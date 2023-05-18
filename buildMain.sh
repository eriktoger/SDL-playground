#Build SDL
cd ../SDL-main/build
cmake --build . --config Release
cd ../../SDL-test
cp -r ../SDL-main/build/Release/. ../SDL-main/lib
cp -r ../SDL-main/build/Release/. .



