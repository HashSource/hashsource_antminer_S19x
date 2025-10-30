int __fastcall sub_B28F8(_DWORD *a1, int a2, int a3, int a4)
{
  int v8; // r3
  int v10; // r0
  int v11; // r0

  if ( !a1 )
    return 0;
  if ( a3 == -1 )
  {
    ASN1_OBJECT_free(*a1, a2, -1, 0);
    v10 = a1[1];
    *a1 = a2;
    ASN1_TYPE_free(v10);
    a1[1] = 0;
    return 1;
  }
  else
  {
    v8 = a1[1];
    if ( v8 || (v11 = sub_B2408(), (a1[1] = v11) != 0) )
    {
      ASN1_OBJECT_free(*a1, a2, a3, v8);
      *a1 = a2;
      if ( a3 )
        sub_AD794((_DWORD *)a1[1], a3, a4);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}
