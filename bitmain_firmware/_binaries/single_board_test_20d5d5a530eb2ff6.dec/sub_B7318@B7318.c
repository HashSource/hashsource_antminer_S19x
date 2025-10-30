int __fastcall sub_B7318(int a1)
{
  int result; // r0
  int v2; // r4

  result = sub_10C510(a1);
  v2 = result;
  if ( result )
    v2 = 1;
  dword_6DF3B0 = v2;
  bio_type_lock = result;
  return result;
}
