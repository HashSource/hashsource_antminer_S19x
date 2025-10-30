int __fastcall sub_110DC0(_DWORD *a1, time_t *a2)
{
  int v2; // r3
  int v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r6
  int v10; // r4
  int v11; // [sp+0h] [bp-8h] BYREF
  int v12; // [sp+4h] [bp-4h] BYREF

  v2 = a1[1];
  if ( v2 == 23 )
  {
    if ( *a1 != 13 )
      return 0;
  }
  else if ( v2 != 24 || *a1 != 15 )
  {
    return 0;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = *(unsigned __int8 *)(a1[2] + v6++);
    if ( !sub_BDB60(v7) )
      break;
    if ( *a1 - 1 <= v6 )
    {
      if ( *(_BYTE *)(*a1 + a1[2] - 1) != 90 )
        return 0;
      v8 = sub_110DB4(0, 0, a2);
      v9 = v8;
      if ( v8 && sub_12B260(&v11, &v12, a1, v8) )
      {
        if ( v11 >= 0 )
        {
          if ( v12 >= 0 )
            v10 = -1;
          else
            v10 = 1;
        }
        else
        {
          v10 = 1;
        }
      }
      else
      {
        v10 = 0;
      }
      sub_12AA8C(v9);
      return v10;
    }
  }
  return 0;
}
