_DWORD *__fastcall sub_2EF230(int a1, int a2, unsigned int a3)
{
  _DWORD *v6; // r0
  int v7; // r2
  int v8; // r12
  int v9; // r5
  _DWORD *v10; // r12
  _DWORD *i; // r3

  v6 = (_DWORD *)sub_2ACBF4(a1, 20);
  *v6 = 0;
  v7 = a2 + 575;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v8 = *(_DWORD *)(a1 + 160);
  v6[1] = a3;
  v9 = v8 + 4 * a2;
  v10 = (_DWORD *)(v8 + 4 * v7);
  for ( i = *(_DWORD **)(v9 + 2300); i && a3 >= i[1]; i = (_DWORD *)*i )
    v10 = i;
  *v6 = i;
  *v10 = v6;
  return v6 + 2;
}
