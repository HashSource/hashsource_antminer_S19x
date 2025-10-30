int __fastcall sub_F688C(int *a1, int a2)
{
  int v2; // r5
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  char **v7; // r0
  int *v8; // r0
  int result; // r0
  int *v10; // [sp+4h] [bp-8h] BYREF

  v2 = 0;
  *a1 = 0;
  v10 = 0;
  if ( !a2 || sub_D8C70(a2) == 64 )
    return 1;
  if ( sub_D8C70(a2) != 64 )
  {
    v5 = (_DWORD *)sub_B2888();
    v2 = (int)v5;
    if ( !v5 )
      goto LABEL_10;
    sub_B2974(v5, a2);
  }
  if ( sub_AE2BC(v2, (int)X509_ALGOR_it, &v10) )
  {
    v6 = (_DWORD *)sub_B2888();
    *a1 = (int)v6;
    if ( v6 )
    {
      v7 = sub_EAA20(0x38Fu);
      sub_B28F8(v6, (int)v7, 16, (int)v10);
      v8 = 0;
      v10 = 0;
      goto LABEL_11;
    }
  }
LABEL_10:
  v8 = v10;
LABEL_11:
  ASN1_STRING_free((int)v8);
  X509_ALGOR_free(v2);
  result = *a1;
  if ( *a1 )
    return 1;
  return result;
}
