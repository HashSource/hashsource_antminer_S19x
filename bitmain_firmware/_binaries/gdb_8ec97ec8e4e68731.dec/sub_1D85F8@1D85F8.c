int __fastcall sub_1D85F8(int result)
{
  _DWORD *v1; // r0

  if ( dword_487D4C )
  {
    v1 = (_DWORD *)sub_242FC8(result);
    result = sub_2594B0(*v1, "Process record: get a signal\n");
  }
  dword_488090 = 1;
  dword_488094 = 1;
  return result;
}
