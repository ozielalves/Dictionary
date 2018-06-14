/**
 * @file dsal.cpp
 * @version 1.0
 * @since Jun, 12.
 * @date May, 12.
 * @author Oziel Alves (ozielalves@ufrn.edu.br)
 * @author Max Willian (maxwilliam780@gmail.com)
 * @title The Dictionary ADT using an Sorted array
 */


#include "dictionary.h"
	/*!
	 * 	@brief Auxiliar linear search for an key.
	 * 	@param _x The key.
	 */
template <typename Key, typename Data, typename KeyComparator>
int DSAL<Key, Data, KeyComparator>::_search ( const Key & _x ) const {

	NodeAL * begin = mpt_data;
	NodeAL * end = mpt_data + mi_Length;
	while(begin < end){

		int mid = begin + (end-begin)/2;

		if( comp (mid->.id, _x) == 0 and comp(_x, mid->.id) == 0) return mid - begin;

		else if (comp (mid->.id, _x)){

			begin = mid + 1;
		}

		else {
			end = mid - 1;
		}
	}

	return -1;
}

