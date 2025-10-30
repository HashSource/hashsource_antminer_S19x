_DWORD *__fastcall sub_2FE9B8(int a1, int a2)
{
  _DWORD *result; // r0
  _DWORD *v4; // r3

  result = sub_2AD09C(a1, 0x18u);
  if ( result )
  {
    v4 = *(_DWORD **)(a2 + 164);
    result[1] = 0;
    if ( v4 )
      *v4 = result;
    else
      *(_DWORD *)(a2 + 160) = result;
    *(_DWORD *)(a2 + 164) = result;
  }
  return result;
}
