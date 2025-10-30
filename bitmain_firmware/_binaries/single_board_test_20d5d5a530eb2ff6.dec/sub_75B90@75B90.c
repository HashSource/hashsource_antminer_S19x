int sub_75B90()
{
  double v0; // d0
  unsigned int v1; // r6
  bool v2; // cc
  unsigned int v3; // r0
  float v5; // s15
  int *v6; // r2
  __int16 v7; // r3
  __int16 v8; // r0
  __int16 v9; // t1
  int v10; // r5
  double *v11; // r2
  int i; // r3
  double v13; // d7
  int v14; // r1
  double v15; // d5
  double v16; // d6
  float v17; // s12
  float v18; // [sp+8h] [bp-814h]
  int v19; // [sp+Ch] [bp-810h] BYREF
  float v20; // [sp+10h] [bp-80Ch] BYREF
  __int16 v21; // [sp+14h] [bp-808h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v1 = dword_65E468 - 100;
  v2 = (unsigned int)dword_65E468 > 0x62;
  if ( dword_65E468 != 98 )
    v2 = v1 > 2;
  if ( v2 )
  {
    if ( dword_65E464 || (v10 = sub_74ABC(), v10 >= 0) )
    {
      v3 = sub_75864();
      if ( v3 > 0xFF )
        return -2147482879;
      else
        return sub_747BC(dword_65E460, (unsigned __int8)v3);
    }
    else
    {
      snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage");
      nullsub_8();
      return v10;
    }
  }
  else
  {
    v5 = v0;
    v18 = v5;
    v19 = -2096584107;
    v20 = 0.0;
    v21 = 0;
    memset(s, 0, 0x20u);
    if ( byte_65E46C && byte_65E5D0 )
    {
      if ( dword_65E468 == 98 || (unsigned int)dword_65E468 >= 0x62 && v1 <= 2 )
      {
        if ( dword_65E484 <= 1 )
          return -1;
        v11 = &dbl_65E528;
        for ( i = 1; ; ++i )
        {
          v13 = *v11++;
          v14 = i;
          if ( v0 > v13 - 0.001 )
          {
            v15 = *v11;
            if ( v0 < *v11 + 0.001 )
              break;
          }
          if ( v0 < v13 + 0.001 )
          {
            v15 = *((double *)&stru_65E448 + i + 28);
            if ( v0 > v15 - 0.001 )
              break;
          }
          if ( dword_65E484 - 1 <= v14 )
            return -1;
        }
        v16 = *((double *)&stru_65E448 + i + 7)
            + (*((double *)&stru_65E448 + i + 8) - *((double *)&stru_65E448 + i + 7)) / (v15 - v13) * (v0 - v13);
        if ( v16 > 22.1 )
          return -1;
        if ( v16 < 16.5 )
          return -1;
        v17 = v16;
        v18 = v17;
        if ( v17 < 0.0 )
          return -1;
      }
      else
      {
        v18 = 0.0;
      }
    }
    v6 = &v19;
    v7 = 0;
    v20 = v18;
    do
    {
      v8 = *((unsigned __int8 *)v6 + 3);
      v9 = *((unsigned __int8 *)v6 + 2);
      v6 = (int *)((char *)v6 + 2);
      v7 += v9 + (v8 << 8);
    }
    while ( (int *)((char *)&v20 + 2) != v6 );
    v21 = v7;
    return sub_73C90(dword_65E460, (unsigned __int8 *)&v19, 0xAu, (unsigned __int8 *)s, 0xAu);
  }
}
