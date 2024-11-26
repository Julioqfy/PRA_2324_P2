#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
template <typename T>

int BusquedaBinaria(T x, vector<T> &v, int ini, int fin){
	if(ini > fin){
		return -1;
	}
	int medio = (ini + fin)/2;
	if (v[medio] == x)
		return medio;
	if (v[medio] > x)
		return BusquedaBinaria(x, v, ini, medio - 1);
	return BusquedaBinaria(x, v, medio +1, fin);
}

template <typename T>

int Partition(vector<T> &v, int ini, int fin){
	T x = v[fin];
	int i = ini;
	for(int j = ini; j < fin ; j++){
		if (v[j] <= x){
			swap(v[i], v[j]);
			i += 1;
		}
	}
	swap(v[i], v[fin]);
	return i;
}

template <typename T>

void QuickSort(vector<T> &v, int ini, int fin){
        if (ini < fin){
                int pivot = Partition(v, ini, fin);
                QuickSort(v,ini,pivot-1);
                QuickSort(v, pivot+1, fin);
	}
}

template <typename T>
int RandomPartition(vector<T>& v, int ini, int fin) {
    int randomIndex = ini + rand() % (fin - ini + 1);
    wap(v[randomIndex], v[fin]); // Coloca el pivote aleatorio al final
    return Partition(v, ini, fin);
}

template <typename T>
void QuickSortRandom(vector<T>& v, int ini, int fin) {
    if (ini < fin) {
        int pivot = RandomPartition(v, ini, fin);
        QuickSortRandom(v, ini, pivot - 1);
        QuickSortRandom(v, pivot + 1, fin);
    }
}


template <typename T>
int MiddlePartition(vector<T>& v, int ini, int fin) {
    int middleIndex = ini + (fin - ini) / 2;
    swap(v[middleIndex], v[fin]); // Coloca el pivote central al final
    return Partition(v, ini, fin);
}

template <typename T>
void QuickSortMiddle(vector<T>& v, int ini, int fin) {
    if (ini < fin) {
        int pivot = MiddlePartition(v, ini, fin);
        QuickSortMiddle(v, ini, pivot - 1);
        QuickSortMiddle(v, pivot + 1, fin);
    }
}
