_DWORD *__fastcall sub_AD868(int a1, int a2, int *a3)
{
  int v4; // r6
  _DWORD *v5; // r4
  int v7; // r0

  v4 = sub_AE2BC(a2, a1, 0);
  if ( v4 )
  {
    if ( a3 )
    {
      v5 = (_DWORD *)*a3;
      if ( *a3 )
      {
LABEL_4:
        sub_AD794(v5, 16, v4);
        return v5;
      }
      v7 = sub_B2408();
      v5 = (_DWORD *)v7;
      if ( v7 )
      {
        *a3 = v7;
        goto LABEL_4;
      }
    }
    else
    {
      v5 = (_DWORD *)sub_B2408();
      if ( v5 )
        goto LABEL_4;
    }
    j_ASN1_STRING_free(v4);
  }
  return 0;
}
