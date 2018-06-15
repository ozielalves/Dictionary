/**
 * @file dsal.cpp
 * @version 1.0
 * @since Jun, 12.
 * @date May, 12.
 * @author Oziel Alves (ozielalves@ufrn.edu.br)
 * @author Max Willian (maxwilliam780@gmail.com)
 * @title The Dictionary ADT using an Sorted array
 */


#include "dictionary.hpp"
	/*!
	 * 	@brief Auxiliar linear search for an key.
	 * 	@param _x The key.
	 */
template <typename Key, typename Data, typename KeyComparator>
int DSAL<Key, Data, KeyComparator>::_search ( const Key & _x ) const {

	auto begin = this->mpt_Data;
	auto end = this->mpt_Data + this->mi_Length;
	KeyComparator comp;

	while(begin < end){

		auto mid = begin + (end-begin)/2;

		if( comp (mid->id, _x) == 0 and comp(_x, mid->id) == 0) return mid - begin;

		else if (comp (mid->id, _x)){

			begin = mid + 1;
		}

		else {
			end = mid - 1;
		}
	}

	return -1;
}

template <typename Key, typename Data, typename KeyComparator>
bool DSAL<Key, Data, KeyComparator>::insert 
	( const Key & _newKey, const Data & _newInfo ) {

	int index = _search(_newKey);
	
	if(index != -1){ return false;}

	/* Nao consigo declarar NodeAL * pivot */
	auto pivot = this->mpt_Data;
	/* há algo errado aqui */ 
	KeyComparator comp;
	int distance;
	for (auto i = this->mpt_Data;  i < this->mpt_Data + this->mi_Length; ++i) {
		if(comp(i->id, _newKey)){
			pivot = i;
			distance = i - this->mpt_Data;
			std::copy(this->mpt_Data+distance,this->mpt_Data+ this->mi_Length,
					this->mpt_Data+distance+1);
			*(pivot+distance) = NodeAL(_newKey,_newInfo);
			return true;
		}
	}
	this->mpt_Data[this->mi_Length++] = NodeAL(_newKey,_newInfo);
}
