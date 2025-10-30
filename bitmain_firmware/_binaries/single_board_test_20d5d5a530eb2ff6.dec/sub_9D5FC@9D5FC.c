int __fastcall sub_9D5FC(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r5
  int v9; // r4
  int v10; // t1
  int v12; // r0
  int v13; // r2
  int v14; // t1

  if ( !a3 || !a4 )
    return 0;
  if ( a5 )
  {
    v8 = a3 - 2;
    v9 = 0;
    while ( 1 )
    {
      v10 = *(unsigned __int16 *)(v8 + 2);
      v8 += 2;
      ++v9;
      if ( v10 == a2 )
      {
        if ( sub_A2808(a1, a2, &loc_20006) )
          break;
      }
      if ( a4 == v9 )
        return 0;
    }
  }
  else
  {
    v12 = 0;
    v13 = a3 - 2;
    while ( 1 )
    {
      v14 = *(unsigned __int16 *)(v13 + 2);
      v13 += 2;
      ++v12;
      if ( v14 == a2 )
        break;
      if ( a4 == v12 )
        return 0;
    }
  }
  return 1;
}
