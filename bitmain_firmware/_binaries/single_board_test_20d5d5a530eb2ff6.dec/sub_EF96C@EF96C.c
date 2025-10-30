int __fastcall sub_EF96C(int *a1, int *a2)
{
  int v4; // r0
  _DWORD *v5; // r4
  char *v6; // r0
  char *v7; // r0
  int v8; // r0
  int v10; // r2

  v4 = sub_15C394();
  v5 = sub_B655C(v4);
  if ( v5 )
  {
    v6 = sub_EAC84(*a2);
    v7 = sub_EAAB4((unsigned int)v6);
    v8 = sub_D99DC((int)v7);
    if ( !v8 )
    {
      sub_D0048(33, 125, 109, (int)"crypto/pkcs7/pk7_doit.c", 66);
      goto LABEL_9;
    }
    sub_B6ECC((int)v5, 111, 0, v8);
    if ( !*a1 )
    {
      *a1 = (int)v5;
      return 1;
    }
    if ( sub_B70C0(*a1, (int)v5) )
      return 1;
    v10 = 74;
  }
  else
  {
    v10 = 60;
  }
  sub_D0048(33, 125, 32, (int)"crypto/pkcs7/pk7_doit.c", v10);
LABEL_9:
  BIO_vfree_0((int)v5);
  return 0;
}
