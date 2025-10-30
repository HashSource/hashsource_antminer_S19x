int __fastcall sub_10D5B0(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r5
  _DWORD *v7; // r7
  int v8; // r5
  int v9; // r4
  bool v10; // cc
  unsigned int v11; // r1
  _DWORD *v12; // r6
  int v13; // r1

  if ( a3 != 1 )
    return sub_10D390(a1, a2, a3);
  v5 = sub_B782C(a2, "r");
  v6 = v5;
  if ( v5 )
  {
    v7 = (_DWORD *)sub_16120C(v5, 0, 0, &byte_1A4198);
    BIO_vfree_0(v6);
    if ( v7 )
    {
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        v10 = v9 < sub_10C010((int)v7);
        v11 = v9++;
        if ( !v10 )
          break;
        v12 = (_DWORD *)sub_10C01C(v7, v11);
        if ( *v12 )
        {
          if ( !sub_10F74C(*(_DWORD *)(a1 + 16), *v12) )
            goto LABEL_16;
          ++v8;
        }
        v13 = v12[1];
        if ( v13 )
        {
          if ( !sub_10F6C4(*(_DWORD *)(a1 + 16), v13) )
            goto LABEL_16;
          ++v8;
        }
      }
      if ( !v8 )
        sub_D0048(11, 132, 136, (int)"crypto/x509/by_file.c", 223);
LABEL_16:
      sub_10BFDC((int)v7, (void (__fastcall *)(int))X509_INFO_free);
      return v8;
    }
    else
    {
      sub_D0048(11, 132, 9, (int)"crypto/x509/by_file.c", 205);
      return 0;
    }
  }
  else
  {
    sub_D0048(11, 132, 2, (int)"crypto/x509/by_file.c", 199);
    return 0;
  }
}
