# FBXJointRenamer
A command line tool to rename joints for retargeting in FBX files

Operation is super simple:

1. Place your input FBX in the Debug folder
2. Run FBXTest.exe filename.fbx (where filename is your fbx file)
3. Edit the jointmap.cfg file. Syntax is one joint per line, with the old and new joint name seperated by an equals sign - e.g. myOldJointName=myNewJointName.
4. Joints without an old to new mapping will be ignored (not renamed)
5. Output will go to output.fbx
