# Device Frameworks

This directory contains the iOS device (`iphoneos`, `arm64`) framework set used for real-device builds.

Do not use these artifacts for iOS Simulator builds. Simulator builds use `ios/ekyc/FrameworksSimulator` plus the Flutter plugin simulator mock path because several vendor SDK binaries are device-only.
