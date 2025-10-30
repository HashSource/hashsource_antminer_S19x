int __fastcall sub_20E74(int a1, unsigned __int8 *src, size_t n, unsigned int a4)
{
  unsigned __int8 *v4; // r8
  int v7; // r7
  int v8; // r10
  int v9; // r4
  const char *v11; // r4
  int v12; // r0
  int v14; // r0
  int v15; // r2
  int v16; // r12
  int v17; // r3
  int v18; // r0
  int v19; // r12
  int v20; // r0
  int v21; // r2
  int v22; // r3
  _BYTE v23[2]; // [sp+0h] [bp-904h] BYREF
  _BYTE v24[96]; // [sp+2h] [bp-902h] BYREF
  int v25; // [sp+62h] [bp-8A2h] BYREF
  int v26; // [sp+66h] [bp-89Eh]
  int v27; // [sp+6Ah] [bp-89Ah]
  int v28; // [sp+6Eh] [bp-896h]
  _BYTE dest[142]; // [sp+72h] [bp-892h] BYREF
  char s[2052]; // [sp+100h] [bp-804h] BYREF

  v4 = *(unsigned __int8 **)(a1 + 300);
  if ( *src != *v4 )
    return -1;
  if ( (a4 & 0xE) != 0 )
  {
    v7 = a4 & 2;
    if ( ((n <= 0x61) & (a4 >> 1)) == 0 )
    {
      v8 = a4 & 4;
      if ( ((n <= 0x71) & (a4 >> 2)) == 0 )
      {
        v9 = a4 & 8;
        if ( n > 0xF9 || !((a4 >> 3) & 1) )
        {
          if ( n > 0x100 && (unsigned int)off_AFC24 > 2 )
          {
            memset(s, 0, 0x800u);
            strcpy(s, "len too large, should less than 256\n");
            sub_3BE28(2, s, 0);
          }
          v4[1] = src[1];
          memcpy(v23, src, n);
          if ( v7 )
          {
            memcpy(v24, src + 2, sizeof(v24));
            if ( !sub_2159C(v24, 96, v4[1] >> 4, v4[1] & 0xF) )
            {
              v11 = "DEC 1ST REGION";
              v7 = -1;
              goto LABEL_22;
            }
            v14 = sub_3EAEC(v23, 776);
            if ( v24[95] != v14 )
            {
              v11 = "CRC 1ST REGION";
              v7 = -1;
              goto LABEL_22;
            }
            memcpy(v4 + 2, v24, 0x60u);
            if ( v4[95] != 1 )
            {
              v11 = "PT1 test NOT pass, redo it";
              v7 = -1;
              goto LABEL_22;
            }
            v7 = 2;
          }
          if ( v8 )
          {
            v15 = *(_DWORD *)(src + 106);
            v16 = *(_DWORD *)(src + 102);
            v17 = *(_DWORD *)(src + 110);
            v25 = *(_DWORD *)(src + 98);
            v26 = v16;
            v28 = v17;
            v27 = v15;
            if ( !sub_2159C(&v25, 16, v4[1] >> 4, v4[1] & 0xF) )
            {
              v11 = "DEC 2ND REGION";
              goto LABEL_22;
            }
            v18 = sub_3EAEC(&v25, 120);
            if ( HIBYTE(v28) != v18 )
            {
              v11 = "CRC 2ND REGION";
              goto LABEL_22;
            }
            v19 = v25;
            v20 = v26;
            v21 = v28;
            *(_DWORD *)(v4 + 106) = v27;
            v22 = v4[108];
            *(_DWORD *)(v4 + 98) = v19;
            *(_DWORD *)(v4 + 102) = v20;
            *(_DWORD *)(v4 + 110) = v21;
            if ( v22 != 1 )
            {
              v11 = "PT2 test NOT pass, redo it";
              goto LABEL_22;
            }
            v7 |= 4u;
          }
          if ( !v9 )
            return v7;
          memcpy(dest, src + 114, 0x88u);
          if ( !sub_2159C(dest, 136, v4[1] >> 4, v4[1] & 0xF) )
          {
            v11 = "DEC 3ND REGION";
            goto LABEL_22;
          }
          v12 = sub_3EAEC(dest, 1080);
          if ( dest[135] != v12 )
          {
            v11 = "CRC 3RD REGION";
            goto LABEL_22;
          }
          memcpy(v4 + 114, dest, 0x88u);
          if ( v4[247] == 1 )
            return v7 | 8;
          v11 = "sweep NOT pass, redo it";
LABEL_22:
          if ( (unsigned int)off_AFC24 > 2 )
          {
            memset(s, 0, 0x800u);
            snprintf(s, 0x800u, "EEPROM error: %s\n", v11);
            sub_3BE28(2, s, 0);
          }
          return v7;
        }
      }
    }
    if ( (unsigned int)off_AFC24 > 2 )
    {
      v7 = -1;
      memset(s, 0, 0x800u);
      strcpy(s, "len invalid\n");
      sub_3BE28(2, s, 0);
      return v7;
    }
    return -1;
  }
  if ( (unsigned int)off_AFC24 <= 2 )
    return -1;
  memset(s, 0, 0x800u);
  strcpy(s, "flag invalid\n");
  sub_3BE28(2, s, 0);
  return -1;
}
