int __fastcall sub_187BF0(int a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r4
  int v6; // t1

  if ( a3 )
  {
    v4 = a2 + a3 - 1;
    v5 = a2 - 1;
    do
    {
      v6 = *(unsigned __int8 *)++v5;
      sub_2594B0(a1, "%02x ", v6);
    }
    while ( v4 != v5 );
  }
  return sub_256850(&word_356638, a1);
}
