void sub_2F314()
{
  int v0; // r1
  char v1[8]; // [sp+4h] [bp-818h] BYREF
  unsigned int v2; // [sp+804h] [bp-18h]
  _DWORD *v3; // [sp+808h] [bp-14h]
  int i; // [sp+80Ch] [bp-10h]
  unsigned int v5; // [sp+810h] [bp-Ch]
  int v6; // [sp+814h] [bp-8h]

  v5 = -1;
  for ( i = 0; i < dword_92028; ++i )
  {
    v3 = *(_DWORD **)(dword_920CC + 4 * i);
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
    for ( i = 0; i < dword_92028; ++i )
    {
      v3 = *(_DWORD **)(dword_920CC + 4 * i);
      v2 = v3[14];
      if ( v2 )
      {
        while ( 1 )
        {
          sub_688A4(v2, v6);
          if ( !v0 )
            break;
          --v6;
        }
      }
    }
  }
  for ( i = 0; i < dword_92028; ++i )
  {
    v3 = *(_DWORD **)(dword_920CC + 4 * i);
    v3[16] *= dword_86C38;
    v3[16] = sub_68648(v3[16], v6);
    v3[15] = sub_68648(v3[14], v6);
  }
  dword_86C38 = v6;
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v1, 0x800u, "Global quota greatest common denominator set to %lu", v6);
    sub_1E4EC(7, v1, 0);
  }
}
