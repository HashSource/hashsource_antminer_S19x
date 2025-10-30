int __fastcall sub_D2ADC(int a1, int a2, const void *a3)
{
  int v6; // r0
  bool v7; // zf
  int v8; // r9
  _DWORD *v9; // r4
  int v10; // r0
  void *v11; // r0

  v6 = sub_D8934(a1);
  v7 = a3 == 0;
  if ( !a3 )
    v7 = a2 == 0;
  v8 = v7;
  if ( !v7 )
  {
    v9 = (_DWORD *)v6;
    if ( a2 )
    {
      v10 = sub_D8AD4(a1);
      sub_123194(a2, 8 * v10, v9);
      sub_E23AC(v9 + 70, v9[67], v9[66], v9, AES_encrypt);
      v9[82] = v8;
      v9[62] = 1;
    }
    if ( a3 )
    {
      v11 = (void *)sub_D8AC0(a1);
      memcpy(v11, a3, 15 - v9[66]);
      v9[63] = 1;
    }
  }
  return 1;
}
