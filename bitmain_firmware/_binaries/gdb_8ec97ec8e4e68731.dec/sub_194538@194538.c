int __fastcall sub_194538(int a1, int a2)
{
  int (__fastcall *v2)(int); // r3

  if ( a1 && (v2 = *(int (__fastcall **)(int))(a1 + 104)) != 0 )
    return v2(a2);
  else
    return 0;
}
