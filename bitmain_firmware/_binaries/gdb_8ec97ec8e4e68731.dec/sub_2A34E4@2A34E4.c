int __fastcall sub_2A34E4(int a1, __int64 a2, int a3)
{
  int v6; // r4
  int v7; // r5
  int v9; // r3
  int v10; // r0

  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 8);
  if ( v6 )
    goto LABEL_2;
  v10 = sub_323AE0(16, sub_2A2DEC, sub_2A2DF4, 0, j_calloc, free);
  v6 = v10;
  if ( v10 )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 160) + 8) = v10;
LABEL_2:
    v7 = sub_2AD09C(a1, 16);
    *(_QWORD *)v7 = a2;
    *(_DWORD *)(v7 + 8) = a3;
    *(_DWORD *)sub_324030(v6, v7, 1) = v7;
    v9 = *(_DWORD *)(a3 + 136);
    *(_DWORD *)(v9 + 24) = v6;
    *(_QWORD *)(v9 + 32) = a2;
    return 1;
  }
  return 0;
}
