__int64 *__fastcall sub_F7DB8(__int64 *a1)
{
  __int64 v2; // r4
  void *v3; // r0
  void *v4; // t1

  v2 = *a1;
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    do
    {
      v4 = *(void **)v2;
      LODWORD(v2) = v2 + 4;
      v3 = v4;
      if ( v4 )
        free(v3);
    }
    while ( HIDWORD(v2) != (_DWORD)v2 );
    HIDWORD(v2) = *(_DWORD *)a1;
  }
  if ( HIDWORD(v2) )
    sub_339E64((void *)HIDWORD(v2));
  return a1;
}
