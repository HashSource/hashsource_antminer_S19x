int *__fastcall sub_E236C(_DWORD *a1, int a2, int a3)
{
  int v4; // r4
  int v6; // r0
  int v7; // r1
  int v8; // r3
  int *v9; // r4
  bool v10; // zf
  int v11; // r1
  int v13; // r3

  v4 = a1[7];
  if ( v4 != a1[6] && !*(_DWORD *)(v4 - 20) && *(_DWORD *)(v4 - 32) == *(_DWORD *)(v4 - 28) )
  {
    v7 = *(_DWORD *)(a3 + 4);
    v13 = *(_DWORD *)(a3 + 8);
    v9 = (int *)(v4 - 52);
    v9[8] = a2;
    if ( v7 != v13 )
      goto LABEL_5;
LABEL_10:
    sub_E4118(a3);
    goto LABEL_8;
  }
  v6 = sub_E21EC(a1, 0, 0);
  v7 = *(_DWORD *)(a3 + 4);
  v8 = *(_DWORD *)(a3 + 8);
  v9 = (int *)v6;
  *(_DWORD *)(v6 + 32) = a2;
  if ( v7 == v8 )
    goto LABEL_10;
LABEL_5:
  v10 = v7 == 0;
  v11 = v7 + 4;
  if ( !v10 )
    *(_DWORD *)(v11 - 4) = v9[10];
  *(_DWORD *)(a3 + 4) = v11;
LABEL_8:
  sub_E0D88(v9, "new gap");
  return v9;
}
