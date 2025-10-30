int sub_19F64()
{
  int i; // r4
  int v1; // r4
  unsigned int v2; // r6
  int result; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r9
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // [sp+4h] [bp-920h]
  int v11; // [sp+8h] [bp-91Ch] BYREF
  _DWORD v12[5]; // [sp+Ch] [bp-918h] BYREF
  _BYTE v13[256]; // [sp+20h] [bp-904h] BYREF
  char s[2052]; // [sp+120h] [bp-804h] BYREF

  if ( dword_B3CC0 || (dword_B3CC0 = (int)calloc(1u, 0x20u)) != 0 )
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( sub_26C0C(i) )
      {
        sub_5B160(i);
        sub_3E0F0(10);
      }
    }
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(s, "skip loading levels for now\n");
      sub_3B6AC(4, s, 0, *(_DWORD *)"");
    }
    v1 = 0;
    v2 = 0;
    while ( 1 )
    {
      if ( !sub_26C0C(v1) )
        goto LABEL_10;
      v4 = 3;
      v10 = dword_B3CC0;
      memset(v12, 0, sizeof(v12));
      v11 = 20;
      while ( 1 )
      {
        if ( sub_5B5AC(v1, 0, v13, 256) )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            snprintf(s, 0x800u, "Read configuration fail for chain %d.\n", v1);
            sub_3B6AC(3, s, 0, v8);
          }
          goto LABEL_22;
        }
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(s, 0x800u, "load chain %d eeprom data\n", v1);
          sub_3B6AC(3, s, 0, v7);
        }
        v5 = sub_1DB78(v13, 256);
        v6 = v5;
        if ( v5 )
          break;
        if ( !--v4 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            snprintf(s, 0x800u, "Data load fail for chain %d.\n", v1);
            sub_3B6AC(3, s, 0, v9);
          }
LABEL_22:
          v2 = ~(~HIWORD(v2) << 16) | (1 << (v1 + 16));
          goto LABEL_10;
        }
      }
      (*(void (__fastcall **)(int, _DWORD *, int *))(v5 + 172))(v5, v12, &v11);
      *(_BYTE *)(v10 + v1 + 16) = 1;
      *(_DWORD *)(v10 + 4 * v1) = v6;
LABEL_10:
      if ( ++v1 == 4 )
      {
        result = v2;
        if ( !v2 )
          *(_BYTE *)(dword_B3CC0 + 28) = 1;
        return result;
      }
    }
  }
  if ( (unsigned int)dword_B308C <= 3 )
    return -2;
  strcpy(s, "No memory for configuraion.\n");
  sub_3B6AC(3, s, 0, *(_DWORD *)"");
  if ( dword_B3CC0 )
  {
    free((void *)dword_B3CC0);
    dword_B3CC0 = 0;
  }
  if ( (unsigned int)dword_B308C <= 3 )
    return -2;
  strcpy(s, "_alloc_memory error\n");
  sub_3B6AC(3, s, 0, *(_DWORD *)"y error\n");
  return -2;
}
