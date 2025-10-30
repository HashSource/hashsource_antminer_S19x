int __fastcall sub_1944B0(int a1, int a2, int a3)
{
  int (__fastcall *v3)(int, int); // r3

  if ( a1 && (v3 = *(int (__fastcall **)(int, int))(a1 + 96)) != 0 )
    return v3(a2, a3);
  else
    return 0;
}
