unsigned int sub_75E40()
{
  double v0; // d0
  bool v1; // cc
  double v3; // d6
  double *v4; // r2
  int v5; // r3
  double v6; // d5
  int v7; // r1
  int v8; // r4
  float v9; // s15
  float v10; // s14
  int v11; // [sp+8h] [bp-82Ch] BYREF
  __int16 v12; // [sp+Ch] [bp-828h]
  _DWORD s[8]; // [sp+10h] [bp-824h] BYREF
  char v14[2052]; // [sp+30h] [bp-804h] BYREF

  v1 = (unsigned int)dword_65E468 > 0x62;
  if ( dword_65E468 != 98 )
    v1 = (unsigned int)(dword_65E468 - 100) > 2;
  if ( !v1 )
  {
    v11 = 50637397;
    v12 = 772;
    memset(s, 0, sizeof(s));
    if ( sub_73C90(dword_65E460, (unsigned __int8 *)&v11, 6u, (unsigned __int8 *)s, 0xAu) )
    {
      strcpy(v14, "Get power set_volt value failed\n");
      nullsub_8();
      return 0;
    }
    *(_DWORD *)v14 = s[1];
    if ( !byte_65E46C || !byte_65E5D0 )
      return (unsigned int)((float)(*(float *)&s[1] * 100.0) + 0.00001);
    if ( dword_65E468 != 98 && ((unsigned int)dword_65E468 < 0x62 || (unsigned int)(dword_65E468 - 100) > 2) )
      return 0;
    v3 = (double)(unsigned int)((float)(*(float *)&s[1] * 100.0) + 0.00001) / 100.0;
    if ( v3 > 22.1 || v3 < 16.5 )
      return 0;
    if ( dword_65E484 - 1 <= 0 )
    {
LABEL_28:
      v9 = v3;
      return (unsigned int)(float)(v9 * 100.0);
    }
    v4 = &dbl_65E488;
    v5 = 1;
    while ( 1 )
    {
      v6 = *v4++;
      v7 = v5;
      if ( v3 > v6 - 0.001 )
      {
        if ( v3 < *v4 + 0.001 )
        {
          v10 = *((double *)&stru_65E448 + v5 + 27)
              + (*((double *)&stru_65E448 + v5 + 28) - *((double *)&stru_65E448 + v5 + 27)) / (*v4 - v6) * (v3 - v6);
          return (unsigned int)(float)(v10 * 100.0);
        }
      }
      else
      {
        v7 = v5;
      }
      ++v5;
      if ( v7 >= dword_65E484 - 1 )
        goto LABEL_28;
    }
  }
  if ( dword_65E464 || (v8 = sub_74ABC(), v8 >= 0) )
  {
    v11 = 50637397;
    s[0] = 0;
    v12 = 7;
    s[1] = 0;
    if ( sub_73B38(dword_65E460, (unsigned __int8 *)&v11, 6u, (unsigned __int8 *)s, 8u) )
    {
      strcpy(v14, "get AD conversion N failed\n");
      nullsub_8();
      strcpy(v14, "can nont get voltage\n");
      nullsub_8();
      return -2147482880;
    }
    else
    {
      sub_75DA0(LOWORD(s[1]));
      return (unsigned int)(v0 * 100.0);
    }
  }
  else
  {
    snprintf(v14, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_voltage");
    nullsub_8();
    return v8;
  }
}
