int __fastcall sub_191588(int a1, char *a2)
{
  int result; // r0
  int v5; // r4
  int v6; // r6
  int v7; // r4

  if ( !a2 || !*a2 )
    return 0;
  result = sub_19115C(a1, a2);
  if ( result )
    return result;
  v5 = dword_4879C4;
  v6 = dword_4879C8;
  if ( dword_4879C4 == dword_4879C8 )
    return 0;
  while ( strcmp(*(const char **)v5, a2) )
  {
    v5 += 8;
    if ( v6 == v5 )
      return 0;
  }
  v7 = (*(int (__fastcall **)(char *))(v5 + 4))(a2);
  ((void (__fastcall *)(int, int))loc_191500)(a1, v7);
  return v7;
}
