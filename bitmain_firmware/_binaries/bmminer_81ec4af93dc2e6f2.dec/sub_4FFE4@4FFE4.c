int __fastcall sub_4FFE4(int result)
{
  unsigned int *v1; // r3
  unsigned int v2; // r2
  unsigned int v3; // r2

  v1 = (unsigned int *)(result + 4);
  __dmb(0xBu);
  do
  {
    v2 = __ldrex(v1);
    v3 = v2 - 1;
  }
  while ( __strex(v3, v1) );
  if ( !v3 )
    return sub_74C7C(result);
  return result;
}
