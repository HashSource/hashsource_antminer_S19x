_DWORD *__fastcall sub_243A54(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  int v5; // r9
  int v6; // r2
  int v7; // r0
  _DWORD *v8; // r4
  int v9; // lr
  int v10; // r1
  int v11; // r2
  int v12; // r12
  int v13; // r3
  unsigned __int8 *v14; // r0
  int v15; // r11
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int *v19; // lr
  _DWORD *v20; // r3
  bool v21; // zf
  int v22; // r2
  int v25; // [sp+0h] [bp-44h]
  int v26; // [sp+4h] [bp-40h]
  int v27; // [sp+8h] [bp-3Ch]
  int v28; // [sp+Ch] [bp-38h]
  int v29; // [sp+10h] [bp-34h]
  int v30; // [sp+14h] [bp-30h]
  _BYTE v31[12]; // [sp+18h] [bp-2Ch] BYREF
  int (**v32)(); // [sp+24h] [bp-20h] BYREF
  _DWORD *v33; // [sp+28h] [bp-1Ch]
  int v34; // [sp+2Ch] [bp-18h]
  _DWORD v35[5]; // [sp+30h] [bp-14h] BYREF

  sub_2591FC(v31);
  v5 = dword_487668;
  v6 = *(_DWORD *)(dword_487668 + 36);
  *(_DWORD *)(dword_487668 + 36) = 0;
  v30 = v6;
  sub_256760(&v32);
  v33 = v35;
  v7 = *(_DWORD *)(dword_487668 + 88);
  v32 = &off_3F2924;
  v34 = 0;
  LOBYTE(v35[0]) = 0;
  sub_2573D8(v7, &v32);
  v8 = (_DWORD *)dword_487668;
  v9 = dword_487A6C;
  v10 = a3;
  v11 = *(_DWORD *)(dword_487668 + 80);
  v12 = *(_DWORD *)(dword_487668 + 84);
  v29 = *(_DWORD *)(dword_487668 + 72);
  v13 = *(_DWORD *)(dword_487668 + 88);
  v14 = a2;
  *(_DWORD *)(dword_487668 + 72) = &v32;
  v8[20] = &v32;
  v8[21] = &v32;
  v15 = dword_487A38;
  v28 = v11;
  v27 = v12;
  v26 = v9;
  dword_487A6C = (int)&v32;
  dword_487A38 = (int)&v32;
  v25 = v13;
  sub_2435B0(v14, v10);
  v8[20] = v28;
  v8[21] = v27;
  v8[18] = v29;
  dword_487A6C = v26;
  dword_487A38 = v15;
  v16 = sub_2573D8(v25, 0);
  v20 = v33;
  *a1 = a1 + 2;
  v33 = v35;
  v21 = v20 == v35;
  if ( v20 == v35 )
    v19 = v35;
  else
    v18 = v35[0];
  if ( v20 == v35 )
  {
    v16 = *v19;
    v17 = v19[1];
    v18 = v19[2];
    v20 = (_DWORD *)v19[3];
  }
  else
  {
    a1[2] = v18;
    *a1 = v20;
  }
  if ( v21 )
    a1[4] = v18;
  v22 = v34;
  if ( v21 )
  {
    a1[2] = v16;
    a1[5] = v20;
    a1[3] = v17;
  }
  a1[1] = v22;
  v34 = 0;
  LOBYTE(v35[0]) = 0;
  sub_256478(&v32);
  if ( v5 != -36 )
    *(_DWORD *)(v5 + 36) = v30;
  sub_25923C(v31);
  return a1;
}
