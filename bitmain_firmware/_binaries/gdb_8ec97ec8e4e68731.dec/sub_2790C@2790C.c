void __fastcall sub_2790C(int a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // r8
  __int64 v10; // r6
  int v11; // r3
  int v12; // r3
  __int64 v13; // [sp+10h] [bp-Ch]

  *(_QWORD *)(a2 + 8) = sub_20B88(a1, 0);
  *(_QWORD *)(a2 + 16) = sub_20B88(a1, 1);
  *(_QWORD *)(a2 + 24) = sub_20B88(a1, 2);
  v9 = sub_25A78(a1, a2, a3);
  v10 = sub_25A78(a1, a2, a4);
  v13 = sub_25A78(a1, a2, a5);
  sub_25B70(a1, a2, 0, v11, v9, SHIDWORD(v9), 4);
  sub_25B70(a1, a2, 1, v12, v10, SHIDWORD(v10), 4);
  sub_25B70(a1, a2, 2, SHIDWORD(v13), v13, SHIDWORD(v13), 4);
  *(_DWORD *)(a2 + 136) = a3;
  *(_DWORD *)(a2 + 212) = sub_279FC;
}
