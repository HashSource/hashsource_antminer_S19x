int __fastcall sub_D4DC4(int a1, int a2, int a3, int a4)
{
  int v7; // r4
  int v8; // r0
  int v9; // r0
  int v10; // r2
  bool v11; // zf
  int v12; // r3

  v7 = sub_D8934(a1);
  v8 = sub_D8AD4(a1);
  if ( sub_136FC8(a2, 8 * v8, v7) < 0 )
  {
    sub_D0048(6, 159, 157, (int)"crypto/evp/e_camellia.c", 221);
    return 0;
  }
  else
  {
    v9 = sub_D8920(a1);
    v10 = sub_D8928(v9) & 0xF0007;
    v11 = v10 == 2;
    if ( (unsigned int)(v10 - 1) <= 1 )
      v11 = a4 == 0;
    v12 = v11;
    if ( v11 )
    {
      *(_DWORD *)(v7 + 280) = Camellia_decrypt;
      if ( v10 == 2 )
        v12 = (int)Camellia_cbc_encrypt;
      else
        v12 = 0;
    }
    else
    {
      *(_DWORD *)(v7 + 280) = Camellia_encrypt;
      if ( v10 == 2 )
        v12 = (int)Camellia_cbc_encrypt;
    }
    *(_DWORD *)(v7 + 284) = v12;
    return 1;
  }
}
