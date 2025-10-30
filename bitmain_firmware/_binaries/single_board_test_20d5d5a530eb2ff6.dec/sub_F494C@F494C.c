int __fastcall sub_F494C(int a1, int a2)
{
  int result; // r0
  int (__fastcall *v5)(int, int); // r3

  result = sub_F47B0();
  if ( result )
  {
    v5 = *(int (__fastcall **)(int, int))(result + 12);
    if ( v5 )
      return v5(a1, a2);
  }
  return result;
}
