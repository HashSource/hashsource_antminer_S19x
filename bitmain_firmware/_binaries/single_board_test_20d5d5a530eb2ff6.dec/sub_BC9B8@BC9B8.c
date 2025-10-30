int __fastcall sub_BC9B8(int a1, int *a2)
{
  int v4; // r5
  _BYTE *v5; // r2
  int v7; // r0

  if ( sub_BD344() )
  {
    if ( *(_DWORD *)a1 )
    {
      sub_D0048(50, 109, 103, "crypto/ct/ct_oct.c", 164);
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 48) + 4;
      if ( !a2 )
        return v4;
      v5 = (_BYTE *)*a2;
      if ( *a2 )
      {
        *a2 = (int)&v5[v4];
LABEL_6:
        *v5 = *(_BYTE *)(a1 + 40);
        v5[1] = *(_BYTE *)(a1 + 41);
        v5[2] = BYTE1(*(_DWORD *)(a1 + 48));
        v5[3] = *(_DWORD *)(a1 + 48);
        memcpy(v5 + 4, *(const void **)(a1 + 44), *(_DWORD *)(a1 + 48));
        return v4;
      }
      v7 = CRYPTO_malloc(v4, "crypto/ct/ct_oct.c", 180);
      v5 = (_BYTE *)v7;
      if ( v7 )
      {
        *a2 = v7;
        goto LABEL_6;
      }
      sub_D0048(50, 109, 65, "crypto/ct/ct_oct.c", 182);
    }
  }
  else
  {
    sub_D0048(50, 109, 107, "crypto/ct/ct_oct.c", 159);
  }
  CRYPTO_free(0, "crypto/ct/ct_oct.c", 196);
  return -1;
}
