int __fastcall sub_27400C(int a1)
{
  __int64 v2; // r4
  void *v3; // r0

  XML_ParserFree(*(XML_Parser *)a1);
  v2 = *(_QWORD *)(a1 + 12);
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    do
    {
      v3 = *(void **)(v2 + 12);
      if ( v3 != (void *)(v2 + 20) )
        sub_339E64(v3);
      LODWORD(v2) = v2 + 36;
    }
    while ( HIDWORD(v2) != (_DWORD)v2 );
    HIDWORD(v2) = *(_DWORD *)(a1 + 12);
  }
  if ( HIDWORD(v2) )
    sub_339E64((void *)HIDWORD(v2));
  return a1;
}
