int __fastcall sub_1E6438(int a1, int a2, int a3, int a4, __int64 a5, int *a6)
{
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r6
  void *v12; // r0
  signed int v13; // r4
  int v14; // r0
  int v15; // r0
  signed int v17; // [sp+Ch] [bp-10h] BYREF
  int v18; // [sp+10h] [bp-Ch] BYREF
  int v19; // [sp+14h] [bp-8h] BYREF

  v9 = sub_16F654(a1);
  v10 = ((int (__fastcall *)(int))loc_1E2770)(v9);
  v11 = (_DWORD *)dword_488C94;
  v17 = *(_DWORD *)dword_488C94;
  v18 = sub_1E2890(v10);
  sub_1E27BC(a2);
  sub_1E1694((void **)&v17, &v18, "vFile:pwrite:");
  sub_1E1304(&v17, &v18, a2);
  sub_1E1694((void **)&v17, &v18, (char *)&word_3D7D40);
  sub_1E1304(&v17, &v18, a5);
  v12 = sub_1E1694((void **)&v17, &v18, (char *)&word_3D7D40);
  v13 = v17;
  v14 = sub_1E2890((int)v12);
  v15 = sub_995E4(a3, a4, 1, v13, &v19, v14 - (v17 - *v11));
  return sub_1E6030(v17 + v15 - *v11, 13, a6, 0, 0);
}
