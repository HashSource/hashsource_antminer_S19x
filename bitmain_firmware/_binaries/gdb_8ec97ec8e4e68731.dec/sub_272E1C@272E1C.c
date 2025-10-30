__int64 *__fastcall sub_272E1C(__int64 *a1)
{
  __int64 v2; // r4
  void *v3; // r0

  v2 = *a1;
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    do
    {
      v3 = *(void **)(v2 + 16);
      LODWORD(v2) = v2 + 28;
      if ( v3 )
        sub_339E64(v3);
    }
    while ( HIDWORD(v2) != (_DWORD)v2 );
    HIDWORD(v2) = *(_DWORD *)a1;
  }
  if ( HIDWORD(v2) )
    sub_339E64((void *)HIDWORD(v2));
  return a1;
}
