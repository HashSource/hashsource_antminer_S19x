int *__fastcall sub_126F3C(_DWORD *a1, int *a2)
{
  int *v4; // r5
  int v5; // r0
  int v6; // r4
  int v7; // r4

  if ( a2 )
  {
    v4 = a2;
    a2[1] = 2;
  }
  else
  {
    v4 = (int *)sub_AE194(2);
    if ( !v4 )
    {
      sub_D0048(13, 229, 58, (int)"crypto/asn1/a_int.c", 463);
      return 0;
    }
  }
  if ( sub_B8720((int)a1) && !sub_B85B0((int)a1) )
    v4[1] |= 0x102u;
  v5 = sub_B85BC(a1);
  v6 = v5 + 14;
  if ( v5 + 7 >= 0 )
    v6 = v5 + 7;
  v7 = v6 >> 3;
  if ( !v7 )
    v7 = 1;
  if ( sub_AE088((size_t *)v4, 0, v7) )
  {
    if ( sub_B85B0((int)a1) )
      *(_BYTE *)v4[2] = 0;
    else
      v7 = sub_B8648(a1, v4[2]);
    *v4 = v7;
    return v4;
  }
  else
  {
    sub_D0048(13, 229, 65, (int)"crypto/asn1/a_int.c", 476);
    if ( a2 != v4 )
      ASN1_INTEGER_free((int)v4);
    return 0;
  }
}
