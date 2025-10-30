int __fastcall sub_EA46C(int a1, int a2, int a3)
{
  int v7; // r10
  unsigned int v8; // r4
  _DWORD *v9; // r0
  _DWORD *v10; // r5
  int v11; // r1
  int v12; // r2
  int v13; // r4
  int v14; // r0
  void *v15; // r0

  if ( !sub_EA278() )
    return 0;
  v7 = a2 & 0x8000;
  v8 = a2 & 0xFFFF7FFF;
  v9 = CRYPTO_malloc((void *)0x10);
  v10 = v9;
  if ( !v9 )
    return 0;
  *v9 = v8;
  v9[1] = v7;
  v9[2] = a1;
  v9[3] = a3;
  sub_10C554(dword_6E1A98);
  v13 = (int)sub_DF7A0((int *)dword_6E1A94, v10);
  if ( v13 )
  {
    if ( dword_6E1A90 )
    {
      if ( sub_10C010(dword_6E1A90, v11, v12) > *(_DWORD *)v13 )
      {
        v14 = sub_10C01C(dword_6E1A90, *(_DWORD *)v13);
        (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v14 + 8))(
          *(_DWORD *)(v13 + 8),
          *(_DWORD *)v13,
          *(_DWORD *)(v13 + 12));
      }
    }
    v15 = (void *)v13;
    v13 = 1;
    CRYPTO_free(v15);
  }
  else if ( sub_DFC3C(dword_6E1A94) )
  {
    CRYPTO_free(v10);
  }
  else
  {
    v13 = 1;
  }
  sub_10C564(dword_6E1A98);
  return v13;
}
