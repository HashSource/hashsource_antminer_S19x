_DWORD *__fastcall sub_187370(_DWORD *a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  if ( dword_487930 )
  {
    v3 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v3, "infrun: prepare_to_wait\n");
  }
  *a1 = 1;
  result = (_DWORD *)off_489AFC(&dword_4899A0);
  if ( !result )
    return sub_1532BC((_DWORD *)dword_487974);
  return result;
}
