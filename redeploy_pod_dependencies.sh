echo Deleting workspace
rm -rf ../rplayg.xcworkspace/
echo Deleting Cocoapods related stuff
rm -rf ./Pods
rm -rf ./binaries
rm -rf ./Podfile.lock
echo Installing new Pod
pod _0.35.0_ install
