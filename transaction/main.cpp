#include "main.h"
#include "transaction.h"

	int main(){
		int i;
		struct Transaction tr;
		
		for( i = 0 ; i < NO_TRANSACTIONS ; i++ ){
			enter(&tr);
			display(&tr);
		}
	
	}
