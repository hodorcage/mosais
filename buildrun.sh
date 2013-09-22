echo $(tput bold)$(tput setaf 5)"--------------------------------------------"
echo "--------------------------------------------"
echo $(tput bold)$(tput setaf 1)"----------------------"
echo "-- GENERATING CMAKE --"
echo "----------------------"$(tput sgr0)
cmake -G"Unix Makefiles" pro/makefile/
cd pro/makefile
make all
cd ../../bin
echo $(tput bold)$(tput setaf 1)"----------------------"
echo "-- RUNNING PROJECT  --"
echo "----------------------"$(tput sgr0)
./mosais
cd ../
echo $(tput bold)$(tput setaf 1)"----------------------"
echo $(tput bold)$(tput setaf 5)"--------------------------------------------"
echo "--------------------------------------------"$(tput sgr0)
