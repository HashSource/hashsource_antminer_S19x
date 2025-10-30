void *__fastcall sub_14F904(_BYTE *a1, int *a2)
{
  int v3; // r2
  int v5; // r0
  int v6; // r3
  int v7; // r1
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _DWORD v12[7]; // [sp+8h] [bp-13Ch] BYREF
  int v13; // [sp+24h] [bp-120h]
  int v14[10]; // [sp+28h] [bp-11Ch] BYREF
  _DWORD v15[10]; // [sp+50h] [bp-F4h] BYREF
  int v16[10]; // [sp+78h] [bp-CCh] BYREF
  int s[10]; // [sp+A0h] [bp-A4h] BYREF
  int v18; // [sp+C8h] [bp-7Ch]
  int v19; // [sp+CCh] [bp-78h]
  int v20; // [sp+D0h] [bp-74h]
  int v21; // [sp+D4h] [bp-70h]
  int v22; // [sp+D8h] [bp-6Ch]
  int v23; // [sp+DCh] [bp-68h]
  int v24; // [sp+E0h] [bp-64h]
  int v25; // [sp+E4h] [bp-60h]
  int v26; // [sp+E8h] [bp-5Ch]
  int v27; // [sp+ECh] [bp-58h]
  int v28; // [sp+F0h] [bp-54h]
  int v29; // [sp+F4h] [bp-50h]
  int v30; // [sp+F8h] [bp-4Ch]
  int v31; // [sp+FCh] [bp-48h]
  int v32; // [sp+100h] [bp-44h]
  int v33; // [sp+104h] [bp-40h]
  int v34; // [sp+108h] [bp-3Ch]
  int v35; // [sp+10Ch] [bp-38h]
  int v36; // [sp+110h] [bp-34h]
  int v37; // [sp+114h] [bp-30h]

  v3 = a2[2];
  v5 = *a2;
  v6 = a2[3];
  v7 = a2[1];
  v12[0] = v5;
  v12[1] = v7;
  v12[2] = v3;
  v12[3] = v6;
  v8 = a2[5];
  v9 = a2[6];
  v10 = a2[7];
  v12[4] = a2[4];
  v12[5] = v8;
  v12[6] = v9;
  v13 = v10;
  HIBYTE(v13) = HIBYTE(v10) & 0x3F | 0x40;
  LOBYTE(v12[0]) = v5 & 0xF8;
  sub_148968(s, (int)v12);
  v15[1] = v29 - v19;
  v14[3] = v31 + v21;
  v14[4] = v32 + v22;
  v14[0] = v28 + v18;
  v14[2] = v30 + v20;
  v14[5] = v33 + v23;
  v14[1] = v29 + v19;
  v14[6] = v34 + v24;
  v15[0] = v28 - v18;
  v15[3] = v31 - v21;
  v15[4] = v32 - v22;
  v14[7] = v35 + v25;
  v14[8] = v36 + v26;
  v14[9] = v37 + v27;
  v15[9] = v37 - v27;
  v15[8] = v36 - v26;
  v15[2] = v30 - v20;
  v15[5] = v33 - v23;
  v15[6] = v34 - v24;
  v15[7] = v35 - v25;
  sub_14622C(v16, v15);
  sub_141D74(v14, v14, v16);
  sub_141BC4(a1, v14);
  return sub_E07F8(v12, 0x20u);
}
