int __fastcall sub_C3AC0(int a1, int a2)
{
  unsigned int *v4; // r4
  unsigned int *v5; // r7
  unsigned int v6; // t1
  char *v7; // r0

  sub_2594B0(a2, "catch signal");
  v4 = *(unsigned int **)(a1 + 136);
  v5 = *(unsigned int **)(a1 + 140);
  if ( v5 == v4 )
  {
    if ( *(_BYTE *)(a1 + 148) )
    {
      sub_2594B0(a2, " all");
      return sub_259314(10, a2);
    }
  }
  else
  {
    do
    {
      v6 = *v4++;
      v7 = sub_C3A2C(v6);
      sub_2594B0(a2, " %s", v7);
    }
    while ( v5 != v4 );
  }
  return sub_259314(10, a2);
}
