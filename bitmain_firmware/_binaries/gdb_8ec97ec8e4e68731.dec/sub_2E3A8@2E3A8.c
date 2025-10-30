int __fastcall sub_2E3A8(int a1, int a2, int a3, int a4)
{
  int v8; // r7
  int v9; // r6
  int v10; // r9
  int v11; // r10
  int v12; // r0
  int v13; // r4
  int v14; // r10
  int v15; // r7
  _DWORD v17[5]; // [sp+Ch] [bp-18h] BYREF

  v8 = sub_15ECB4(a2);
  v9 = sub_15ECAC(a2, 13);
  v10 = sub_160118(a2, v9, 4);
  v11 = sub_15ECAC(a2, 25);
  v12 = sub_2370C(v8);
  if ( *(_QWORD *)(a1 + 24) == 3835555844LL )
    v13 = 4;
  else
    v13 = 12;
  if ( (v10 & 1) != 0 )
    v14 = v11 | v12;
  else
    v14 = v11 & ~v12;
  v15 = ((int (__fastcall *)(int, int))loc_169FA0)(v8, v10);
  sub_250CF8(a3, 13, v9 + v13, 0);
  sub_250CF8(a3, 15, v15, 0);
  sub_250CF8(a3, 25, v14, 0);
  sub_15CD0C(v17, v9, a4);
  return sub_250DF8(a3, v17[0], v17[1], v17[2], v17[3], v17[4]);
}
