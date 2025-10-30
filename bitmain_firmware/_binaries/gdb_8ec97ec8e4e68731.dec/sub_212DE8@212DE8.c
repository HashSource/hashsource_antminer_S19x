int __fastcall sub_212DE8(const char *a1)
{
  char *v1; // r6
  __int64 v2; // r4

  if ( !a1 )
    return 0;
  v1 = strrchr(a1, 46);
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)&dword_4896A4;
  if ( dword_4896A8 == dword_4896A4 )
    return 0;
  while ( sub_33CAA0(v2, v1) )
  {
    LODWORD(v2) = v2 + 28;
    if ( HIDWORD(v2) == (_DWORD)v2 )
      return 0;
  }
  return *(_DWORD *)(v2 + 24);
}
