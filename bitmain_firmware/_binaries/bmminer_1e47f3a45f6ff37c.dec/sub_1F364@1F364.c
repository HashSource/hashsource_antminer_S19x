int __fastcall sub_1F364(int a1, unsigned __int8 *src, size_t n, unsigned int a4)
{
  unsigned __int8 *v4; // r7
  int v7; // r6
  int v8; // r9
  int v10; // r4
  int v11; // r10
  const char *v12; // r4
  _DWORD *v13; // r5
  int v14; // t1
  int v15; // r2
  int v16; // r3
  int v17; // r12
  int v18; // r0
  int v19; // r0
  int v20; // r12
  int v21; // r2
  int v22; // r3
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
  if ( (a4 & 6) == 0 )
  {
    if ( (unsigned int)dword_B308C <= 2 )
      return -1;
    memset(s, 0, sizeof(s));
    strcpy(s, "flag invalid\n");
    sub_3C5B8(2, s, 0);
    return -1;
  }
  v7 = (a4 >> 1) & 1;
  if ( n <= 0x61 )
    v8 = (a4 >> 1) & 1;
  else
    v8 = 0;
  if ( v8 )
  {
    if ( (unsigned int)dword_B308C <= 2 )
      return -1;
    goto LABEL_16;
  }
  v10 = (a4 >> 2) & 1;
  if ( n <= 0x71 )
    v11 = (a4 >> 2) & 1;
  else
    v11 = 0;
  if ( v11 )
  {
    if ( (unsigned int)dword_B308C <= 2 )
      return -1;
LABEL_16:
    memset(s, 0, sizeof(s));
    strcpy(s, "len invalid\n");
    sub_3C5B8(2, s, 0);
    return -1;
  }
  if ( n > 0x100 && (unsigned int)dword_B308C > 2 )
  {
    memset(s, 0, sizeof(s));
    strcpy(s, "len too large, should less than 256\n");
    sub_3C5B8(2, s, 0);
  }
  v4[1] = src[1];
  memcpy(v24, src, n);
  if ( !v7 )
    goto LABEL_21;
  memcpy(dest, src + 2, sizeof(dest));
  if ( sub_21AAC(dest, 96, v4[1] >> 4, v4[1] & 0xF) )
  {
    v23 = sub_3F1DC(v24, 776);
    if ( dest[95] == v23 )
    {
      memcpy(v4 + 2, dest, 0x60u);
      if ( v4[95] == 1 )
      {
        v7 = 2;
LABEL_21:
        if ( !v10 )
          return v7;
        v14 = *(_DWORD *)(src + 98);
        v13 = src + 98;
        v15 = v13[2];
        v16 = v13[3];
        v17 = v13[1];
        v26 = v14;
        v29 = v16;
        v27 = v17;
        v28 = v15;
        if ( sub_21AAC(&v26, 16, v4[1] >> 4, v4[1] & 0xF) )
        {
          v18 = sub_3F1DC(&v26, 120);
          if ( HIBYTE(v29) == v18 )
          {
            v19 = v27;
            v20 = v26;
            v21 = v29;
            *(_DWORD *)(v4 + 106) = v28;
            v22 = v4[108];
            *(_DWORD *)(v4 + 102) = v19;
            *(_DWORD *)(v4 + 98) = v20;
            *(_DWORD *)(v4 + 110) = v21;
            if ( v22 == 1 )
              return v7 | 4;
            v12 = "PT2 test NOT pass, redo it";
          }
          else
          {
            v12 = "CRC 2ND REGION";
          }
        }
        else
        {
          v12 = "DEC 2ND REGION";
        }
        goto LABEL_26;
      }
      v12 = "PT1 test NOT pass, redo it";
      v7 = -1;
    }
    else
    {
      v12 = "CRC 1ST REGION";
      v7 = -1;
    }
  }
  else
  {
    v12 = "DEC 1ST REGION";
    v7 = -1;
  }
LABEL_26:
  if ( (unsigned int)dword_B308C <= 2 )
    return v7;
  memset(s, 0, sizeof(s));
  snprintf(s, 0x800u, "EEPROM error: %s\n", v12);
  sub_3C5B8(2, s, 0);
  return v7;
}
