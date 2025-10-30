int *__fastcall sub_1637B0(int a1, int a2)
{
  int v4; // r3
  _DWORD *v5; // r0
  _DWORD *v6; // r8
  void *v7; // r0
  int **v8; // r3
  int v9; // r2
  int *v10; // r3
  int *v12; // r4

  v4 = dword_487784;
  if ( dword_487784 )
  {
    while ( *(_DWORD *)(v4 + 4) )
      v4 = *(_DWORD *)(v4 + 4);
    v12 = (int *)(v4 + 4);
  }
  else
  {
    v12 = &dword_487784;
  }
  v5 = sub_93028(8u);
  *v12 = (int)v5;
  v5[1] = 0;
  v6 = (_DWORD *)*v12;
  v7 = sub_93028(0x10u);
  v8 = (int **)*v12;
  v9 = dword_487780;
  *v6 = v7;
  v10 = *v8;
  dword_487780 = v9 + 1;
  v10[2] = a1;
  v10[3] = a2;
  v10[1] = 1;
  *v10 = v9;
  return v10;
}
