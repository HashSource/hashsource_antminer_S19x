int __fastcall sub_17243C(int a1, size_t *a2, _DWORD *a3, int a4, const char *a5, unsigned __int8 *a6)
{
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r7
  int v14; // r6
  int v15; // r4

  v10 = sub_B550C(a1, "-----BEGIN %s-----\n", a5);
  v11 = sub_17D14C(v10);
  v12 = sub_B655C(v11);
  v13 = (int)v12;
  if ( v12 )
  {
    v14 = sub_B70C0((int)v12, a1);
    v15 = sub_1723CC(v14, a2, a3, a4, a6);
    sub_B6ECC(v14, 11, 0, 0);
    sub_B70E8(v14);
    BIO_vfree_0(v13);
  }
  else
  {
    v15 = 0;
    sub_D0048(13, 210, 65, (int)"crypto/asn1/asn_mime.c", 105);
  }
  sub_B550C(a1, "-----END %s-----\n", a5);
  return v15;
}
