int __fastcall sub_DEA4C(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r4

  v3 = *(_DWORD **)(a1 + 20);
  if ( *v3 )
  {
    if ( v3[2] )
    {
      return sub_15F534(*v3, v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v3[7], v3[8], v3[9], v3[10], v3[11], a2, *a3);
    }
    else
    {
      sub_D0048(52, 109, 111, (int)"crypto/kdf/scrypt.c", 227);
      return 0;
    }
  }
  else
  {
    sub_D0048(52, 109, 110, (int)"crypto/kdf/scrypt.c", 222);
    return 0;
  }
}
