int __fastcall sub_212CC(int a1, unsigned __int8 *src, size_t n, unsigned int a4)
{
  unsigned __int8 *v4; // r8
  int v7; // r7
  int v8; // r4
  int v10; // r9
  int v11; // r10
  int v12; // r4
  int v13; // r11
  const char *v14; // r4
  int v15; // r0
  int v16; // r2
  int v17; // r12
  int v18; // r3
  int v19; // r0
  int v20; // r12
  int v21; // r0
  int v22; // r2
  int v23; // r3
  int v24; // r0
  _BYTE v25[2]; // [sp+0h] [bp-904h] BYREF
  _BYTE dest[96]; // [sp+2h] [bp-902h] BYREF
  int v27; // [sp+62h] [bp-8A2h] BYREF
  int v28; // [sp+66h] [bp-89Eh]
  int v29; // [sp+6Ah] [bp-89Ah]
  int v30; // [sp+6Eh] [bp-896h]
  _BYTE v31[142]; // [sp+72h] [bp-892h] BYREF
  char s[2052]; // [sp+100h] [bp-804h] BYREF

  v4 = *(unsigned __int8 **)(a1 + 300);
  if ( *src != *v4 )
    return -1;
  if ( (a4 & 0xE) == 0 )
  {
    if ( (unsigned int)dword_B308C <= 2 )
      return -1;
    memset(s, 0, 0x800u);
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
    goto LABEL_16;
  }
  v12 = (a4 >> 3) & 1;
  if ( n <= 0xF9 )
    v13 = (a4 >> 3) & 1;
  else
    v13 = 0;
  if ( v13 )
  {
    if ( (unsigned int)dword_B308C <= 2 )
      return -1;
LABEL_16:
    memset(s, 0, 0x800u);
    strcpy(s, "len invalid\n");
    sub_3C5B8(2, s, 0);
    return -1;
  }
  if ( n > 0x100 && (unsigned int)dword_B308C > 2 )
  {
    memset(s, 0, 0x800u);
    strcpy(s, "len too large, should less than 256\n");
    sub_3C5B8(2, s, 0);
  }
  v4[1] = src[1];
  memcpy(v25, src, n);
  if ( v7 )
  {
    memcpy(dest, src + 2, sizeof(dest));
    if ( !sub_21AAC(dest, 96, v4[1] >> 4, v4[1] & 0xF) )
    {
      v14 = "DEC 1ST REGION";
      v7 = -1;
      goto LABEL_33;
    }
    v15 = sub_3F1DC(v25, 776);
    if ( dest[95] != v15 )
    {
      v14 = "CRC 1ST REGION";
      v7 = -1;
      goto LABEL_33;
    }
    memcpy(v4 + 2, dest, 0x60u);
    if ( v4[95] != 1 )
    {
      v14 = "PT1 test NOT pass, redo it";
      v7 = -1;
      goto LABEL_33;
    }
    v7 = 2;
  }
  if ( !v10 )
    goto LABEL_26;
  v16 = *(_DWORD *)(src + 106);
  v17 = *(_DWORD *)(src + 102);
  v18 = *(_DWORD *)(src + 110);
  v27 = *(_DWORD *)(src + 98);
  v28 = v17;
  v30 = v18;
  v29 = v16;
  if ( sub_21AAC(&v27, 16, v4[1] >> 4, v4[1] & 0xF) )
  {
    v19 = sub_3F1DC(&v27, 120);
    if ( HIBYTE(v30) == v19 )
    {
      v20 = v27;
      v21 = v28;
      v22 = v30;
      *(_DWORD *)(v4 + 106) = v29;
      v23 = v4[108];
      *(_DWORD *)(v4 + 98) = v20;
      *(_DWORD *)(v4 + 102) = v21;
      *(_DWORD *)(v4 + 110) = v22;
      if ( v23 == 1 )
      {
        v7 |= 4u;
LABEL_26:
        if ( !v12 )
          return v7;
        memcpy(v31, src + 114, 0x88u);
        if ( sub_21AAC(v31, 136, v4[1] >> 4, v4[1] & 0xF) )
        {
          v24 = sub_3F1DC(v31, 1080);
          if ( v31[135] == v24 )
          {
            memcpy(v4 + 114, v31, 0x88u);
            if ( v4[247] == 1 )
              return v7 | 8;
            v14 = "sweep NOT pass, redo it";
          }
          else
          {
            v14 = "CRC 3RD REGION";
          }
        }
        else
        {
          v14 = "DEC 3ND REGION";
        }
        goto LABEL_33;
      }
      v14 = "PT2 test NOT pass, redo it";
    }
    else
    {
      v14 = "CRC 2ND REGION";
    }
  }
  else
  {
    v14 = "DEC 2ND REGION";
  }
LABEL_33:
  if ( (unsigned int)dword_B308C <= 2 )
    return v7;
  memset(s, 0, 0x800u);
  snprintf(s, 0x800u, "EEPROM error: %s\n", v14);
  sub_3C5B8(2, s, 0);
  return v7;
}
