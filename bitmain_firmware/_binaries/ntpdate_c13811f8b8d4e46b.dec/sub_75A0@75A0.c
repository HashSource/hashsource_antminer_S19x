_DWORD *__fastcall sub_75A0(_DWORD *a1)
{
  _DWORD *v1; // r4

  v1 = a1;
  if ( a1 )
  {
    v1 = (_DWORD *)*a1;
    free(a1);
  }
  return v1;
}
