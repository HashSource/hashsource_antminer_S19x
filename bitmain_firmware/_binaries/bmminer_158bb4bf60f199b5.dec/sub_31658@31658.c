unsigned int __fastcall sub_31658(_DWORD *a1, unsigned int a2)
{
  unsigned int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // r4
  unsigned int v12; // t1
  unsigned int v13; // r1
  unsigned int v14; // r2
  unsigned int *v15; // r2
  unsigned int *v16; // r1
  unsigned int v17; // t1
  unsigned int v18[8]; // [sp+0h] [bp-128h] BYREF
  _BYTE s[32]; // [sp+20h] [bp-108h] BYREF
  _DWORD v20[58]; // [sp+40h] [bp-E8h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(s, 0, sizeof(s));
  if ( !a1 )
    return 0;
  v5 = a1[6];
  v6 = a1[7];
  v7 = a1[8];
  v20[2] = a1[5];
  v20[3] = v5;
  v20[4] = v6;
  v20[5] = v7;
  v8 = a1[10];
  v9 = a1[11];
  v10 = a1[12];
  v20[6] = a1[9];
  v20[7] = v8;
  v20[8] = v9;
  v20[9] = v10;
  sub_50B5C(&v20[2], 32);
  v12 = a1[2];
  v11 = a1 + 2;
  v20[0] = 80;
  v20[1] = 0;
  v13 = v11[1];
  v14 = v11[2];
  v18[0] = v12;
  v18[1] = v13;
  v18[2] = v14;
  sub_50B5C(v18, 12);
  sub_5162C(&v20[10], v18, 12);
  v18[0] = bswap32(a2);
  sub_50B5C(v18, 4);
  sub_5162C(&v20[13], v18, 4);
  sub_1E58C((int)v20, v18);
  memset(v20, 0, sizeof(v20));
  sub_1E740(v18, 32, s);
  v15 = &v18[7];
  v16 = &v18[-1];
  do
  {
    v17 = v15[1];
    ++v15;
    v16[1] = bswap32(v17);
    ++v16;
  }
  while ( v15 != (unsigned int *)&s[28] );
  result = v18[7];
  if ( v18[7] )
    return 1;
  return result;
}
