void sub_2E310()
{
  int v0; // r1
  char v1[8]; // [sp+4h] [bp-818h] BYREF
  unsigned int v2; // [sp+804h] [bp-18h]
  _DWORD *v3; // [sp+808h] [bp-14h]
  int i; // [sp+80Ch] [bp-10h]
  unsigned int v5; // [sp+810h] [bp-Ch]
  int v6; // [sp+814h] [bp-8h]

  v5 = -1;
  for ( i = 0; i < dword_90E90; ++i )
  {
    v3 = *(_DWORD **)(dword_90F34 + 4 * i);
    v2 = v3[14];
    if ( v2 && v2 < v5 )
      v5 = v2;
  }
  if ( v5 == -1 )
  {
    v6 = 1;
  }
  else
  {
    v6 = v5;
    for ( i = 0; i < dword_90E90; ++i )
    {
      v3 = *(_DWORD **)(dword_90F34 + 4 * i);
      v2 = v3[14];
      if ( v2 )
      {
        while ( 1 )
        {
          sub_67C2C(v2, v6);
          if ( !v0 )
            break;
          --v6;
        }
      }
    }
  }
  for ( i = 0; i < dword_90E90; ++i )
  {
    v3 = *(_DWORD **)(dword_90F34 + 4 * i);
    v3[16] *= dword_85AA0;
    v3[16] = sub_679D0(v3[16], v6);
    v3[15] = sub_679D0(v3[14], v6);
  }
  dword_85AA0 = v6;
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v1, 0x800u, "Global quota greatest common denominator set to %lu", v6);
    sub_1DB6C(7, v1, 0);
  }
}
