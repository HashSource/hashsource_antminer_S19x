int __fastcall sub_1114A8(int a1, int *a2, int a3)
{
  int v6; // r8
  int v7; // r0
  int *v8; // r4
  int v9; // r2
  int result; // r0
  int v11; // r1
  int *v12; // r12
  int v13; // r0
  int v14; // r2
  int v15; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r0
  int v21; // r2
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r12
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r0
  int v30; // r6
  int v31; // r4
  int v32; // r0
  int v33; // r2
  __int64 v34; // r0

  v6 = sub_15ECB4(a1);
  v7 = sub_110B00(a1, a2);
  v8 = (int *)v7;
  if ( !*(_DWORD *)(v7 + 48) )
  {
    v9 = *(_DWORD *)(v7 + 64);
    *(_DWORD *)(v7 + 48) = 1;
    if ( v9 )
      v9 = v7 + 56;
    sub_111F44(a1, v7 + 52, v9);
  }
  if ( !v8[13] || (result = ((int (__fastcall *)(int, int *, int))loc_111D34)(a1, v8 + 13, a3)) == 0 )
  {
    v11 = v8[3];
    v12 = (int *)(v11 + 24 * a3);
    switch ( v12[4] )
    {
      case 0:
      case 5:
        v13 = a1;
        v14 = a3;
        v15 = a3;
        return sub_160F84(v13, v15, v14);
      case 1:
        return sub_160EE0(a1, a3);
      case 2:
        v33 = *(_DWORD *)(v11 + 24 * a3);
        v20 = a1;
        v18 = a3;
        v19 = v33 + *v8;
        return sub_160F8C(v20, v18, v19);
      case 3:
        v16 = sub_117648(v6, v11, *(_DWORD *)(24 * a3 + v11), *(_DWORD *)(24 * a3 + v11 + 4));
        v15 = a3;
        v14 = v16;
        v13 = a1;
        return sub_160F84(v13, v15, v14);
      case 4:
        v17 = sub_10EC48(*(_DWORD *)(v11 + 24 * a3), v8[10], v12[2], v12[3], v8[10], v8[11], a1, *v8, 1);
        v18 = a3;
        v19 = v17;
        v20 = a1;
        return sub_160F8C(v20, v18, v19);
      case 6:
        v25 = *(_DWORD *)(v11 + 24 * a3);
        v26 = a1;
        v27 = a3;
        v28 = v25 + *v8;
        return sub_160FC0(v26, v27, v28, 0);
      case 7:
        v29 = sub_10EC48(*(_DWORD *)(v11 + 24 * a3), v8[10], v12[2], v12[3], v8[10], v8[11], a1, *v8, 1);
        v27 = a3;
        v28 = v29;
        v26 = a1;
        return sub_160FC0(v26, v27, v28, 0);
      case 8:
        return (*(int (__fastcall **)(int, int *, int))(v11 + 24 * a3))(a1, a2, a3);
      case 10:
        v30 = *(_DWORD *)(v11 + 24 * a3);
        v31 = sub_117648(v6, v11, v8[4], v8[5]);
        v32 = sub_15ECAC(a1, v31);
        v23 = v31;
        v24 = v30 + v32;
        goto LABEL_20;
      case 11:
        v24 = *v8;
        v23 = a3;
LABEL_20:
        v22 = a1;
        goto LABEL_14;
      case 12:
        v21 = *(_DWORD *)(v11 + 24 * a3);
        v22 = a1;
        v23 = a3;
        v24 = v21 + *v8;
LABEL_14:
        result = sub_161084(v22, v23, v24);
        break;
      default:
        v34 = sub_94700((int)"dwarf2-frame.c", 1309, "Unknown register rule.");
        result = sub_111728(v34, HIDWORD(v34));
        break;
    }
  }
  return result;
}
