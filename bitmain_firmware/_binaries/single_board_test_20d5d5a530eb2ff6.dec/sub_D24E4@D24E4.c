int __fastcall sub_D24E4(int a1, int a2, const void *a3)
{
  int v6; // r0
  bool v7; // zf
  int v8; // r8
  _DWORD *v9; // r4
  size_t v11; // r2

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
    sub_123194(a2, 8 * *(_DWORD *)(a1 + 88), v6);
    sub_E52C0(v9 + 64, v9, AES_encrypt);
    v9[175] = v8;
    if ( a3 || v9[63] && (a3 = (const void *)v9[170]) != 0 )
    {
      sub_E56D4(v9 + 64, a3, v9[171]);
      v9[63] = 1;
    }
    v9[62] = 1;
    return 1;
  }
  v11 = *(_DWORD *)(v6 + 684);
  if ( *(_DWORD *)(v6 + 248) )
    sub_E56D4(v6 + 256, a3, v11);
  else
    memcpy(*(void **)(v6 + 680), a3, v11);
  v9[63] = 1;
  v9[173] = 0;
  return 1;
}
