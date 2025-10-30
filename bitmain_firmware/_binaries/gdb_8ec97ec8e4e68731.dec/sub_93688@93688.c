void __fastcall sub_93688(__int64 *a1)
{
  __int64 v2; // r4
  void *v4; // r0
  void *v5; // t1

  v2 = *a1;
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    LODWORD(v2) = v2 - 4;
    HIDWORD(v2) -= 4;
    do
    {
      v5 = *(void **)(v2 + 4);
      LODWORD(v2) = v2 + 4;
      v4 = v5;
      if ( v5 )
        free(v4);
    }
    while ( (_DWORD)v2 != HIDWORD(v2) );
    HIDWORD(v2) = *(_DWORD *)a1;
  }
  *((_DWORD *)a1 + 1) = HIDWORD(v2);
}
