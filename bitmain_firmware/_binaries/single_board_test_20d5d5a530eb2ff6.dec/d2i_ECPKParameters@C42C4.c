int __fastcall d2i_ECPKParameters(int *a1, void **a2, int a3)
{
  int *v5; // r0
  int *v6; // r6
  int v7; // r0
  int v8; // r4
  int result; // r0
  void *v10; // [sp+Ch] [bp-8h] BYREF

  v10 = *a2;
  v5 = (int *)sub_C33E4(0, &v10, a3);
  v6 = v5;
  if ( v5 )
  {
    v7 = sub_C4204(v5);
    v8 = v7;
    if ( v7 )
    {
      if ( *v6 == 1 )
        *(_DWORD *)(v7 + 24) = 1;
      if ( a1 )
      {
        sub_C64B8(*a1);
        *a1 = v8;
      }
      sub_C3428((int)v6);
      result = v8;
      *a2 = v10;
    }
    else
    {
      sub_D0048(16, 145, 127, "crypto/ec/ec_asn1.c", 967);
      sub_C3428((int)v6);
      return 0;
    }
  }
  else
  {
    sub_D0048(16, 145, 117, "crypto/ec/ec_asn1.c", 961);
    sub_C3428(0);
    return 0;
  }
  return result;
}
