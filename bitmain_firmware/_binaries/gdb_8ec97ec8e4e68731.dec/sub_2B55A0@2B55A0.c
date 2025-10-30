void *__fastcall sub_2B55A0(int a1, int a2)
{
  void *result; // r0

  if ( *(_DWORD *)(a2 + 140) )
    return (void *)sub_2D0084();
  result = sub_2AD09C(a1, 0xB8u);
  if ( result )
  {
    *(_DWORD *)(a2 + 140) = result;
    return (void *)sub_2D0084();
  }
  return result;
}
