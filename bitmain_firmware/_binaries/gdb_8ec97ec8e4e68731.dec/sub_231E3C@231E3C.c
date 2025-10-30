int __fastcall sub_231E3C(int result)
{
  int v1; // r5

  if ( dword_489AD8 >= result )
  {
    v1 = result;
    do
      result = sub_231D04(dword_489F70);
    while ( dword_489AD8 >= v1 );
  }
  return result;
}
