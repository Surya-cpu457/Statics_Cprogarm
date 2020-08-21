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
 * @file stats.h 
 * @brief header file of stats program
 *
 * This is a header file for stats.c which contains function declarations of 
 * the functions created and used in stats.c along with description of each of
 * the functions
 *
 * @author P.S.Suryanarayana
 * @date 20 August 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief A function that prints the statistics of a given array
 *
 * The function prints the statistics of an array including minimum, maximum,
 * mean, and median.
 *
 * @param *data The pointer of the array whose statistics to be printed
 * @param size The size of the array pointed by *data 
 *
 * @return Returns 0 indicating successful execution of  the function
 */
int print_statistics( unsigned char *data , int size );


/**
 * @brief A function that prints the given array
 *
 * The function prints the array that is pointed by the param *data on the screen
 * 
 *
 * @param *data The pointer of the array whose statistics to be printed
 * @param size The size of the array pointed by *data
 *
 * @return Returns 0 indicating successful execution of  the function
 */
int print_array( unsigned char *data , int size );


/**
 * @brief A function that finds the median of the given array
 *
 * The function return the value of the median of the given array that is pointed
 * by the param *data 
 * 
 *
 * @param *data The pointer of the array whose statistics to be printed
 * @param size The size of the array pointed by *data
 *
 * @return Returns median value of the given array
 */
int find_median( unsigned char *data , int size );


/**
 * @brief A function that find the mean of the given array
 *
 * The function return the value of the mean of the given array that is pointed
 * by the param *data 
 *
 *
 * @param *data The pointer of the array whose statistics to be printed
 * @param size The size of the array pointed by *data
 *
 * @return Returns mean value of the given array
 */
int find_mean( unsigned char *data , int size );


/**
 * @brief A function that finds the maximum of a given array
 *
 * The function return the value of the maximum number present in the given
 * array that is pointed by the *data 
 *
 * @param *data The pointer of the array whose statistics to be printed
 * @param size The size of the array pointed by *data
 *
 * @return Returns the maximum number in the given array 
 */
int find_maximum( unsigned char *data , int size );


/**
 * @brief A function that finds the minimum of a given array
 *
 * The function return the value of the minimum number present in the given
 * array that is pointed by the *data 
 *
 * @param *data The pointer of the array whose statistics to be printed
 * @param size The size of the array pointed by *data
 *
 * @return Returns the minimum number in the given array 
 */
int find_minimum( unsigned char *data , int size );


/**
 * @brief A function that sorts the array largest to smallest 
 *
 * The function sorts the given array which is pointed by the *data 
 *  in largest to smallest value (Descending order). 
 *  
 *
 * @param *data The pointer of the array whose statistics to be printed
 * @param size The size of the array pointed by *arr
 *
 * @return Returns 0 indicating successful execution of the function
 */
int sort_array( unsigned char *data , int size );


#endif /* __STATS_H__ */
