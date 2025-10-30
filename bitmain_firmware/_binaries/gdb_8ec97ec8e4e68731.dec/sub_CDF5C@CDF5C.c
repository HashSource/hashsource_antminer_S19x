_DWORD *__fastcall sub_CDF5C(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v4; // r3
  int v5; // r3

  if ( a1[5] )
    ((void (*)(void))loc_26C200)();
  if ( a1[1] )
    ((void (__fastcall *)(_DWORD *))loc_CC730)(a1 + 1);
  v2 = (_DWORD *)a1[4];
  if ( v2 )
  {
    v4 = v2[1];
    v2[1] = v4 - 1;
    if ( v4 == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v2 + 8))(v2);
      v5 = v2[2];
      v2[2] = v5 - 1;
      if ( v5 == 1 )
        (*(void (__fastcall **)(_DWORD *))(*v2 + 12))(v2);
    }
  }
  return a1;
}
