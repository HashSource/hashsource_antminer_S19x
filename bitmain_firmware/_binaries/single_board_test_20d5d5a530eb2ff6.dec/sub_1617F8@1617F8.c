int __fastcall sub_1617F8(int a1, int *a2, int (__fastcall *a3)(_BYTE *, int, _DWORD, char *), char *a4)
{
  int v7; // r0
  int v8; // r5
  int v9; // r4

  v7 = sub_B78F4(a1, 0);
  v8 = v7;
  if ( v7 )
  {
    v9 = sub_161748(v7, a2, a3, a4);
    BIO_vfree_0(v8);
    return v9;
  }
  else
  {
    sub_D0048(9, 121, 7, (int)"crypto/pem/pem_pk8.c", 200);
    return 0;
  }
}
