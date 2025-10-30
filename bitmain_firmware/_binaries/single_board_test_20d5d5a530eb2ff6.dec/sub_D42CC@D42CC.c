int __fastcall sub_D42CC(int a1, int a2, const void *a3)
{
  int v6; // r0
  bool v7; // zf
  int v8; // r7
  _DWORD *v9; // r4
  int v10; // r0
  int v11; // r5
  void *v12; // r0

  v6 = sub_D8934(a1);
  v7 = a3 == 0;
  if ( !a3 )
    v7 = a2 == 0;
  v8 = v7;
  if ( v7 )
    return 1;
  v9 = (_DWORD *)v6;
  if ( a2 )
  {
    v10 = sub_D8AD4(a1);
    v11 = sub_124B24(a2, 8 * v10, v9);
    sub_E23AC(v9 + 78, v9[75], v9[74], v9, aria_encrypt);
    if ( v11 < 0 )
    {
      sub_D0048(6, 175, 176, (int)"crypto/evp/e_aria.c", 518);
      return v8;
    }
    v9[90] = v8;
    v9[70] = 1;
  }
  if ( !a3 )
    return 1;
  v12 = (void *)sub_D8AC0(a1);
  memcpy(v12, a3, 15 - v9[74]);
  v9[71] = 1;
  return 1;
}
