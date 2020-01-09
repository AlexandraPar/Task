## Description
================================================================================================================

<p>The program has a module that searches for a circle that does not intersect with other circles and has the largest radius.<p>
<p>The main function "circles" is defined in circles.h file, implemented in circles.cpp file.</p>
<p>To test the module, Google-test is created, which uses the file path as input.txt containing the data to be processed. One line of the file represents one circle. Each line is a set of comma separated values. The circle id, the circle center, the circle radius.</p>
<p>The program contains a module which returns the index of the desired circle in the case of correctly entered data. If the data is entered incorrectly, the program will end with the error code "-1". In this case, the Google-test "CirclesDefaultFile" will have the status " FAILED".</p>
<p>For automatic testing of versions on the repository, using the CI (Continuous Integration like) systems of TravisCI and AppVeyor. </p>

---------------------------------------------------------------------------------------------------------------

<p>Example of input data contained in a file:</p>
<p>0,96.8596454,35.9630116,18.85815 <br>
1,148.667867,62.4835963,18.8303781 <br>
2,175.511948,148.912015,5.1965392 <br>
3,107.669301,135.258034,10.1612903 <br>
4,50.9537034,16.461684,29.9797052 <br>
5,1900.191351,1200.4576556,150.0314035 <br>
6,143.436995,19.3670461,27.731254 <br>
7,13.2145146,113.55327,29.3195898 <br>
8,117.758721,28.8949248,9.05255287 <br>
9,185.381634,49.0615558,39.0514847 <br>
10,103.817866,110.147404,24.8312326 <br>
11,184.740745,153.843806,21.1236915 <br>
12,132.114628,14.0995514,14.8066652 <br>
13,150.3708,17.6580096,36.0051271 <br>
14,89.1323588,6.85445723,30.5970946 <br>
15,7.33664968,56.8865017,26.6107669 </p>
