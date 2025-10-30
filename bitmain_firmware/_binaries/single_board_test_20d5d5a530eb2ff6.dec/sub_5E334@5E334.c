int __fastcall sub_5E334(FILE **a1, int a2, int a3, int a4)
{
  int v7; // r3
  int v8; // r7
  int v9; // r8
  int v10; // r5
  _DWORD *v11; // r5
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r0
  int v19; // r1
  int v20; // r2
  _DWORD s[12]; // [sp+8h] [bp-64h] BYREF
  char v24[52]; // [sp+38h] [bp-34h] BYREF

  memset(s, 0, sizeof(s));
  if ( !a4 )
    return 0;
  v7 = 60 * a4 * a3;
  v8 = 0;
  v9 = v7;
  do
  {
    if ( fread(s, 1u, 0x30u, *a1) != 48 )
    {
      sub_1E938(v24, 0x30u);
      printf("%s ", v24);
      printf("%s : Load core pattern failed!\n\n", "parse_bin_file_8midstate");
      strcpy(byte_64A438, "Load core pattern failed!\n");
      sub_3CC5C((int)byte_64A438, v24);
      return v8;
    }
    v10 = dword_7169B0[a2];
    *(_DWORD *)(v10 + v9) = v8;
    v11 = (_DWORD *)(v10 + v9);
    ++v8;
    v9 += 60;
    v11[3] = s[0];
    v12 = s[5];
    v13 = s[6];
    v14 = s[7];
    v11[7] = s[4];
    v11[8] = v12;
    v11[9] = v13;
    v11[10] = v14;
    v15 = s[9];
    v16 = s[10];
    v17 = s[11];
    v11[11] = s[8];
    v11[12] = v15;
    v11[13] = v16;
    v18 = s[1];
    v19 = s[2];
    v20 = s[3];
    v11[14] = v17;
    v11[4] = v18;
    v11[5] = v19;
    v11[6] = v20;
  }
  while ( v8 != a4 );
  return v8;
}
