int __fastcall sub_162E40(int a1, char *a2, int a3)
{
  size_t *v6; // r0
  int v7; // r4

  v6 = (size_t *)sub_B2068();
  v7 = (int)v6;
  if ( !v6 )
    return 0;
  if ( !sub_AE088(v6, a2, a3) || !sub_F0F38(a1, (char *)0x33, 4, v7) )
  {
    j_ASN1_STRING_free(v7);
    return 0;
  }
  return 1;
}
