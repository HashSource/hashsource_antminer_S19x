int __fastcall sub_D3D4C(int a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // r6
  int v5; // r0
  _BOOL4 v6; // r4
  _DWORD *v8; // r5
  int v9; // r0
  int v10; // r6
  size_t v11; // r2

  v3 = __PAIR64__(a3, a2);
  v5 = sub_D8934(a1);
  v6 = v3 == 0;
  if ( !v3 )
    return 1;
  v8 = (_DWORD *)v5;
  if ( (_DWORD)v3 )
  {
    v9 = sub_D8AD4(a1);
    v10 = sub_124B24(v3, 8 * v9, v8);
    sub_E52C0(v8 + 72, v8, aria_encrypt);
    if ( v10 < 0 )
    {
      sub_D0048(6, 176, 176, (int)"crypto/evp/e_aria.c", 221);
      return v6;
    }
    else
    {
      if ( HIDWORD(v3) || v8[71] && (HIDWORD(v3) = v8[178]) != 0 )
      {
        sub_E56D4(v8 + 72, HIDWORD(v3), v8[179]);
        v8[71] = 1;
      }
      v8[70] = 1;
      return 1;
    }
  }
  else
  {
    v11 = *(_DWORD *)(v5 + 716);
    if ( *(_DWORD *)(v5 + 280) )
      sub_E56D4(v5 + 288, HIDWORD(v3), v11);
    else
      memcpy(*(void **)(v5 + 712), (const void *)HIDWORD(v3), v11);
    v8[71] = 1;
    v8[181] = 0;
    return 1;
  }
}
