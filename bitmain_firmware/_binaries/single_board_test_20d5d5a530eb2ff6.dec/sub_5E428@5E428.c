int __fastcall sub_5E428(const void **a1, int a2, int a3, int a4)
{
  size_t v8; // r0
  int v9; // r12
  int v10; // lr
  int v11; // r5
  _DWORD *v12; // r5
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r1
  int v21; // r2
  size_t v23; // r6
  _DWORD s[12]; // [sp+10h] [bp-64h] BYREF
  char v25[52]; // [sp+40h] [bp-34h] BYREF

  memset(s, 0, sizeof(s));
  v8 = fread(s, 0x30u, 1u, (FILE *)*a1);
  if ( v8 != 1 )
  {
    v23 = v8;
    sub_1E938(v25, 0x30u);
    printf("%s ", v25);
    printf(
      "%s : Load core pattern failed!, ret:%d, nonce:0x%08x, struct size:%d, fp:%p\n\n",
      "parse_bin_file_8midstate_sf",
      v23,
      s[0],
      48,
      *a1);
    snprintf(
      byte_64A538,
      0x100u,
      "Load core pattern failed!, ret:%d, nonce:0x%08x, struct size:%d, fp:%p\n",
      v23,
      s[0],
      48,
      *a1);
    sub_3CC5C((int)byte_64A538, v25);
    sleep(1u);
    exit(0);
  }
  sub_1E938(v25, 0x30u);
  printf("%s ", v25);
  printf("%s : read core:%d, nonce:0x%08x\n\n", "parse_bin_file_8midstate_sf", a3, s[0]);
  snprintf(byte_64A638, 0x100u, "read core:%d, nonce:0x%08x\n", a3, s[0]);
  sub_3CC5C((int)byte_64A638, v25);
  if ( a4 )
  {
    v9 = 0;
    v10 = 60 * a4 * a3;
    do
    {
      v11 = dword_7169B0[a2];
      *(_DWORD *)(v11 + v10) = v9;
      v12 = (_DWORD *)(v11 + v10);
      ++v9;
      v10 += 60;
      v12[3] = s[0];
      v13 = s[5];
      v14 = s[6];
      v15 = s[7];
      v12[7] = s[4];
      v12[8] = v13;
      v12[9] = v14;
      v12[10] = v15;
      v16 = s[9];
      v17 = s[10];
      v18 = s[11];
      v12[11] = s[8];
      v12[12] = v16;
      v12[13] = v17;
      v19 = s[1];
      v20 = s[2];
      v21 = s[3];
      v12[14] = v18;
      v12[4] = v19;
      v12[5] = v20;
      v12[6] = v21;
    }
    while ( v9 != a4 );
  }
  return a4;
}
