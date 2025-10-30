int __fastcall sub_1B5724(int a1)
{
  void *v2; // r4
  char *v3; // r6
  int v4; // r0
  int v5; // r2
  const char *v6; // r1
  int v7; // r12
  int v8; // r7
  int v9; // r1
  int v10; // r2
  int v11; // r1

  v2 = (void *)dword_487B44;
  v3 = (char *)dword_487B4C;
  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
  v5 = *(_DWORD *)(dword_487B44 + 8);
  v6 = (const char *)dword_487B4C;
  v7 = *(_DWORD *)(dword_487B44 + 4);
  v8 = dword_487B48;
  dword_487B44 = *(_DWORD *)dword_487B44;
  dword_487B48 = v5;
  dword_487B4C = v7;
  v10 = sub_1B52EC(v4, v6);
  if ( !v10 )
    sub_946E0("Can't find selector \"%s\"", v3);
  sub_1C3898(a1, v9, v10, 0);
  if ( v3 )
    free(v3);
  sub_1C3898(a1, v11, v8, v8 >> 31);
  free(v2);
  return v8;
}
