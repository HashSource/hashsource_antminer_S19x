int __fastcall sub_1723CC(int a1, size_t *a2, _DWORD *a3, int a4, unsigned __int8 *a5)
{
  int v8; // r0
  int v9; // r4
  int v10; // r3
  int v11; // r0

  if ( (a4 & 0x1000) == 0 )
  {
    sub_126238(a5, a1, a2);
    return 1;
  }
  v8 = sub_172D78(a1, a2, a5);
  v9 = v8;
  if ( v8 )
  {
    sub_172298(a3, v8, a4);
    sub_B6ECC(v9, 11, 0, 0);
    do
    {
      v10 = sub_B70E8(v9);
      v11 = v9;
      v9 = v10;
      BIO_vfree_0(v11);
    }
    while ( a1 != v9 );
    return 1;
  }
  sub_D0048(13, 211, 65, (int)"crypto/asn1/asn_mime.c", 75);
  return 0;
}
