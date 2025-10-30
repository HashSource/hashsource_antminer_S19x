int __fastcall sub_A98C0(int a1)
{
  int v2; // r0
  int v3; // r2
  bool v4; // zf
  int v6; // r5
  int v7; // r0
  int v8; // r8
  int v9; // r9
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r8
  void *v14; // r10
  int v15; // r1
  int v16; // r0
  int v17; // r0
  __int64 v18; // r8
  int v19; // r8
  int v20; // r0
  int v21; // r0

  v2 = sub_26BC70(a1);
  v3 = **(char **)(v2 + 24);
  v4 = v3 == 18;
  if ( v3 != 18 )
    v4 = v3 == 1;
  if ( v4 )
    return a1;
  v6 = v2;
  v7 = sub_A93B4(a1, "_tag", 0);
  v8 = v7;
  if ( !v7 )
    return a1;
  if ( sub_A93B4(v7, "tsd", 1) )
    return a1;
  v9 = sub_194438(14);
  v10 = sub_16F654(v9);
  v11 = sub_1946C8(v9, v10, "storage_offset");
  v12 = sub_1700C0(v11);
  v13 = sub_2647C8(v12, v8);
  if ( !v13 )
    return a1;
  v14 = sub_92E28();
  v16 = ((int (__fastcall *)(int, int, int, int))loc_25CA94)(v13, v15, -2, -1);
  v17 = sub_26210C(v16);
  v18 = sub_26EB1C(v17);
  sub_92E40((int)v14);
  if ( (unsigned __int64)(v18 + 1) <= 1 )
    return a1;
  v19 = ((int (__fastcall *)(int))loc_26C09C)(a1) + (SHIDWORD(v18) >> 31) - (v18 ^ (SHIDWORD(v18) >> 31));
  v20 = sub_A1D0C(v6, 0, v19);
  if ( v20 && (v21 = sub_A988C(v20)) != 0 )
    return sub_26DD30(v21, 0, v19);
  else
    return a1;
}
