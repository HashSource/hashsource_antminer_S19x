_DWORD *__fastcall sub_199294(_DWORD *a1)
{
  __int64 v2; // r4
  void *v4; // r0
  void *v5; // r0

  HIDWORD(v2) = a1[2];
  LODWORD(v2) = a1[3];
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    HIDWORD(v2) += 16;
    LODWORD(v2) = v2 + 16;
    do
    {
      v4 = *(void **)(HIDWORD(v2) - 16);
      if ( v4 )
        free(v4);
      HIDWORD(v2) += 16;
    }
    while ( HIDWORD(v2) != (_DWORD)v2 );
    v2 = *((_QWORD *)a1 + 1);
    if ( (_DWORD)v2 != HIDWORD(v2) )
    {
      do
      {
        v5 = *(void **)(v2 + 4);
        if ( v5 )
          sub_339E64(v5);
        LODWORD(v2) = v2 + 16;
      }
      while ( (_DWORD)v2 != HIDWORD(v2) );
      LODWORD(v2) = a1[2];
    }
  }
  if ( (_DWORD)v2 )
    sub_339E64((void *)v2);
  if ( a1[1] )
    ((void (__fastcall *)(_DWORD *))loc_19D154)(a1 + 1);
  return a1;
}
