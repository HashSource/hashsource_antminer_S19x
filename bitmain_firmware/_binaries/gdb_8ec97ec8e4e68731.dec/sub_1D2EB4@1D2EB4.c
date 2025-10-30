int __fastcall sub_1D2EB4(int a1)
{
  _DWORD *v2; // r0

  if ( dword_487D4C )
  {
    v2 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v2, "record: unpush %s\n", *(const char **)(a1 + 4));
  }
  return sub_231C68(a1);
}
