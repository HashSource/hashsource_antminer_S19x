int __fastcall sub_16B2E0(_DWORD *a1, int a2)
{
  int v4; // r4
  int v6; // r0
  int v7; // r0

  if ( sub_16C4F8(a2) != 1 )
  {
    v4 = (int)a1;
    if ( a1 )
    {
      v4 = 0;
      sub_D0048(44, 138, 120, (int)"crypto/store/loader_file.c", 996);
    }
    return v4;
  }
  v4 = 1;
  if ( !a1 )
    return v4;
  if ( *a1 == 2 )
  {
    v6 = sub_16C4FC(a2);
    v7 = sub_10E770(v6);
    sub_B5560(a1 + 6, 9u, "%08lx", v7);
    return v4;
  }
  sub_D0048(44, 138, 119, (int)"crypto/store/loader_file.c", 984);
  return 0;
}
