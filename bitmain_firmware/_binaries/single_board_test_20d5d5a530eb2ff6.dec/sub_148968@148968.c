void *__fastcall sub_148968(int *s, int a2)
{
  int v3; // r1
  char *v4; // r0
  int *v5; // r3
  unsigned int v6; // t1
  int v7; // r3
  int v8; // r2
  int v9; // r5
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r5
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r1
  _DWORD *sa; // [sp+0h] [bp-18h]
  _DWORD *v34; // [sp+4h] [bp-14h]
  _DWORD *v35; // [sp+8h] [bp-10h]
  _BYTE v36[63]; // [sp+18h] [bp+0h] BYREF
  char v37; // [sp+57h] [bp+3Fh] BYREF
  int v38[30]; // [sp+58h] [bp+40h] BYREF
  int v39[10]; // [sp+D0h] [bp+B8h] BYREF
  _DWORD v40[10]; // [sp+F8h] [bp+E0h] BYREF
  _DWORD v41[10]; // [sp+120h] [bp+108h] BYREF
  int v42[10]; // [sp+148h] [bp+130h] BYREF
  int v43[10]; // [sp+170h] [bp+158h] BYREF
  int v44[10]; // [sp+198h] [bp+180h] BYREF
  int v45[11]; // [sp+1C0h] [bp+1A8h] BYREF

  v3 = a2 - 1;
  v4 = v36;
  v5 = (int *)v36;
  do
  {
    v6 = *(unsigned __int8 *)++v3;
    v5 = (int *)((char *)v5 + 2);
    *((_BYTE *)v5 - 2) = v6 & 0xF;
    *((_BYTE *)v5 - 1) = v6 >> 4;
  }
  while ( v38 != v5 );
  LOBYTE(v7) = 0;
  do
  {
    v8 = (unsigned __int8)(v7 + *v4);
    v7 = (v8 + 8) << 24 >> 28;
    *v4++ = v8 - 16 * v7;
  }
  while ( &v37 != v4 );
  sa = s + 20;
  v34 = s + 10;
  v37 += v7;
  memset(s, 0, 0x28u);
  v35 = s + 30;
  v9 = 1;
  memset(s + 10, 0, 0x28u);
  s[10] = 1;
  memset(s + 20, 0, 0x28u);
  s[20] = 1;
  memset(s + 30, 0, 0x28u);
  do
  {
    sub_14744C(v38, v9 >> 1, (char)v36[v9]);
    v9 += 2;
    sub_14374C(v42, s, v38);
    sub_141D74(s, v42, v45);
    sub_141D74(v34, v43, v44);
    sub_141D74(sa, v44, v45);
    sub_141D74(v35, v42, v43);
  }
  while ( v9 != 65 );
  v10 = s[1];
  v11 = s[2];
  v12 = s[3];
  v39[0] = *s;
  v39[1] = v10;
  v39[2] = v11;
  v39[3] = v12;
  v13 = s[5];
  v14 = s[6];
  v15 = s[7];
  v39[4] = s[4];
  v39[5] = v13;
  v39[6] = v14;
  v39[7] = v15;
  v16 = s[9];
  v39[8] = s[8];
  v39[9] = v16;
  v17 = s[11];
  v18 = s[12];
  v19 = s[13];
  v40[0] = *v34;
  v40[1] = v17;
  v40[2] = v18;
  v40[3] = v19;
  v20 = s[15];
  v21 = s[16];
  v22 = s[17];
  v40[4] = s[14];
  v40[5] = v20;
  v40[6] = v21;
  v40[7] = v22;
  v23 = s[19];
  v24 = 0;
  v40[8] = s[18];
  v40[9] = v23;
  v25 = s[21];
  v26 = s[22];
  v27 = s[23];
  v41[0] = *sa;
  v41[1] = v25;
  v41[2] = v26;
  v41[3] = v27;
  v28 = s[25];
  v29 = s[26];
  v30 = s[27];
  v41[4] = s[24];
  v41[5] = v28;
  v41[6] = v29;
  v41[7] = v30;
  v31 = s[29];
  v41[8] = s[28];
  v41[9] = v31;
  sub_142E68(v42, v39);
  sub_141D74(v39, v42, v45);
  sub_141D74(v40, v43, v44);
  sub_141D74(v41, v44, v45);
  sub_142E68(v42, v39);
  sub_141D74(v39, v42, v45);
  sub_141D74(v40, v43, v44);
  sub_141D74(v41, v44, v45);
  sub_142E68(v42, v39);
  sub_141D74(v39, v42, v45);
  sub_141D74(v40, v43, v44);
  sub_141D74(v41, v44, v45);
  sub_142E68(v42, v39);
  sub_141D74(s, v42, v45);
  sub_141D74(v34, v43, v44);
  sub_141D74(sa, v44, v45);
  sub_141D74(v35, v42, v43);
  do
  {
    sub_14744C(v38, v24 >> 1, (char)v36[v24]);
    v24 += 2;
    sub_14374C(v42, s, v38);
    sub_141D74(s, v42, v45);
    sub_141D74(v34, v43, v44);
    sub_141D74(sa, v44, v45);
    sub_141D74(v35, v42, v43);
  }
  while ( v24 != 64 );
  return sub_E07F8(v36, 0x40u);
}
