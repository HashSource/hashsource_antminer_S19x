int __fastcall sub_161C44(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int (__fastcall *a6)(_BYTE *, int, int, char *),
        char *s)
{
  int v10; // r0
  int v11; // r5
  int v12; // r4

  v10 = sub_B78F4(a1, 0);
  v11 = v10;
  if ( v10 )
  {
    v12 = sub_1619A8(v10, a2, 1, -1, a3, a4, a5, a6, s);
    BIO_vfree_0(v11);
    return v12;
  }
  else
  {
    sub_D0048(9, 125, 7, (int)"crypto/pem/pem_pk8.c", 185);
    return 0;
  }
}
