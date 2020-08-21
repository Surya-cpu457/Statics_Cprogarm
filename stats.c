/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file   stats.c 
 * @brief  Program to analze an array of dataset  
 * The C program to analyze an array of unsigned char data items and report
 * analytics on the maximum, minimum, mean, and median of the data set.
 * 
 *
 * @author P.S.Suryanarayana
 * @date   20 August 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
    printf("------------------------------------------------------------------");
  printf("\n C Program to find the Analytics and Statistics of the given Array");
  printf("\n------------------------------------------------------------------");
  printf("\n The given array :\n ");
  print_array(test,SIZE);
  printf("\n The sorted array:\n ");
  sort_array(test,SIZE);
  print_array(test,SIZE);
  print_statistics(test,SIZE);
  printf("\n\t\tProgram successfully exceuted");
  printf("\n\t\t************************************");
  printf("\n------------------------------------------------------------------\n");

  

}

/* Add other Implementation File Code Here */
int print_statistics( unsigned char *data , int size )
{
 printf("\n\t\t************************************");	
 printf("\n\t\tStatistics of the given array ");
 printf("\n\t\t************************************");
 printf("\n\t\tSize of the array             : %i ",size);
 printf("\n\t\tMinimum no in the array       : %i ",find_minimum(data,size));
 printf("\n\t\tMaximum no in the array       : %i ",find_maximum(data,size));
 printf("\n\t\tMean of the no in the array   : %i ",find_mean(data,size));
 printf("\n\t\tMedian of the no in the array : %i ",find_median(data,size));
 printf("\n\t\t************************************");
 return 0;
}

int print_array( unsigned char *data , int size )
{ printf("\t\t %i",data[0]);
  for( int i = 1 ; i < size ; i++ )
  {
     printf(" %i ",data[i]);
     if ( i % 8 == 0 )
	     printf("\n\t\t");
  }  
  return 0;
}

int find_median( unsigned char *data , int size )
{
  int median,temp ;
  unsigned char arr[size];
  for( int i = 0 ; i < size ; i++ )
	  arr[i] = data[i];
  for( int i = 0 ; i < size-1 ; i++ )
  {
     for( int j = i+1 ; j < size ; j++ )
     {
	     if(arr[i] > arr[j])
               {
	          temp = arr[i];
		  arr[i]=arr[j];
		  arr[j]=temp;
	       }  
     } 
  }
  if( size % 2 == 0 )
	  median =( arr[(size/2)-1] + arr[(size/2)] ) / 2;
  else
	  median = arr[size/2];
  return median;
}

int find_mean( unsigned char *data , int size )
{
  int mean,sum=0;
  for( int i = 0 ; i < size ; i++ )
  {
    sum += data[i];
  }
  mean = sum/size;
  return mean;
}

int find_maximum( unsigned char *data , int size )
{
  int max = data[0];
  for( int i = 1 ; i < size ; i++ )
  {
    if( max < data[i] )
	    max = data[i];
  }
  return max;
}

int find_minimum( unsigned char *data , int size )
{
  int min = data[0];
  for( int i = 1 ; i < size ; i++)
  {
    if( min > data[i] )
            min=data[i];
  }
  return min;
}

int sort_array( unsigned char *data , int size )
{
  int temp;
  for( int i = 0 ; i < size ; i++ )
  {
     for ( int j = i+1 ; j < size ; j++ )
     {
       if( data[i]< data[j] )
       {
         temp = data[i];
	 data[i] = data[j];
	 data[j] = temp;
       }
     }
  }
  return 0;
}



