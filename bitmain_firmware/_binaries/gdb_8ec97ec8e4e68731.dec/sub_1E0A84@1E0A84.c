_DWORD *__fastcall sub_1E0A84(_DWORD *a1, int a2, int a3)
{
  int v3; // r3
  _DWORD *v7; // r0
  _DWORD *v8; // r8
  void *v9; // r0
  _DWORD **v10; // r3
  int v11; // r12
  _DWORD *v12; // r3
  _DWORD *v14; // r4

  v3 = *a1;
  if ( *a1 )
  {
    while ( *(_DWORD *)(v3 + 4) )
      v3 = *(_DWORD *)(v3 + 4);
    v14 = (_DWORD *)(v3 + 4);
  }
  else
  {
    v14 = a1;
  }
  v7 = sub_93028(8u);
  *v14 = v7;
  v7[1] = 0;
  v8 = (_DWORD *)*v14;
  v9 = sub_93028(0xCu);
  v10 = (_DWORD **)*v14;
  v11 = a1[1];
  *v8 = v9;
  v12 = *v10;
  a1[1] = v11 + 1;
  v12[1] = a2;
  *v12 = v11;
  v12[2] = a3;
  return v12;
}
