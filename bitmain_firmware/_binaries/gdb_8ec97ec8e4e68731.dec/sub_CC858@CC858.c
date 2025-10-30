_DWORD *__fastcall sub_CC858(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  _DWORD *v5; // r5
  int v7; // r3
  int v8; // r3

  v2 = (void *)a1[25];
  *a1 = off_37E1FC;
  if ( v2 )
    free(v2);
  v3 = (void *)a1[26];
  if ( v3 )
    free(v3);
  v4 = (void *)a1[20];
  if ( v4 )
    free(v4);
  if ( a1[21] )
    ((void (__fastcall *)(_DWORD *))loc_19D154)(a1 + 21);
  if ( a1[19] )
    ((void (__fastcall *)(_DWORD *))loc_19D154)(a1 + 19);
  v5 = (_DWORD *)a1[12];
  if ( v5 )
  {
    v7 = v5[1];
    v5[1] = v7 - 1;
    if ( v7 == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v5 + 8))(v5);
      v8 = v5[2];
      v5[2] = v8 - 1;
      if ( v8 == 1 )
        (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
    }
  }
  return a1;
}
