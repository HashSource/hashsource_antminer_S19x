int __fastcall sub_348580(int result)
{
  int (__fastcall *v1)(int, int); // r3

  v1 = *(int (__fastcall **)(int, int))(result + 8);
  if ( v1 )
    return v1(1, result);
  return result;
}
