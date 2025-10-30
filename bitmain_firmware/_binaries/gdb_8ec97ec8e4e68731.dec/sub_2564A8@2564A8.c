_DWORD *__fastcall sub_2564A8(_DWORD *ptr)
{
  _DWORD *v2; // r0

  v2 = (_DWORD *)ptr[1];
  *ptr = &off_3F2924;
  if ( v2 != ptr + 3 )
    sub_339E64(v2);
  sub_33AC04(ptr);
  return ptr;
}
