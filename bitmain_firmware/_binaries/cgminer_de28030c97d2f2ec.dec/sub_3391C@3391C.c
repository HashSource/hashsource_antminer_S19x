_DWORD *sub_3391C()
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
  v7 = (_DWORD *)sub_2F984();
  if ( dword_87E6C == 4 )
  {
    v11 = (_DWORD *)sub_33844((int)v7);
  }
  else if ( dword_87E6C == 3 )
  {
    v11 = 0;
    for ( i = 0; i < dword_92028; ++i )
    {
      v6 = *(_DWORD *)(dword_920CC + 4 * i);
      if ( *(_DWORD *)(v6 + 64) < *(_DWORD *)(v6 + 60) )
      {
        v10 = 1;
        break;
      }
    }
    if ( v10 != 1 )
    {
      for ( i = 0; i < dword_92028; ++i )
        *(_DWORD *)(*(_DWORD *)(dword_920CC + 4 * i) + 64) = 0;
      if ( ++dword_899A0 >= dword_92028 )
        dword_899A0 = 0;
    }
    v9 = 0;
    while ( !v11 )
    {
      v2 = v9++;
      if ( v2 >= dword_92028 )
        break;
      v11 = *(_DWORD **)(dword_920CC + 4 * dword_899A0);
      v0 = v11[16];
      v11[16] = v0 + 1;
      if ( v0 < v11[15] )
      {
        if ( !sub_337A8((int)v11) )
          break;
        if ( byte_9412D )
        {
          v1 = sub_3636C(0);
          --*(_DWORD *)(v1 + 64);
        }
      }
      v11 = 0;
      if ( ++dword_899A0 >= dword_92028 )
        dword_899A0 = 0;
    }
    if ( !v11 )
    {
      for ( i = 0; i < dword_92028; ++i )
      {
        v5 = (_DWORD *)sub_3636C(i);
        if ( !sub_337A8((int)v5) )
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
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v4, 0x800u, "Selecting pool %d for work", *v11);
    sub_1E4EC(7, v4, 0);
  }
  return v11;
}
