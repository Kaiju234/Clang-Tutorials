// Pointer 1

int main()
{

  int *nullPointer = NULL;
  return 0;

}









// Pointer 2

int main()
{

   int amount = 10000;
   // Point it to adress of amount. & is Address of Variable
   int *amountPointer = &amount;
   cout << "Address of amount" << amountPointer;
   cout << "Value of amount" << *amountPointer; 
   return 0;

}

