int __fastcall sub_1D2E70(int a1)
{
  _DWORD *v2; // r0

  if ( dword_487D4C )
  {
    v2 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v2, "record: stop %s\n", *(const char **)(a1 + 4));
  }
  return (*(int (__fastcall **)(int))(a1 + 652))(a1);
}
