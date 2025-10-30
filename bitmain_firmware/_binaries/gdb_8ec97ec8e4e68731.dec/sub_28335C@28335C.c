int __fastcall sub_28335C(int a1, int a2)
{
  int v3; // r8
  int v5; // r9
  size_t v6; // r1
  void *v7; // r0
  void *v8; // r0
  int v9; // r3
  int v10; // r2
  _DWORD *v11; // r1

  v3 = dword_48ABBC;
  v5 = dword_4900E0;
  if ( dword_48ABBC + 2 >= dword_48ABC0 )
  {
    v6 = 4 * (dword_48ABC0 + 64);
    dword_48ABC0 += 64;
    v7 = sub_93050((void *)dword_4900E0, v6);
    v3 = dword_48ABBC;
    v5 = (int)v7;
    dword_4900E0 = (int)v7;
  }
  v8 = sub_93028(8u);
  v9 = dword_4900E0;
  v10 = dword_48ABBC;
  *(_DWORD *)(v5 + 4 * v3) = v8;
  v11 = *(_DWORD **)(v9 + 4 * v10);
  dword_48ABBC = v10 + 1;
  *v11 = a1;
  v11[1] = a2;
  *(_DWORD *)(v9 + 4 * v10 + 4) = 0;
  return v10 + 1;
}
