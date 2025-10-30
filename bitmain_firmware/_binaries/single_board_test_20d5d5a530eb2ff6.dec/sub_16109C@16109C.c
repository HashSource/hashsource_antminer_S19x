int __fastcall sub_16109C(int *a1, char **a2, size_t a3)
{
  int v5; // r4
  int v8; // r0
  int v9; // r0

  if ( a1 )
  {
    v5 = *a1;
    if ( *a1 )
    {
      if ( sub_1280A4(*a1, *a2, a3) )
      {
LABEL_4:
        *a2 += a3;
        *a1 = v5;
        return v5;
      }
    }
    else
    {
      v8 = sub_B2068();
      v5 = v8;
      if ( v8 && sub_1280A4(v8, *a2, a3) )
        goto LABEL_4;
    }
    if ( *a1 == v5 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v9 = sub_B2068();
  v5 = v9;
  if ( !v9 || !sub_1280A4(v9, *a2, a3) )
  {
LABEL_8:
    j_ASN1_STRING_free(v5);
LABEL_9:
    sub_D0048(39, 102, 65, (int)"crypto/ocsp/v3_ocsp.c", 206);
    return 0;
  }
  *a2 += a3;
  return v5;
}
