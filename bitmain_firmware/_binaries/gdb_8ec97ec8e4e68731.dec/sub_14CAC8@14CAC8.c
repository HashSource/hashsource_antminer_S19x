int __fastcall sub_14CAC8(int a1, int *a2, int *a3, int a4)
{
  int v6; // r4
  int v9; // r0
  int v10; // r9
  __int64 v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r4
  int v14; // r10
  int v15; // r2
  int v17; // r0
  int v18; // r0

  v6 = *a3;
  v9 = sub_26BC70(a1);
  v10 = sub_171258(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 24) + 24) + 12));
  v11 = *(_QWORD *)&a2[4 * v6 + 8];
  v12 = sub_26725C(v11, HIDWORD(v11));
  v13 = v12;
  *a3 += 3;
  if ( v12 > 1 )
  {
    v17 = sub_14C9EC(0, a2, a3, a4);
    v14 = sub_26EB1C(v17);
    if ( (v13 & 0xFFFFFFFD) == 0 )
      goto LABEL_3;
LABEL_6:
    v18 = sub_14C9EC(0, a2, a3, a4);
    v15 = sub_26EB1C(v18);
    return sub_264570(a1, v14, 1 - v14 + v15);
  }
  v14 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + 8);
  if ( (v12 & 0xFFFFFFFD) != 0 )
    goto LABEL_6;
LABEL_3:
  v15 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v10 + 24) + 24) + 24);
  return sub_264570(a1, v14, 1 - v14 + v15);
}
