_DWORD *sub_32818()
{
  int v0; // r3
  int v1; // r0
  int v2; // r2
  char v4[16]; // [sp+4h] [bp-820h] BYREF
  _DWORD *v5; // [sp+804h] [bp-20h]
  int v6; // [sp+808h] [bp-1Ch]
  _DWORD *v7; // [sp+80Ch] [bp-18h]
  int i; // [sp+810h] [bp-14h]
  int v9; // [sp+814h] [bp-10h]
  char v10; // [sp+81Bh] [bp-9h]
  _DWORD *v11; // [sp+81Ch] [bp-8h]

  v10 = 0;
  v7 = (_DWORD *)sub_2E98C();
  if ( dword_86CD4 == 4 )
  {
    v11 = (_DWORD *)sub_3273C((int)v7);
  }
  else if ( dword_86CD4 == 3 )
  {
    v11 = 0;
    for ( i = 0; i < dword_90E90; ++i )
    {
      v6 = *(_DWORD *)(dword_90F34 + 4 * i);
      if ( *(_DWORD *)(v6 + 64) < *(_DWORD *)(v6 + 60) )
      {
        v10 = 1;
        break;
      }
    }
    if ( v10 != 1 )
    {
      for ( i = 0; i < dword_90E90; ++i )
        *(_DWORD *)(*(_DWORD *)(dword_90F34 + 4 * i) + 64) = 0;
      if ( ++dword_88808 >= dword_90E90 )
        dword_88808 = 0;
    }
    v9 = 0;
    while ( !v11 )
    {
      v2 = v9++;
      if ( v2 >= dword_90E90 )
        break;
      v11 = *(_DWORD **)(dword_90F34 + 4 * dword_88808);
      v0 = v11[16];
      v11[16] = v0 + 1;
      if ( v0 < v11[15] )
      {
        if ( !sub_326A0((int)v11) )
          break;
        if ( byte_92F95 )
        {
          v1 = sub_35320(0);
          --*(_DWORD *)(v1 + 64);
        }
      }
      v11 = 0;
      if ( ++dword_88808 >= dword_90E90 )
        dword_88808 = 0;
    }
    if ( !v11 )
    {
      for ( i = 0; i < dword_90E90; ++i )
      {
        v5 = (_DWORD *)sub_35320(i);
        if ( !sub_326A0((int)v5) )
        {
          v11 = v5;
          break;
        }
      }
    }
    if ( !v11 )
      v11 = v7;
  }
  else
  {
    v11 = v7;
  }
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v4, 0x800u, "Selecting pool %d for work", *v11);
    sub_1DB6C(7, v4, 0);
  }
  return v11;
}
