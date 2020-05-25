#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "try.hpp"

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;

}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
	//REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
}


TEST_CASE( "Squares are computed", "[square]" ) {
	REQUIRE( square(6) == 36 );

}

TEST_CASE( "Average of an array", "[average]" ) {
	int arr[5]={1,2,3,4,5};
	REQUIRE( average(arr,5) == 3 );

}

TEST_CASE( "getSum", "[sum]" ) {
	
	REQUIRE( getSum(432) == 9 );

}

TEST_CASE( "Sum of Arr", "[sumArr]" ) {
	int arr[5]={1,2,3,4,5};
	REQUIRE( sumOfArr(arr,5) == 15 );

}

TEST_CASE( "Arr sorted or not", "[Arr]" ) {
	int arr[5]={1,2,3,4,5};
	REQUIRE( arraySortedOrNot(arr,5) == 1 );

}

TEST_CASE( "Arr sorted or not 2", "[Arr]" ) {
	int arr[5]={1,2,3,8,5};
	REQUIRE( arraySortedOrNot(arr,5) == 0 );

}

TEST_CASE( "Largest of arr", "[Largest]" ) {
	int arr[7]={1,2,3,4,5,3,2};
	REQUIRE( largest(arr,7) == 5 );

}


TEST_CASE( "Bubble sort", "[bubble]" ) {
	int arr[5]={2,1,5,3,4};
	int sorted[5]={1,2,3,4,5};
	bubbleSort(arr,5);

	for(int i=0;i<5;i++){
		REQUIRE(  arr[i] == sorted[i] );
	}

	

}


TEST_CASE( "Sum of arr", "[sumofarr]" ) {
	int arr[7]={1,2,3,4,5,3,2};
	REQUIRE( sumOfArr(arr,7) == 20 );

}


TEST_CASE( "fibonacci", "[fibonacci]" ) {
	
	REQUIRE( fib(0) == 0 );
	REQUIRE( fib(1) == 1 );
	REQUIRE( fib(2) == 1 );
	REQUIRE( fib(3) == 2);
	REQUIRE( fib(5) == 5);
	REQUIRE( fib(7) == 13);

}


TEST_CASE( "gcd", "[gcd]" ) {
	
	REQUIRE( gcd(1,1) == 1);
	REQUIRE( gcd(3,2) == 1 );
	REQUIRE( gcd(5,3) == 1 );
	REQUIRE( gcd(32,4) == 4);
	REQUIRE( gcd(21,14) == 7);

}


TEST_CASE( "binary search", "[binary search]" ) {

		int arr[7]={1,2,3,4,5,6,7};

	
	REQUIRE( binarySearch(arr,0,6,5) == 4 );
	REQUIRE( binarySearch(arr,0,6,2) == 1 );
	REQUIRE( binarySearch(arr,0,6,7) == 6 );
	REQUIRE( binarySearch(arr,0,6,3) == 2 );
}







SCENARIO( "vectors can be sized and resized", "[vector]" ) {

    GIVEN( "An array with some unsorted items" ) {
        int arr[5]={3,5,1,4,2};

        REQUIRE( arraySortedOrNot(arr,5) == 0 );

        WHEN( "Array gets sorted by bubbleSort" ) {
            bubbleSort(arr,5);

            THEN( "arraySortedOrNot Method returns 1" ) {
                REQUIRE( arraySortedOrNot(arr,5) == 1 );
            }
        }
       
    }
}

