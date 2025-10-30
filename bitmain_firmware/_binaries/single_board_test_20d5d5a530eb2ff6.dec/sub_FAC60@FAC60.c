int __fastcall sub_FAC60(int a1, int a2, int *a3, int a4, int a5)
{
  _DWORD *v6; // r4
  int v10; // r3
  int result; // r0
  int v12; // r9
  void *v13; // r0
  void *v14; // r0

  v6 = *(_DWORD **)(a1 + 20);
  v10 = *(_DWORD *)(a1 + 8);
  if ( v6[5] == 4 )
  {
    v12 = sub_F7ED8(*(_DWORD *)(v10 + 24));
    v13 = (void *)v6[10];
    if ( !v13 )
    {
      v14 = (void *)sub_D9AF8(*(_DWORD *)(a1 + 8));
      v13 = CRYPTO_malloc(v14);
      v6[10] = v13;
      if ( !v13 )
      {
        sub_D0048(4, 167, 65, (int)"crypto/rsa/rsa_pmeth.c", 107);
        return -1;
      }
    }
    if ( !sub_166530(v13, v12, a4, a5, v6[11], v6[12], v6[6], v6[7]) )
      return -1;
    result = sub_F7EF0(v12, v6[10], a2, *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24));
  }
  else
  {
    result = sub_F7EF0(a5, a4, a2, *(_DWORD *)(v10 + 24));
  }
  if ( result >= 0 )
  {
    *a3 = result;
    return 1;
  }
  return result;
}
