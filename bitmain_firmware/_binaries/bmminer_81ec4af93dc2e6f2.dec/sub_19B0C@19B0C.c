int sub_19B0C()
{
  int i; // r4
  int v1; // r4
  unsigned int v2; // r5
  int v4; // r11
  int v5; // r6
  int v6; // r0
  int v7; // r10
  int v8; // r3
  int v9; // r3
  int v10; // r3
  void *v11; // r3
  int v12; // [sp+8h] [bp-91Ch] BYREF
  _BYTE v13[20]; // [sp+Ch] [bp-918h] BYREF
  _BYTE v14[256]; // [sp+20h] [bp-904h] BYREF
  char s[2052]; // [sp+120h] [bp-804h] BYREF

  if ( dword_B0F4C || (dword_B0F4C = (int)calloc(1u, 0x20u)) != 0 )
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( sub_266F0(i) )
      {
        sub_5A1C0(i);
        sub_3D9D4(10);
      }
    }
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(s, "skip loading levels for now\n");
      sub_3AF5C(4, s, 0, *(_DWORD *)"");
    }
    v1 = 0;
    v2 = 0;
    while ( 1 )
    {
      if ( !sub_266F0(v1) )
        goto LABEL_10;
      v4 = dword_B0F4C;
      v5 = 3;
      memset(v13, 0, sizeof(v13));
      v12 = 20;
      while ( 1 )
      {
        if ( sub_5A610(v1, 0, v14, 256) )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            snprintf(s, 0x800u, "Read configuration fail for chain %d.\n", v1);
            sub_3AF5C(3, s, 0, v9);
          }
          goto LABEL_22;
        }
        if ( (unsigned int)off_AFC24 > 3 )
        {
          snprintf(s, 0x800u, "load chain %d eeprom data\n", v1);
          sub_3AF5C(3, s, 0, v8);
        }
        v6 = sub_1DC88(v14, 256);
        v7 = v6;
        if ( v6 )
          break;
        if ( !--v5 )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            snprintf(s, 0x800u, "Data load fail for chain %d.\n", v1);
            sub_3AF5C(3, s, 0, v10);
          }
LABEL_22:
          v2 = ~(~HIWORD(v2) << 16) | (1 << (v1 + 16));
          goto LABEL_10;
        }
      }
      (*(void (__fastcall **)(int, _BYTE *, int *))(v6 + 172))(v6, v13, &v12);
      *(_BYTE *)(v4 + v1 + 16) = 1;
      *(_DWORD *)(v4 + 4 * v1) = v7;
LABEL_10:
      if ( ++v1 == 4 )
      {
        if ( !v2 )
          *(_BYTE *)(dword_B0F4C + 28) = 1;
        return v2;
      }
    }
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "No memory for configuraion.\n");
    sub_3AF5C(3, s, 0, *(_DWORD *)"");
    if ( dword_B0F4C )
    {
      free((void *)dword_B0F4C);
      v11 = off_AFC24;
      dword_B0F4C = 0;
    }
    else
    {
      v11 = off_AFC24;
    }
    if ( (unsigned int)v11 > 3 )
    {
      v2 = -2;
      strcpy(s, "_alloc_memory error\n");
      sub_3AF5C(3, s, 0, *(_DWORD *)"y error\n");
      return v2;
    }
  }
  return -2;
}
