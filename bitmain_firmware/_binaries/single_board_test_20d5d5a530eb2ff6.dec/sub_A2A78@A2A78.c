int __fastcall sub_A2A78(_DWORD *a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r4
  bool v5; // zf
  unsigned __int16 *v9; // r2
  int v10; // r3
  int v11; // t1
  int v12; // r0
  unsigned __int16 *v13; // r2
  int v14; // r3
  int v15; // t1
  unsigned __int16 *v16; // [sp+0h] [bp-18h] BYREF
  int v17; // [sp+4h] [bp-14h] BYREF

  if ( !a2 )
    return 0;
  if ( (*(_DWORD *)(a1[257] + 16) & 0x30000) != 0 )
  {
    v3 = *(_DWORD *)(a1[31] + 528);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 12);
      if ( v4 == 50380843 )
      {
        if ( a2 != 23 )
          return 0;
      }
      else
      {
        v5 = v4 == 50380844;
        if ( v4 == 50380844 )
          v5 = a2 == 24;
        if ( !v5 )
          return 0;
      }
    }
  }
  if ( !a3 )
    goto LABEL_18;
  sub_A278C(a1, &v16, &v17);
  v9 = v16;
  if ( !v17 )
    return 0;
  if ( *v16 != a2 )
  {
    v10 = 0;
    while ( v17 != ++v10 )
    {
      v11 = v9[1];
      ++v9;
      if ( v11 == a2 )
        goto LABEL_18;
    }
    return 0;
  }
LABEL_18:
  if ( !sub_A2808((int)a1, a2, (int)&loc_20006) )
    return 0;
  if ( a1[7] )
  {
    v12 = a1[350];
    if ( v12 )
    {
      v13 = (unsigned __int16 *)a1[351];
      if ( *v13 != a2 )
      {
        v14 = 0;
        while ( v12 != ++v14 )
        {
          v15 = v13[1];
          ++v13;
          if ( v15 == a2 )
            return 1;
        }
        return 0;
      }
    }
  }
  return 1;
}
