#!bin/bash
echo "build single_cycle"
cd ..
cd single_cycle/simulator
make clean
make
cd ..
cp testcase/iimage.bin simulator
cp testcase/dimage.bin simulator
cd simulator
./single_cycle
cd ~
cd /home/archi/s103048124/Archi2017_Project1/
cp single_cycle/testcase/iimage.bin archiTA/simulator
cp single_cycle/testcase/dimage.bin archiTA/simulator
cd archiTA/simulator/
echo "build golden"
./single_cycle
echo "compare"
echo "diff snapshot.rpt"
diff snapshot.rpt /home/archi/s103048124/Archi2017_Project1/single_cycle/simulator/snapshot.rpt
echo "diff error_dump.rpt"
diff error_dump.rpt /home/archi/s103048124/Archi2017_Project1/single_cycle/simulator/error_dump.rpt