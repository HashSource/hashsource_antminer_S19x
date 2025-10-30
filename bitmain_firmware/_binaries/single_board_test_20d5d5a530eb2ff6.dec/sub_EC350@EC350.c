int __fastcall sub_EC350(char *a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r5

  v2 = sub_B22C0();
  v3 = v2;
  if ( v2 && sub_1260CC(v2, a1) )
  {
    v4 = sub_11B8E8(370, 0, v3);
    j_ASN1_STRING_free_8(v3);
    return v4;
  }
  else
  {
    j_ASN1_STRING_free_8(v3);
    return 0;
  }
}
