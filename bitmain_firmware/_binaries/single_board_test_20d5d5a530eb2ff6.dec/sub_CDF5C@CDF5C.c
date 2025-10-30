int __fastcall sub_CDF5C(int a1, int a2)
{
  unsigned int *v2; // r2
  unsigned int v3; // r3
  signed int v4; // r2
  unsigned int v6; // r3
  unsigned int *v7; // r4
  unsigned int v8; // r5
  unsigned int v9; // r3
  bool v10; // zf
  unsigned int v11; // lr
  void (__fastcall *v14)(int); // r3

  if ( !a1 )
    return 1;
  if ( !a2 )
  {
    __dmb(0xBu);
    v6 = *(_DWORD *)(a1 + 80);
    v7 = (unsigned int *)(a1 + 80);
    __dmb(0xBu);
    v4 = v6 - 1;
    v8 = v6;
    __dmb(0xBu);
    while ( 1 )
    {
      do
      {
        v9 = __ldrex(v7);
        v10 = v9 == v8;
        if ( v9 != v8 )
          break;
        v11 = __strex(v4, v7);
        v10 = v11 == 0;
      }
      while ( v11 );
      __dmb(0xBu);
      if ( v10 )
        break;
      v8 = v9;
      v4 = v9 - 1;
      __dmb(0xBu);
    }
LABEL_6:
    if ( v4 > 0 )
      return 1;
    goto LABEL_15;
  }
  v2 = (unsigned int *)(a1 + 80);
  do
    v3 = __ldrex(v2);
  while ( __strex(v3 - 1, v2) );
  v4 = v3 - 1;
  if ( v3 != 1 )
    goto LABEL_6;
  __dmb(0xBu);
LABEL_15:
  sub_CF34C();
  sub_CEE48(a1);
  v14 = *(void (__fastcall **)(int))(a1 + 44);
  if ( v14 )
    v14(a1);
  sub_CE2BC(a1, a2);
  sub_DC2BC(10, a1, a1 + 88);
  CRYPTO_free(a1, "crypto/engine/eng_lib.c", 98);
  return 1;
}
