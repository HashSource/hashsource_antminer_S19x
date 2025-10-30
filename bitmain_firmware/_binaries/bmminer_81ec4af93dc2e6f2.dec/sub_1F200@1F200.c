int __fastcall sub_1F200(int a1, unsigned __int8 *src, size_t n, unsigned int a4)
{
  unsigned __int8 *v4; // r7
  int v7; // r6
  int v8; // r9
  int v9; // r10
  int v10; // r4
  _DWORD *v11; // r5
  int v12; // t1
  int v13; // r2
  int v14; // r3
  int v15; // r12
  const char *v16; // r4
  int v17; // r0
  int v18; // r12
  int v19; // r0
  int v20; // r2
  int v21; // r3
  int v23; // r0
  _BYTE v24[2]; // [sp+0h] [bp-900h] BYREF
  _BYTE dest[96]; // [sp+2h] [bp-8FEh] BYREF
  int v26; // [sp+62h] [bp-89Eh] BYREF
  int v27; // [sp+66h] [bp-89Ah]
  int v28; // [sp+6Ah] [bp-896h]
  int v29; // [sp+6Eh] [bp-892h]
  char s[2048]; // [sp+100h] [bp-800h] BYREF

  v4 = *(unsigned __int8 **)(a1 + 300);
  if ( *src != *v4 )
    return -1;
  if ( (a4 & 6) != 0 )
  {
    v7 = (a4 >> 1) & 1;
    v8 = a4 & 2;
    if ( n > 0x61 )
      v7 = 0;
    if ( !v7 )
    {
      v9 = (a4 >> 2) & 1;
      v10 = a4 & 4;
      if ( n > 0x71 )
        v9 = 0;
      if ( !v9 )
      {
        if ( n > 0x100 && (unsigned int)off_AFC24 > 2 )
        {
          memset(s, 0, sizeof(s));
          strcpy(s, "len too large, should less than 256\n");
          sub_3BE28(2, s, 0);
        }
        v4[1] = src[1];
        memcpy(v24, src, n);
        if ( v8 )
        {
          memcpy(dest, src + 2, sizeof(dest));
          if ( !sub_2159C(dest, 96, v4[1] >> 4, v4[1] & 0xF) )
          {
            v16 = "DEC 1ST REGION";
            v8 = -1;
            goto LABEL_29;
          }
          v23 = sub_3EAEC(v24, 776);
          if ( dest[95] != v23 )
          {
            v16 = "CRC 1ST REGION";
            v8 = -1;
            goto LABEL_29;
          }
          memcpy(v4 + 2, dest, 0x60u);
          if ( v4[95] != 1 )
          {
            v16 = "PT1 test NOT pass, redo it";
            v8 = -1;
            goto LABEL_29;
          }
          v8 = 2;
        }
        if ( !v10 )
          return v8;
        v12 = *(_DWORD *)(src + 98);
        v11 = src + 98;
        v13 = v11[2];
        v14 = v11[3];
        v15 = v11[1];
        v26 = v12;
        v29 = v14;
        v27 = v15;
        v28 = v13;
        if ( !sub_2159C(&v26, 16, v4[1] >> 4, v4[1] & 0xF) )
        {
          v16 = "DEC 2ND REGION";
          goto LABEL_29;
        }
        v17 = sub_3EAEC(&v26, 120);
        if ( HIBYTE(v29) != v17 )
        {
          v16 = "CRC 2ND REGION";
          goto LABEL_29;
        }
        v18 = v26;
        v19 = v27;
        v20 = v29;
        *(_DWORD *)(v4 + 106) = v28;
        v21 = v4[108];
        *(_DWORD *)(v4 + 98) = v18;
        *(_DWORD *)(v4 + 102) = v19;
        *(_DWORD *)(v4 + 110) = v20;
        if ( v21 == 1 )
          return v8 | 4;
        v16 = "PT2 test NOT pass, redo it";
LABEL_29:
        if ( (unsigned int)off_AFC24 > 2 )
        {
          memset(s, 0, sizeof(s));
          snprintf(s, 0x800u, "EEPROM error: %s\n", v16);
          sub_3BE28(2, s, 0);
        }
        return v8;
      }
    }
    if ( (unsigned int)off_AFC24 > 2 )
    {
      v8 = -1;
      memset(s, 0, sizeof(s));
      strcpy(s, "len invalid\n");
      sub_3BE28(2, s, 0);
      return v8;
    }
    return -1;
  }
  if ( (unsigned int)off_AFC24 <= 2 )
    return -1;
  memset(s, 0, sizeof(s));
  strcpy(s, "flag invalid\n");
  sub_3BE28(2, s, 0);
  return -1;
}
