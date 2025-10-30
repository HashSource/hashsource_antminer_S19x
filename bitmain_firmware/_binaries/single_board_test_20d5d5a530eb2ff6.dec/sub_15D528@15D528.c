int __fastcall sub_15D528(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v8; // r6
  unsigned int v9; // r8
  int v10; // r4
  int v11; // r0
  int v12; // r10
  int v13; // r0

  v8 = *(_DWORD *)(sub_D8920(a1) + 4);
  if ( v8 <= a4 )
  {
    v9 = a4 - v8;
    v10 = a3;
    do
    {
      while ( 1 )
      {
        v12 = sub_D8934(a1);
        if ( sub_D8924(a1) )
          break;
        v11 = v10;
        v10 += v8;
        SM4_decrypt(v11, a2, v12);
        a2 += v8;
        if ( v9 < v10 - a3 )
          return 1;
      }
      v13 = v10;
      v10 += v8;
      SM4_encrypt(v13, a2, v12);
      a2 += v8;
    }
    while ( v9 >= v10 - a3 );
  }
  return 1;
}
