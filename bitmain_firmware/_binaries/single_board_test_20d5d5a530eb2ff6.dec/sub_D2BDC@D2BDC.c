int __fastcall sub_D2BDC(int a1, void *a2, void *a3, size_t a4)
{
  int v8; // r9
  int v9; // r0
  int v10; // r10
  size_t v11; // r3
  int result; // r0

  v8 = sub_D8934(a1);
  v9 = sub_D8944(a1);
  if ( !a3 )
    return 0;
  if ( !a4 )
    return -1;
  v10 = v9;
  if ( !sub_D8924(a1) )
  {
    if ( a4 <= 0xF )
      return -1;
LABEL_5:
    v11 = a4 << 29;
    if ( a4 << 29 )
      return -1;
    goto LABEL_9;
  }
  if ( v10 != 4 )
    goto LABEL_5;
LABEL_9:
  if ( sub_D7A88(a2, a3, a4, v11) )
  {
    sub_D0048(6, 170, 162, (int)"crypto/evp/e_aes.c", 3827);
    return 0;
  }
  else if ( a2 )
  {
    if ( v10 == 4 )
    {
      if ( sub_D8924(a1) )
      {
        result = sub_E93F0(v8, *(_DWORD *)(v8 + 248), a2, a3, a4, (int)AES_encrypt);
        if ( !result )
          return -1;
      }
      else
      {
        result = sub_E9498(v8, *(_DWORD *)(v8 + 248), a2, a3, a4, AES_decrypt);
        if ( !result )
          return -1;
      }
    }
    else if ( sub_D8924(a1) )
    {
      result = sub_E92B8(v8, *(_DWORD *)(v8 + 248), (int)a2, a3, a4, (int)AES_encrypt);
      if ( !result )
        return -1;
    }
    else
    {
      result = sub_E93A8(v8, *(_DWORD *)(v8 + 248), a2, a3, a4, AES_decrypt);
      if ( !result )
        return -1;
    }
  }
  else if ( sub_D8924(a1) )
  {
    if ( v10 == 4 )
      a4 = (a4 + 7) & 0xFFFFFFF8;
    return a4 + 8;
  }
  else
  {
    return a4 - 8;
  }
  return result;
}
