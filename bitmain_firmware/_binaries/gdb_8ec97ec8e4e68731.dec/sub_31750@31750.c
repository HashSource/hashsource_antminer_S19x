int __fastcall sub_31750(_DWORD *a1)
{
  _DWORD *v2; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r3
  _BYTE v8[4]; // [sp+4h] [bp-1Ch] BYREF
  int v9; // [sp+8h] [bp-18h]

  if ( a1[3] != 20 )
    return 0;
  v2 = (_DWORD *)a1[7];
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = sub_1CD14C(v2[12], dword_471A2C);
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 + 40);
        if ( v5 )
        {
          v9 = v2[13];
          v6 = sub_324030(v5, v8, 0);
          if ( v6 )
          {
            if ( *(_DWORD *)v6 )
              break;
          }
        }
      }
      v2 = (_DWORD *)*v2;
      if ( !v2 )
        return 0;
    }
    if ( *(_DWORD *)(*(_DWORD *)v6 + 8) == 1 )
    {
      v7 = a1[4];
      if ( v7 )
      {
        if ( v7 == 1 && !dword_4879B4 )
          sub_DC648(a1);
      }
      else if ( dword_4879B4 )
      {
        sub_DC818(a1);
      }
    }
  }
  return 0;
}
