//question 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
//name to poisson
double randomgenerator(double lambda){
	double rand; 
	rand = 1.0 - (double) random()/RAND_MAX;
	return -log(rand)/lambda;
}

//generate random length between 1-RAND_MAX
double randomlength(){
	return random()/RAND_MAX; 
}

//process time 
double processtime(){
	return randomLength()/1000000;  
}

double mean(double x[], int arraysize){
	double sum= 0; 
	for (int i = 0; i<arraysize; i++){
		sum = sum + x[i]; 
	}
	return sum/arraysize; 
}

double variance(double x[], int arraysize, double mean){
	double diff= 0; 
	for (int i = 0; i<arraysize; i++){
		diff = diff + (x[i] - mean)*(x[i] - mean); 
	}
	return diff/arraysize; 
}

double sortArray[] (double array[], int arraysize){
	for (int i = 0; i<arraysize-1; i++){
		if (array[i] > array[i+i])
		{
			temp = array[i]; 
			array[i] = array[i + 1]; 
			array[i+1] = temp; 
		}
	}
}
 

double mergeArray[] (double array[], double array2[], double array3[]){
	
}

int main() {

double elapsed = 0; 
double delay = 0; 
int T = 1000; 
int nump= 1000; 
int numo = 5000; 
int i = 0; 
double rho; 

double arrival[nump], process[nump], observer[numo];  

while (observer[i] < T){
	observer[i] = observer[i-1] +  randomgenerator(75*5); 
	i++;
}

while (departure[i] < T){

	if (i == 0)
	{	
		arrival[i] = randomgenerator(75); 
		process[i] = processtime(); 
		departure[i] = arrival[i] + process[i]; 
	}
	else 
	{
		rho = randomgenerator(75); 
		arrival[i] = arrival[i-1] + rho; 
		process[i] = processtime(); 

//if the process hasn't finished by the next arrival
		if (process[i-1] > rho){
			departure[i] = departure[i-1] + rho; 
		}
//if there is nothing queued
		else if (process[i-1] < rho){
			departure[i] = arrival[i] + rho; 
		}
//misc case
		else {
			printf("new case"); 
		}
	}
	
	i++; 
}

//sorting algorithm for all the arrays

// printf("%f, %f, ", mean , var);
 
}
