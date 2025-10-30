int __fastcall sub_FAD0C(int a1, int a2, int *a3, int a4, int a5)
{
  _DWORD *v6; // r6
  int v9; // r0
  int result; // r0
  int v11; // r2
  void *v12; // r0
  void *v13; // r0
  int v14; // [sp+1Ch] [bp-18h]

  v6 = *(_DWORD **)(a1 + 20);
  if ( v6[5] != 4 )
  {
    v9 = sub_F7F10(a5, a4, a2, *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24));
LABEL_3:
    *a3 = ~(v9 >> 31) & v9 | (v9 >> 31) & *a3;
    return (((v9 >> 31) & 1) == 0) | (v9 >> 31) & v9;
  }
  v11 = v6[10];
  if ( v11
    || (v14 = a4,
        v12 = (void *)sub_D9AF8(*(_DWORD *)(a1 + 8)),
        v13 = CRYPTO_malloc(v12),
        a4 = v14,
        v11 = (int)v13,
        (v6[10] = v13) != 0) )
  {
    result = sub_F7F10(a5, a4, v11, *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24));
    if ( result > 0 )
    {
      v9 = sub_1669F4(a2, result, v6[10], result, result, v6[11], v6[12], v6[6], v6[7]);
      goto LABEL_3;
    }
  }
  else
  {
    sub_D0048(4, 167, 65, (int)"crypto/rsa/rsa_pmeth.c", 107);
    return -1;
  }
  return result;
}
