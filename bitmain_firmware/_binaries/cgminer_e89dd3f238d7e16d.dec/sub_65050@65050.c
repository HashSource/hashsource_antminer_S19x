int __fastcall sub_65050(int result)
{
  unsigned int *v1; // r3
  unsigned int v2; // r2

  if ( result && *(_DWORD *)(result + 4) != -1 )
  {
    v1 = (unsigned int *)(result + 4);
    do
      v2 = __ldrex(v1);
    while ( __strex(v2 + 1, v1) );
    __dmb(0xBu);
  }
  return result;
}
