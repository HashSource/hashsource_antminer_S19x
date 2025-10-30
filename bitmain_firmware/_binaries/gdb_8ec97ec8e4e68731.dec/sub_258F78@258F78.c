int __fastcall sub_258F78(unsigned __int8 *a1, int a2, int a3)
{
  unsigned __int8 *v3; // r4
  int result; // r0
  int v7; // t1

  v3 = a1;
  result = *a1;
  if ( result )
  {
    do
    {
      sub_258104(result, (int (__fastcall *)(const char *, int))sub_256850, sub_2594B0, a3, a2);
      v7 = *++v3;
      result = v7;
    }
    while ( v7 );
  }
  return result;
}
