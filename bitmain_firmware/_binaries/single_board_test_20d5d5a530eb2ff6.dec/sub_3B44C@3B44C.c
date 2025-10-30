int __fastcall sub_3B44C(int a1, unsigned __int8 *src, size_t n, unsigned int a4)
{
  unsigned __int8 *v5; // r8
  int v7; // r2
  int v8; // r5
  int v9; // r2
  int v10; // r9
  int v11; // r4
  int v12; // r3
  int result; // r0
  const char *v14; // r4
  int v15; // r2
  int v16; // r6
  int v17; // r3
  int v18; // r0
  int v19; // r0
  int v20; // r6
  int v21; // r0
  int v22; // r2
  int v23; // r3
  int v24; // r0
  char *v26; // r4
  _DWORD *v27; // r3
  int v28; // r1
  int v29; // r2
  char v30[48]; // [sp+8h] [bp-130h] BYREF
  char dest[2]; // [sp+38h] [bp-100h] BYREF
  _BYTE srca[96]; // [sp+3Ah] [bp-FEh] BYREF
  int v33; // [sp+9Ah] [bp-9Eh] BYREF
  int v34; // [sp+9Eh] [bp-9Ah]
  int v35; // [sp+A2h] [bp-96h]
  int v36; // [sp+A6h] [bp-92h]
  _BYTE v37[142]; // [sp+AAh] [bp-8Eh] BYREF

  v5 = *(unsigned __int8 **)(a1 + 300);
  if ( *src != *v5 )
  {
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : version invalid %d!=%d\n", "edf_v5_load", *src, **(unsigned __int8 **)(a1 + 300));
    snprintf(&byte_62DC68[18688], 0x100u, "version invalid %d!=%d", *src, **(unsigned __int8 **)(a1 + 300));
    sub_3CC5C(&byte_62DC68[18688], dest);
    return -1;
  }
  if ( (a4 & 0xE) == 0 )
  {
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : flag invalid\n", "edf_v5_load");
    strcpy(&byte_62DC68[18944], "flag invalid");
    sub_3CC5C(&byte_62DC68[18944], dest);
    return -1;
  }
  v7 = (a4 >> 1) & 1;
  v8 = a4 & 2;
  if ( n > 0x61 )
    v7 = 0;
  if ( v7 )
  {
    sub_1E938(dest, 0x30u);
    v26 = &byte_62DC68[19200];
    printf("%s ", dest);
    printf("%s : len invalid\n", "edf_v5_load");
    LOWORD(v27) = (unsigned __int16)"len invalid";
LABEL_45:
    HIWORD(v27) = (unsigned int)"len invalid" >> 16;
    v28 = v27[1];
    v29 = v27[2];
    *(_DWORD *)v26 = *v27;
    *((_DWORD *)v26 + 1) = v28;
    *((_DWORD *)v26 + 2) = v29;
    sub_3CC5C(v26, dest);
    return -1;
  }
  v9 = (a4 >> 2) & 1;
  v10 = a4 & 4;
  if ( n > 0x71 )
    v9 = 0;
  if ( v9 )
  {
    sub_1E938(dest, 0x30u);
    v26 = &byte_62DC68[19456];
    printf("%s ", dest);
    printf("%s : len invalid\n", "edf_v5_load");
    LOWORD(v27) = -20020;
    goto LABEL_45;
  }
  v11 = a4 & 8;
  if ( n <= 0xF9 )
    v12 = (a4 >> 3) & 1;
  else
    v12 = 0;
  if ( v12 )
  {
    sub_1E938(dest, 0x30u);
    v26 = &byte_62DC68[19712];
    printf("%s ", dest);
    printf("%s : len invalid\n", "edf_v5_load");
    LOWORD(v27) = -20020;
    goto LABEL_45;
  }
  if ( n > 0x100 )
  {
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : len too large, should less than 256\n", "edf_v5_load");
    strcpy(&byte_62DC68[19968], "len too large, should less than 256");
    sub_3CC5C(&byte_62DC68[19968], dest);
  }
  v5[1] = src[1];
  memcpy(dest, src, n);
  if ( !v8 )
  {
    if ( !v10 )
      goto LABEL_17;
    goto LABEL_21;
  }
  memcpy(srca, src + 2, sizeof(srca));
  if ( !sub_38498((int)srca, 0x60u, v5[1] >> 4, v5[1] & 0xF) )
  {
    v14 = "DEC 1ST REGION";
    v8 = -1;
    goto LABEL_23;
  }
  v18 = sub_2883C(dest, 776);
  if ( srca[95] != v18 )
  {
    v14 = "CRC 1ST REGION";
    v8 = -1;
    goto LABEL_23;
  }
  memcpy(v5 + 2, srca, 0x60u);
  if ( v5[95] != 1 )
  {
    v14 = "PT1 test NOT pass, redo it";
    v8 = -1;
    goto LABEL_23;
  }
  v8 = 2;
  if ( v10 )
  {
LABEL_21:
    v15 = *(_DWORD *)(src + 106);
    v16 = *(_DWORD *)(src + 102);
    v17 = *(_DWORD *)(src + 110);
    v33 = *(_DWORD *)(src + 98);
    v34 = v16;
    v36 = v17;
    v35 = v15;
    if ( !sub_38498((int)&v33, 0x10u, v5[1] >> 4, v5[1] & 0xF) )
    {
      v14 = "DEC 2ND REGION";
      goto LABEL_23;
    }
    v19 = sub_2883C(&v33, 120);
    if ( HIBYTE(v36) != v19 )
    {
      v14 = "CRC 2ND REGION";
      goto LABEL_23;
    }
    v20 = v33;
    v21 = v34;
    v22 = v36;
    *(_DWORD *)(v5 + 106) = v35;
    v23 = v5[108];
    *(_DWORD *)(v5 + 98) = v20;
    *(_DWORD *)(v5 + 102) = v21;
    *(_DWORD *)(v5 + 110) = v22;
    if ( v23 != 1 )
    {
      v14 = "PT2 test NOT pass, redo it";
      goto LABEL_23;
    }
    v8 |= 4u;
  }
LABEL_17:
  result = v8;
  if ( v11 )
  {
    memcpy(v37, src + 114, 0x88u);
    if ( sub_38498((int)v37, 0x88u, v5[1] >> 4, v5[1] & 0xF) )
    {
      v24 = sub_2883C(v37, 1080);
      if ( v37[135] == v24 )
      {
        memcpy(v5 + 114, v37, 0x88u);
        if ( v5[247] == 1 )
          return v8 | 8;
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
LABEL_23:
    sub_1E938(v30, 0x30u);
    printf("%s ", v30);
    printf("%s : EEPROM error: %s\n", "edf_v5_load", v14);
    snprintf(&byte_62DC68[20224], 0x100u, "EEPROM error: %s", v14);
    sub_3CC5C(&byte_62DC68[20224], v30);
    return v8;
  }
  return result;
}
