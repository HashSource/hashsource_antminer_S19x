int __fastcall sub_AD8FC(int a1)
{
  if ( a1 < 0 )
    return 0;
  if ( a1 > 19 )
    return sub_10C01C(dword_6DF3A4, a1 - 20);
  return (int)*(&off_21F688 + a1);
}
