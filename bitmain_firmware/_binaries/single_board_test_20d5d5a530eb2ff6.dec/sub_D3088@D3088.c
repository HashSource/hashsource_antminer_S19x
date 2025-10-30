int __fastcall sub_D3088(int a1, int a2, const void *a3)
{
  int v6; // r0
  bool v7; // zf
  int v8; // r10
  _DWORD *v10; // r5
  int v11; // r0
  int v12; // r0

  v6 = sub_D8934(a1);
  v7 = a3 == 0;
  if ( !a3 )
    v7 = a2 == 0;
  v8 = v7;
  if ( v7 )
    return 1;
  v10 = (_DWORD *)v6;
  if ( a2 )
  {
    v11 = sub_D8AD4(a1);
    sub_123194(a2, 8 * v11, v10);
    v12 = sub_D8AD4(a1);
    sub_123A94(a2, 8 * v12, v10 + 62);
    if ( !sub_E78E8(v10 + 126, v10, v10 + 62, AES_encrypt, AES_decrypt, v8) )
      return 0;
    if ( a3 || v10[125] && (a3 = (const void *)v10[164]) != 0 )
    {
      if ( sub_E7F54(v10 + 126, a3, v10[179], v10[180]) != 1 )
        return 0;
      v10[125] = 1;
    }
    v10[124] = 1;
    return 1;
  }
  else
  {
    if ( *(_DWORD *)(v6 + 496) )
      sub_E7F54(v6 + 504, a3, *(_DWORD *)(v6 + 716), *(_DWORD *)(v6 + 720));
    else
      memcpy(*(void **)(v6 + 656), a3, *(_DWORD *)(v6 + 716));
    v10[125] = 1;
    return 1;
  }
}
