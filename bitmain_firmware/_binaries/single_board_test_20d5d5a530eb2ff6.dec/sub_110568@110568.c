int *__fastcall sub_110568(int a1, int a2)
{
  int v2; // r4
  int *v5; // r8
  bool v6; // cc
  unsigned int v7; // r1
  int v8; // r6
  int v9; // r0
  int v10; // r1
  int v11; // r2

  v2 = 0;
  v5 = 0;
  while ( 1 )
  {
    do
    {
      v6 = v2 < sub_10C010(*(_DWORD *)(a1 + 20));
      v7 = v2++;
      if ( !v6 )
        return v5;
      v8 = sub_10C01C(*(_DWORD **)(a1 + 20), v7);
      v9 = sub_10E660(v8);
    }
    while ( sub_10E6E0(a2, v9) );
    if ( !sub_10FD18(v8) )
      break;
    if ( !v5 && (v5 = (int *)sub_10BFCC()) == 0 || !sub_10BD3C(v5, v8) )
    {
      X509_free(v8, v10, v11);
      sub_10BFDC((int)v5, (void (__fastcall *)(int))X509_free);
      sub_D0048(11, 152, 65, (int)"crypto/x509/x509_vfy.c", 390);
      *(_DWORD *)(a1 + 96) = 17;
      return 0;
    }
  }
  sub_10BFDC((int)v5, (void (__fastcall *)(int))X509_free);
  sub_D0048(11, 152, 68, (int)"crypto/x509/x509_vfy.c", 381);
  *(_DWORD *)(a1 + 96) = 1;
  return 0;
}
