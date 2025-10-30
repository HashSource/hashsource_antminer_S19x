int __fastcall sub_29B3E4(int a1, int a2, int a3, unsigned __int8 *a4, int a5)
{
  int v5; // r12
  unsigned __int8 *v6; // r0
  unsigned __int8 *v7; // r1
  int v8; // r2
  int v9; // t1
  int v10; // t1

  if ( a3 - a2 >= a5 )
  {
    if ( a5 <= 0 )
      return 1;
    if ( *(unsigned __int8 *)(a1 + a2) == *a4 )
    {
      v5 = a1 + a5;
      v6 = (unsigned __int8 *)(a1 + a2 + 1);
      v7 = (unsigned __int8 *)(v5 + a2);
      while ( v6 != v7 )
      {
        v9 = *v6++;
        v8 = v9;
        v10 = *++a4;
        if ( v10 != v8 )
          return 0;
      }
      return 1;
    }
  }
  return 0;
}
