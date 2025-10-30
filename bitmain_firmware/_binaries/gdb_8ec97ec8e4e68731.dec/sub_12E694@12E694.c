int __fastcall sub_12E694(int a1, int a2, int a3)
{
  int v4; // lr
  int v5; // r2
  int v6; // r1
  int v7; // r3
  bool v8; // zf
  int v10; // r1
  int v11; // [sp+4h] [bp-4h] BYREF

  v11 = a3;
  v4 = *(unsigned __int8 *)(a1 + 2);
  if ( *(_BYTE *)(a1 + 2) )
  {
    while ( 1 )
    {
      v5 = *(unsigned __int16 *)(a1 + 24);
      if ( a2 == v5 )
        break;
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        v8 = v5 == 71;
        if ( v5 != 71 )
          v8 = v5 == 49;
        if ( v8 )
          v6 = a1 + 24 + 16 * v7;
        if ( ++v7 == v4 )
          break;
        v5 = *(unsigned __int16 *)(a1 + 16 * v7 + 24);
        if ( v5 == a2 )
        {
          v10 = 16 * v7 + 24;
          return a1 + v10;
        }
      }
      if ( !v6 )
        return v6;
      a1 = sub_12E620((int *)(a1 + 8), v6, &v11);
      v4 = *(unsigned __int8 *)(a1 + 2);
      if ( !*(_BYTE *)(a1 + 2) )
        return v4;
    }
    v10 = 24;
    return a1 + v10;
  }
  else
  {
    return v4;
  }
}
