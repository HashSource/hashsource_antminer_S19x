bool __fastcall sub_1C148(const char *a1, int a2)
{
  _BOOL4 v2; // r3

  v2 = a1 == 0;
  if ( dword_B93D8 )
    v2 = 1;
  if ( v2 )
    return 0;
  dword_B93D8 = (int)sub_1BD14(a1, a2);
  return dword_B93D8 != 0;
}
