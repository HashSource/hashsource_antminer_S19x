int __fastcall sub_259028(int result, int a2, int a3, int a4)
{
  int v4; // r4
  int v7; // r5
  int v8; // t1

  if ( a2 > 0 )
  {
    v4 = result - 1;
    v7 = result - 1 + a2;
    do
    {
      v8 = *(unsigned __int8 *)++v4;
      result = sub_258104(v8, (int (__fastcall *)(const char *, int))sub_256850, sub_2594B0, a4, a3);
    }
    while ( v4 != v7 );
  }
  return result;
}
