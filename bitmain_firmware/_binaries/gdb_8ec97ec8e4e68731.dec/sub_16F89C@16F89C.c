int __fastcall sub_16F89C(int result, int a2)
{
  int v3; // r6
  int i; // r4
  int v5; // r3
  const char *v6; // r0
  char v7; // r10

  if ( a2 > 0 )
  {
    v3 = result;
    for ( i = 0; i != a2; ++i )
    {
      v7 = i & 7;
      if ( (i & 7) == 0 )
        sub_259B34(&word_3E1F84);
      v5 = *(unsigned __int8 *)(v3 + (i >> 3));
      v6 = "1";
      if ( ((v5 >> v7) & 1) == 0 )
        v6 = "0";
      result = sub_259F10(v6);
    }
  }
  return result;
}
