int __fastcall sub_2FA70(int a1, int a2, int a3, int a4)
{
  _BOOL4 v4; // r6
  bool v5; // zf
  int i; // r4
  int v10; // r3
  int result; // r0

  v4 = a3 == -1;
  v5 = a3 == -1;
  if ( a3 != -1 )
    v5 = a3 == 24;
  if ( v5 )
    result = ((int (__fastcall *)(int, int, int))loc_1DE9C8)(a2, 24, a4 + 96);
  for ( i = 16; i != 24; ++i )
  {
    if ( a3 == i )
      v10 = v4 | 1;
    else
      v10 = v4;
    if ( v10 )
      result = sub_2F9BC(a2, i, a4);
  }
  return result;
}
