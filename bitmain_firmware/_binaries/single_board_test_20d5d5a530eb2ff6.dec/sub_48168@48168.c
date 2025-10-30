int __fastcall sub_48168(int a1)
{
  int result; // r0

  result = dword_6476F0;
  if ( !dword_6476F0 )
  {
    result = sub_6E938(0, 100000);
    dword_6476F0 = result;
  }
  if ( result >= 0 && a1 != dword_6476F4 )
  {
    result = sub_6E9D8(result, a1);
    dword_6476F4 = a1;
  }
  return result;
}
