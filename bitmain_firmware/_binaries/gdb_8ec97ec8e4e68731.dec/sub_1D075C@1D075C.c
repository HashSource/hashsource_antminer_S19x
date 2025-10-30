int __fastcall sub_1D075C(int result, _DWORD *a2)
{
  _DWORD *v2; // r2

  v2 = *(_DWORD **)(result + 24);
  if ( v2 == a2 )
  {
    v2 = (_DWORD *)(result + 24);
  }
  else
  {
    while ( a2 != (_DWORD *)*v2 )
      v2 = (_DWORD *)*v2;
  }
  *v2 = *a2;
  *a2 = *(_DWORD *)(result + 32);
  *(_DWORD *)(result + 32) = a2;
  return result;
}
