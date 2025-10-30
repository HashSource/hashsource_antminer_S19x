int __fastcall sub_30D468(unsigned __int8 **a1, int a2)
{
  int v2; // r2
  int v5; // r3
  int result; // r0
  unsigned __int8 *v7; // r2
  unsigned __int8 *v8; // r2

  v2 = (int)*a1;
  v5 = **a1;
  if ( v5 == 45 )
  {
    byte_48FEA8 = 45;
    sub_30D3E4(a2, &byte_48FEA8);
    v8 = *a1 + 1;
    *a1 = v8;
    v5 = *v8;
  }
  else if ( v5 == 43 )
  {
    *a1 = (unsigned __int8 *)(v2 + 1);
    v5 = *(unsigned __int8 *)(v2 + 1);
  }
  result = word_438898[v5] & 4;
  if ( result )
  {
    do
    {
      byte_48FEA8 = v5;
      if ( v5 )
        sub_30D3E4(a2, &byte_48FEA8);
      v7 = *a1 + 1;
      *a1 = v7;
      v5 = *v7;
    }
    while ( (word_438898[v5] & 4) != 0 );
    return 1;
  }
  return result;
}
