void __fastcall sub_45674(_DWORD *a1, int a2)
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
  int v22; // [sp+10h] [bp-4CCh] BYREF
  int v23; // [sp+14h] [bp-4C8h]
  int v24; // [sp+18h] [bp-4C4h]
  int v25; // [sp+1Ch] [bp-4C0h]
  int v26; // [sp+20h] [bp-4BCh]
  int v27; // [sp+24h] [bp-4B8h]
  int v28; // [sp+28h] [bp-4B4h]
  int v29; // [sp+2Ch] [bp-4B0h]
  _BYTE v30[32]; // [sp+30h] [bp-4ACh] BYREF
  int v31; // [sp+50h] [bp-48Ch] BYREF
  int v32; // [sp+54h] [bp-488h]
  int v33; // [sp+58h] [bp-484h]
  int v34; // [sp+5Ch] [bp-480h]
  int v35; // [sp+60h] [bp-47Ch]
  int v36; // [sp+64h] [bp-478h]
  int v37; // [sp+68h] [bp-474h]
  int v38; // [sp+6Ch] [bp-470h]
  _BYTE v39[64]; // [sp+70h] [bp-46Ch] BYREF
  char v40[1024]; // [sp+B0h] [bp-42Ch] BYREF
  void *v41; // [sp+4B0h] [bp-2Ch]
  void *v42; // [sp+4B4h] [bp-28h]
  void *v43; // [sp+4B8h] [bp-24h]
  void *v44; // [sp+4BCh] [bp-20h]
  void *v45; // [sp+4C0h] [bp-1Ch]
  void *v46; // [sp+4C4h] [bp-18h]
  void *v47; // [sp+4C8h] [bp-14h]
  void *ptr; // [sp+4CCh] [bp-10h]

  if ( !dword_87EA0 )
    dword_87EA0 = fopen64("/nvdata/worklog.txt", "wb");
  memset(v40, 0, sizeof(v40));
  memset(v39, 0, sizeof(v39));
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  memset(v30, 0, sizeof(v30));
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  ptr = 0;
  v47 = 0;
  v46 = 0;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v2 = a1;
  v3 = v39;
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
  v22 = a1[32];
  v23 = v7;
  v24 = v8;
  v25 = v9;
  v10 = a1[37];
  v11 = a1[38];
  v12 = a1[39];
  v26 = a1[36];
  v27 = v10;
  v28 = v11;
  v29 = v12;
  memcpy(v30, a1 + 16, 0xCu);
  v13 = a1[49];
  v14 = a1[50];
  v15 = a1[51];
  v31 = a1[48];
  v32 = v13;
  v33 = v14;
  v34 = v15;
  v16 = a1[53];
  v17 = a1[54];
  v18 = a1[55];
  v35 = a1[52];
  v36 = v16;
  v37 = v17;
  v38 = v18;
  sub_2C208((int)v39, 64);
  sub_2C208((int)&v22, 32);
  sub_2C208((int)v30, 12);
  sub_2C208((int)&v31, 32);
  ptr = sub_20744((int)a1, 128);
  v47 = sub_20744((int)v39, 64);
  v46 = sub_20744((int)&v22, 32);
  v45 = sub_20744((int)v30, 12);
  v44 = sub_20744(a2, 4);
  v43 = sub_20744(a2, 5);
  v42 = sub_20744((int)&v31, 32);
  v41 = sub_20744((int)(a1 + 111), 4);
  sprintf(
    v40,
    "midstate %s data %s nonce %s version %s \r\n",
    (const char *)v46,
    (const char *)v45,
    (const char *)v44,
    (const char *)v41);
  v19 = strlen(v40);
  fwrite(v40, v19, 1u, (FILE *)dword_87EA0);
  fflush((FILE *)dword_87EA0);
  if ( ptr )
    free(ptr);
  if ( v47 )
    free(v47);
  if ( v46 )
    free(v46);
  if ( v45 )
    free(v45);
  if ( v44 )
    free(v44);
  if ( v43 )
    free(v43);
  if ( v42 )
    free(v42);
  if ( v41 )
    free(v41);
}
