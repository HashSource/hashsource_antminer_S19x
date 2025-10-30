int __fastcall sub_1149C0(int a1, void *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v9; // r6
  int v10; // t1
  int v11; // r4
  int v12; // r1
  int v13; // r2

  if ( a2 != sub_D93D8() || (*(_DWORD *)(a1 + 128) & 0x100100) != 0x100 )
    return sub_125F80(&X509_it, a2, a1, a3, a4);
  if ( a4 )
    *a4 = 20;
  v10 = *(_DWORD *)(a1 + 176);
  v9 = (_DWORD *)(a1 + 176);
  v11 = v9[1];
  v12 = v9[2];
  v13 = v9[3];
  *a3 = v10;
  a3[1] = v11;
  a3[2] = v12;
  a3[3] = v13;
  a3[4] = v9[4];
  return 1;
}
