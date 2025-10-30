int __fastcall sub_859EC(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r2
  int v4; // r12
  int v5; // t1
  int v6; // r3
  int v7; // t1
  int v8; // r3

  if ( a3 > 0 )
  {
    v3 = &a2[a3];
    do
    {
      v5 = *a1++;
      v4 = v5;
      v7 = *a2++;
      v6 = v7;
      if ( v4 == v7 )
      {
        if ( !v4 )
          return 0;
      }
      else
      {
        v8 = *((unsigned __int8 *)&dword_B8164 + v4 + 8) - *((unsigned __int8 *)&dword_B8164 + v6 + 8);
        if ( v8 || !v4 )
          return v8;
      }
    }
    while ( v3 != a2 );
  }
  return 0;
}
