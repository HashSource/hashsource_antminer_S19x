int __fastcall sub_46918(FILE **a1, int a2, int a3, int a4)
{
  int v6; // r7
  int v7; // r8
  int v8; // r5
  _DWORD *v9; // r5
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r0
  int v17; // r1
  int v18; // r2
  _DWORD ptr[12]; // [sp+8h] [bp-88h] BYREF
  char v22[88]; // [sp+38h] [bp-58h] BYREF

  if ( !a4 )
    return 0;
  v6 = 0;
  v7 = 56 * a4 * a3;
  do
  {
    if ( fread(ptr, 1u, 0x30u, *a1) != 48 )
    {
      sub_1E938(v22, 0x30u);
      printf("%s ", v22);
      printf("%s : Load core pattern failed!\n\n", "parse_8midstate_file");
      strcpy(byte_6450E4, "Load core pattern failed!\n");
      sub_3CC5C((int)byte_6450E4, v22);
      return v6;
    }
    v8 = dword_705388[a2];
    *(_DWORD *)(v8 + v7) = v6;
    v9 = (_DWORD *)(v8 + v7);
    ++v6;
    v7 += 56;
    v9[2] = ptr[0];
    v10 = ptr[5];
    v11 = ptr[6];
    v12 = ptr[7];
    v9[6] = ptr[4];
    v9[7] = v10;
    v9[8] = v11;
    v9[9] = v12;
    v13 = ptr[9];
    v14 = ptr[10];
    v15 = ptr[11];
    v9[10] = ptr[8];
    v9[11] = v13;
    v9[12] = v14;
    v16 = ptr[1];
    v17 = ptr[2];
    v18 = ptr[3];
    v9[13] = v15;
    v9[3] = v16;
    v9[4] = v17;
    v9[5] = v18;
  }
  while ( v6 != a4 );
  return v6;
}
