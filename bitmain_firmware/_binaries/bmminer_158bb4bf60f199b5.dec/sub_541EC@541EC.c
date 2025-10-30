void __fastcall sub_541EC(int *a1, int a2)
{
  _BYTE *v4; // r6
  int *v5; // r12
  int v6; // r0
  int v7; // r1
  _DWORD *v8; // lr
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r1
  int v20; // r3
  int v21; // r2
  int v22; // r1
  int v23; // r2
  int v24; // r3
  _BYTE *v25; // r11
  char *v26; // r8
  char *v27; // r7
  char *v28; // r6
  _BYTE *v29; // r10
  _BYTE *v30; // r9
  char *v31; // r5
  size_t v32; // r0
  _BYTE *ptr; // [sp+Ch] [bp-4A8h]
  _DWORD v34[8]; // [sp+10h] [bp-4A4h] BYREF
  _DWORD v35[8]; // [sp+30h] [bp-484h] BYREF
  _DWORD v36[8]; // [sp+50h] [bp-464h] BYREF
  _BYTE v37[64]; // [sp+70h] [bp-444h] BYREF
  char s[1028]; // [sp+B0h] [bp-404h] BYREF

  if ( !dword_1AF0D8 )
    dword_1AF0D8 = fopen64("/nvdata/worklog.txt", "wb");
  v4 = v37;
  memset(s, 0, 0x400u);
  v5 = a1;
  memset(&v35[3], 0, 20);
  do
  {
    v6 = *v5;
    v5 += 4;
    v7 = *(v5 - 3);
    v8 = v4;
    v9 = *(v5 - 2);
    v4 += 16;
    v10 = *(v5 - 1);
    *v8 = v6;
    v8[1] = v7;
    v8[2] = v9;
    v8[3] = v10;
  }
  while ( v5 != a1 + 16 );
  v11 = a1[33];
  v12 = a1[34];
  v13 = a1[35];
  v34[0] = a1[32];
  v34[1] = v11;
  v34[2] = v12;
  v34[3] = v13;
  v14 = a1[37];
  v15 = a1[38];
  v16 = a1[39];
  v34[4] = a1[36];
  v34[5] = v14;
  v34[6] = v15;
  v34[7] = v16;
  v17 = v5[1];
  v18 = v5[2];
  v35[0] = *v5;
  v35[1] = v17;
  v35[2] = v18;
  v19 = a1[49];
  v20 = a1[51];
  v21 = a1[50];
  v36[0] = a1[48];
  v36[1] = v19;
  v36[2] = v21;
  v36[3] = v20;
  v22 = a1[53];
  v23 = a1[54];
  v24 = a1[55];
  v36[4] = a1[52];
  v36[5] = v22;
  v36[6] = v23;
  v36[7] = v24;
  sub_50B5C(v37, 64);
  sub_50B5C(v34, 32);
  sub_50B5C(v35, 12);
  sub_50B5C(v36, 32);
  ptr = sub_4988C((int)a1, 128);
  v25 = sub_4988C((int)v37, 64);
  v26 = sub_4988C((int)v34, 32);
  v27 = sub_4988C((int)v35, 12);
  v28 = sub_4988C(a2, 4);
  v29 = sub_4988C(a2, 5);
  v30 = sub_4988C((int)v36, 32);
  v31 = sub_4988C((int)(a1 + 111), 4);
  sprintf(s, "midstate %s data %s nonce %s version %s \r\n", v26, v27, v28, v31);
  v32 = strlen(s);
  fwrite(s, v32, 1u, (FILE *)dword_1AF0D8);
  fflush((FILE *)dword_1AF0D8);
  if ( ptr )
    free(ptr);
  if ( v25 )
    free(v25);
  if ( v26 )
    free(v26);
  if ( v27 )
    free(v27);
  if ( v28 )
    free(v28);
  if ( v29 )
    free(v29);
  if ( v30 )
    free(v30);
  if ( v31 )
    free(v31);
}
