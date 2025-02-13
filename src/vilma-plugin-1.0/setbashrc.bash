#!/usr/bin/env bash
if grep -Fq "source $(dirname "$PWD")/install/setup.bash" ~/.bashrc
then
    echo Currently sourcing catkin setup.bash. OK!
else
    echo Not currently sourcing catkin setup.bash Setting..	
    echo "
source $(dirname "$PWD")/install/setup.bash" >> ~/.bashrc
	if grep -Fq "source $(dirname "$PWD")/install/setup.bash" ~/.bashrc
	then 
    	echo Setting successful. Open a new terminal once install is done.
	else
   	 echo Not able to set. Check your ~/.bashrc to see if really not set.
	fi
fi

if grep -Fq "export GAZEBO_MODEL_PATH=$(dirname "$PWD")/install/share/vilma_plugin" ~/.bashrc
then
    echo GAZEBO model path set. OK!
else
    echo GAZEBO model path not set. Setting...	
    echo "
export GAZEBO_MODEL_PATH=$(dirname "$PWD")/install/share/vilma_plugin:$GAZEBO_MODEL_PATH" >> ~/.bashrc
	if grep -Fq "export GAZEBO_MODEL_PATH=$(dirname "$PWD")/install/share/vilma_plugin" ~/.bashrc
	then
    	echo Setting successful. Open a new terminal once install is done.
	else
   	echo Not able to set. Check your ~/.bashrc to see if really not set.
	fi
fi

