int __fastcall sub_E1E50(int a1, _DWORD *a2, int *a3)
{
  _DWORD *v3; // r3
  int v6; // r1
  int v7; // r2
  int result; // r0
  int v9; // r1
  int v10; // r2

  v3 = *(_DWORD **)(a1 + 48);
  if ( !v3 )
  {
    v3 = sub_93094(1u, 0x18u);
    *(_DWORD *)(a1 + 48) = v3;
  }
  v6 = a2[1];
  v7 = a2[2];
  *v3 = *a2;
  v3[1] = v6;
  v3[2] = v7;
  result = *a3;
  v9 = a3[1];
  v10 = a3[2];
  v3[3] = *a3;
  v3[4] = v9;
  v3[5] = v10;
  return result;
}
