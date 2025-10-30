int __fastcall sub_C7A04(int a1)
{
  int v1; // r0
  _DWORD *v2; // r0
  int result; // r0

  v1 = (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 44))();
  v2 = (_DWORD *)sub_242FDC(v1);
  result = sub_2573F0(*v2);
  if ( !result )
    return sub_259F10((const char *)&word_356638);
  return result;
}
