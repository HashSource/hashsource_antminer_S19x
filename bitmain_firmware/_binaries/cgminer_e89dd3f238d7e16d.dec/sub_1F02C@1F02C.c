int __fastcall sub_1F02C(int result)
{
  unsigned int *v1; // r3
  unsigned int v2; // r2
  unsigned int v3; // r2

  if ( result && *(_DWORD *)(result + 4) != -1 )
  {
    v1 = (unsigned int *)(result + 4);
    __dmb(0xBu);
    do
    {
      v2 = __ldrex(v1);
      v3 = v2 - 1;
    }
    while ( __strex(v3, v1) );
    if ( !v3 )
      return sub_6745C(result);
  }
  return result;
}
