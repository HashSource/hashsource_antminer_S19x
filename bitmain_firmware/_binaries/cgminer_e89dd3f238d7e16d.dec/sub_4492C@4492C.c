void __fastcall sub_4492C(_DWORD *a1, int a2)
{
  _DWORD *v2; // r12
  _DWORD *v3; // r4
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  size_t v19; // r0
  _DWORD v22[8]; // [sp+10h] [bp-4CCh] BYREF
  _BYTE v23[32]; // [sp+30h] [bp-4ACh] BYREF
  _DWORD v24[8]; // [sp+50h] [bp-48Ch] BYREF
  _BYTE v25[64]; // [sp+70h] [bp-46Ch] BYREF
  char v26[1024]; // [sp+B0h] [bp-42Ch] BYREF
  void *v27; // [sp+4B0h] [bp-2Ch]
  void *v28; // [sp+4B4h] [bp-28h]
  void *v29; // [sp+4B8h] [bp-24h]
  void *v30; // [sp+4BCh] [bp-20h]
  void *v31; // [sp+4C0h] [bp-1Ch]
  void *v32; // [sp+4C4h] [bp-18h]
  void *v33; // [sp+4C8h] [bp-14h]
  void *ptr; // [sp+4CCh] [bp-10h]

  if ( !dword_86D08 )
    dword_86D08 = fopen64("/nvdata/worklog.txt", "wb");
  memset(v26, 0, sizeof(v26));
  memset(v25, 0, sizeof(v25));
  memset(v22, 0, sizeof(v22));
  memset(v23, 0, sizeof(v23));
  memset(v24, 0, sizeof(v24));
  ptr = 0;
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v2 = a1;
  v3 = v25;
  do
  {
    v4 = v2[1];
    v5 = v2[2];
    v6 = v2[3];
    *v3 = *v2;
    v3[1] = v4;
    v3[2] = v5;
    v3[3] = v6;
    v2 += 4;
    v3 += 4;
  }
  while ( v2 != a1 + 16 );
  v7 = a1[33];
  v8 = a1[34];
  v9 = a1[35];
  v22[0] = a1[32];
  v22[1] = v7;
  v22[2] = v8;
  v22[3] = v9;
  v10 = a1[37];
  v11 = a1[38];
  v12 = a1[39];
  v22[4] = a1[36];
  v22[5] = v10;
  v22[6] = v11;
  v22[7] = v12;
  memcpy(v23, a1 + 16, 0xCu);
  v13 = a1[49];
  v14 = a1[50];
  v15 = a1[51];
  v24[0] = a1[48];
  v24[1] = v13;
  v24[2] = v14;
  v24[3] = v15;
  v16 = a1[53];
  v17 = a1[54];
  v18 = a1[55];
  v24[4] = a1[52];
  v24[5] = v16;
  v24[6] = v17;
  v24[7] = v18;
  sub_2B220((int)v25, 64);
  sub_2B220((int)v22, 32);
  sub_2B220((int)v23, 12);
  sub_2B220((int)v24, 32);
  ptr = sub_1FE6C((int)a1, 128);
  v33 = sub_1FE6C((int)v25, 64);
  v32 = sub_1FE6C((int)v22, 32);
  v31 = sub_1FE6C((int)v23, 12);
  v30 = sub_1FE6C(a2, 4);
  v29 = sub_1FE6C(a2, 5);
  v28 = sub_1FE6C((int)v24, 32);
  v27 = sub_1FE6C((int)(a1 + 111), 4);
  sprintf(
    v26,
    "midstate %s data %s nonce %s version %s \r\n",
    (const char *)v32,
    (const char *)v31,
    (const char *)v30,
    (const char *)v27);
  v19 = strlen(v26);
  fwrite(v26, v19, 1u, (FILE *)dword_86D08);
  fflush((FILE *)dword_86D08);
  if ( ptr )
    free(ptr);
  if ( v33 )
    free(v33);
  if ( v32 )
    free(v32);
  if ( v31 )
    free(v31);
  if ( v30 )
    free(v30);
  if ( v29 )
    free(v29);
  if ( v28 )
    free(v28);
  if ( v27 )
    free(v27);
}
