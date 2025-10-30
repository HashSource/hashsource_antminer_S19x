int __fastcall sub_D1A44(int a1, int a2, int a3, int a4)
{
  int v7; // r6
  int v8; // r0
  unsigned int v9; // r5
  bool v10; // zf
  int v11; // r0
  int result; // r0
  int v13; // r0
  bool v14; // nf

  v7 = sub_D8934(a1);
  v8 = sub_D8920(a1);
  v9 = ((unsigned int)&loc_F0004 + 3) & sub_D8928(v8);
  v10 = v9 == 2;
  if ( v9 - 1 <= 1 )
    v10 = a4 == 0;
  if ( v10 )
  {
    v13 = sub_D8AD4(a1);
    result = sub_123A94(a2, 8 * v13, v7);
    *(_DWORD *)(v7 + 248) = AES_decrypt;
    if ( v9 != 2 )
    {
LABEL_5:
      *(_DWORD *)(v7 + 252) = 0;
      if ( result >= 0 )
        return 1;
      goto LABEL_13;
    }
  }
  else
  {
    v11 = sub_D8AD4(a1);
    result = sub_123194(a2, 8 * v11, v7);
    *(_DWORD *)(v7 + 248) = AES_encrypt;
    if ( v9 != 2 )
      goto LABEL_5;
  }
  v14 = result < 0;
  if ( result >= 0 )
    result = 1;
  *(_DWORD *)(v7 + 252) = AES_cbc_encrypt;
  if ( v14 )
  {
LABEL_13:
    sub_D0048(6, 133, 143, (int)"crypto/evp/e_aes.c", 2695);
    return 0;
  }
  return result;
}
