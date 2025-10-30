bool __fastcall sub_C1918(int a1)
{
  unsigned int *v1; // r0
  signed int v2; // r4

  if ( a1 )
  {
    v1 = (unsigned int *)(a1 + 8);
    do
      v2 = __ldrex(v1);
    while ( __strex(v2 + 1, v1) );
    return v2 > 0;
  }
  else
  {
    sub_D0048(37, 114, 67, "crypto/dso/dso_lib.c", 107);
    return 0;
  }
}
