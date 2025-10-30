int __fastcall sub_39814(int a1, unsigned __int8 *src, size_t n, unsigned int a4)
{
  unsigned __int8 *v5; // r7
  int v7; // r2
  int v8; // r5
  int v9; // r4
  int v10; // r3
  int result; // r0
  int v12; // r2
  int v13; // r4
  int v14; // r3
  const char *v15; // r4
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r4
  int v20; // r2
  int v21; // r3
  char *v23; // r4
  _DWORD *v24; // r3
  int v25; // r1
  int v26; // r2
  char v27[48]; // [sp+8h] [bp-134h] BYREF
  char dest[2]; // [sp+38h] [bp-104h] BYREF
  _BYTE srca[96]; // [sp+3Ah] [bp-102h] BYREF
  int v30; // [sp+9Ah] [bp-A2h] BYREF
  int v31; // [sp+9Eh] [bp-9Eh]
  int v32; // [sp+A2h] [bp-9Ah]
  int v33; // [sp+A6h] [bp-96h]

  v5 = *(unsigned __int8 **)(a1 + 300);
  if ( *src != *v5 )
  {
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : version invalid %d!=%d\n", "edf_v4_load", *src, **(unsigned __int8 **)(a1 + 300));
    snprintf(&byte_62DC68[2560], 0x100u, "version invalid %d!=%d", *src, **(unsigned __int8 **)(a1 + 300));
    sub_3CC5C(&byte_62DC68[2560], dest);
    return -1;
  }
  if ( (a4 & 6) == 0 )
  {
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : flag invalid\n", "edf_v4_load");
    strcpy(&byte_62DC68[2816], "flag invalid");
    sub_3CC5C(&byte_62DC68[2816], dest);
    return -1;
  }
  v7 = (a4 >> 1) & 1;
  v8 = a4 & 2;
  if ( n > 0x61 )
    v7 = 0;
  if ( v7 )
  {
    sub_1E938(dest, 0x30u);
    v23 = &byte_62DC68[3072];
    printf("%s ", dest);
    printf("%s : len invalid\n", "edf_v4_load");
    LOWORD(v24) = (unsigned __int16)"len invalid";
LABEL_32:
    HIWORD(v24) = (unsigned int)"len invalid" >> 16;
    v25 = v24[1];
    v26 = v24[2];
    *(_DWORD *)v23 = *v24;
    *((_DWORD *)v23 + 1) = v25;
    *((_DWORD *)v23 + 2) = v26;
    sub_3CC5C(v23, dest);
    return -1;
  }
  v9 = a4 & 4;
  if ( n <= 0x71 )
    v10 = (a4 >> 2) & 1;
  else
    v10 = 0;
  if ( v10 )
  {
    sub_1E938(dest, 0x30u);
    v23 = &byte_62DC68[3328];
    printf("%s ", dest);
    printf("%s : len invalid\n", "edf_v4_load");
    LOWORD(v24) = -20020;
    goto LABEL_32;
  }
  if ( n > 0x100 )
  {
    sub_1E938(dest, 0x30u);
    printf("%s ", dest);
    printf("%s : len too large, should less than 256\n", "edf_v4_load");
    strcpy(&byte_62DC68[3584], "len too large, should less than 256");
    sub_3CC5C(&byte_62DC68[3584], dest);
  }
  v5[1] = src[1];
  memcpy(dest, src, n);
  if ( v8 )
  {
    memcpy(srca, src + 2, sizeof(srca));
    if ( !sub_38498((int)srca, 0x60u, v5[1] >> 4, v5[1] & 0xF) )
    {
      v15 = "DEC 1ST REGION";
      v8 = -1;
      goto LABEL_18;
    }
    v16 = sub_2883C(dest, 776);
    if ( srca[95] != v16 )
    {
      v15 = "CRC 1ST REGION";
      v8 = -1;
      goto LABEL_18;
    }
    memcpy(v5 + 2, srca, 0x60u);
    if ( v5[95] != 1 )
    {
      v15 = "PT1 test NOT pass, redo it";
      v8 = -1;
      goto LABEL_18;
    }
    v8 = 2;
  }
  result = v8;
  if ( !v9 )
    return result;
  v12 = *(_DWORD *)(src + 106);
  v13 = *(_DWORD *)(src + 102);
  v14 = *(_DWORD *)(src + 110);
  v30 = *(_DWORD *)(src + 98);
  v31 = v13;
  v33 = v14;
  v32 = v12;
  if ( !sub_38498((int)&v30, 0x10u, v5[1] >> 4, v5[1] & 0xF) )
  {
    v15 = "DEC 2ND REGION";
LABEL_18:
    sub_1E938(v27, 0x30u);
    printf("%s ", v27);
    printf("%s : EEPROM error: %s\n", "edf_v4_load", v15);
    snprintf(&byte_62DC68[3840], 0x100u, "EEPROM error: %s", v15);
    sub_3CC5C(&byte_62DC68[3840], v27);
    return v8;
  }
  v17 = sub_2883C(&v30, 120);
  if ( HIBYTE(v33) != v17 )
  {
    v15 = "CRC 2ND REGION";
    goto LABEL_18;
  }
  v18 = v31;
  v19 = v30;
  v20 = v33;
  *(_DWORD *)(v5 + 106) = v32;
  v21 = v5[108];
  *(_DWORD *)(v5 + 102) = v18;
  *(_DWORD *)(v5 + 98) = v19;
  *(_DWORD *)(v5 + 110) = v20;
  if ( v21 != 1 )
  {
    v15 = "PT2 test NOT pass, redo it";
    goto LABEL_18;
  }
  return v8 | 4;
}
