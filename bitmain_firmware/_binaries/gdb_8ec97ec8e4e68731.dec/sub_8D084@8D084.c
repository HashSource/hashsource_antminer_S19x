int __fastcall sub_8D084(int a1, int a2)
{
  int result; // r0

  result = sub_15B388(a1);
  if ( result )
  {
    if ( !dword_487CE0 || (result = sub_C2360(a2)) != 0 )
      dword_487CE0 = a2;
  }
  return result;
}
