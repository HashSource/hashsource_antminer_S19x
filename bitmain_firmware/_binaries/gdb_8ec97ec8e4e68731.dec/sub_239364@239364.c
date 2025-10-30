_DWORD *__fastcall sub_239364(_DWORD *ptr)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  v2 = (_DWORD *)ptr[16];
  *ptr = off_3E9AC0;
  if ( v2 != ptr + 18 )
    sub_339E64(v2);
  v3 = (_DWORD *)ptr[9];
  if ( v3 != ptr + 11 )
    sub_339E64(v3);
  v4 = (_DWORD *)ptr[1];
  if ( v4 != ptr + 3 )
    sub_339E64(v4);
  sub_33AC04(ptr);
  return ptr;
}
