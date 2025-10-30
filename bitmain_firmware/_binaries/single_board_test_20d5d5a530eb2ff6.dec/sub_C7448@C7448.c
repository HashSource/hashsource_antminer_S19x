int __fastcall sub_C7448(int result)
{
  unsigned int *v1; // r3
  unsigned int v2; // r2

  if ( result )
  {
    v1 = (unsigned int *)(result + 24);
    do
      v2 = __ldrex(v1);
    while ( __strex(v2 + 1, v1) );
  }
  return result;
}
