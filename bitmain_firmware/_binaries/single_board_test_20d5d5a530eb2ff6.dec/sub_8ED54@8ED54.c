int __fastcall sub_8ED54(int a1, int a2)
{
  int result; // r0

  result = sub_9D6FC();
  if ( result )
  {
    result = 1;
    if ( *(_DWORD *)(a2 + 4) )
    {
      sub_95494(a1, 50, 566, 110, "ssl/statem/extensions.c", 1271);
      return 0;
    }
  }
  return result;
}
