int __fastcall sub_E0C48(int a1)
{
  __int64 v1; // r2
  int result; // r0

  v1 = *(_QWORD *)(a1 + 24);
  if ( HIDWORD(v1) == (_DWORD)v1 || *(_DWORD *)(HIDWORD(v1) - 20) )
    return 0;
  result = HIDWORD(v1) - 52;
  if ( HIDWORD(v1) != 52 )
    return *(_DWORD *)(HIDWORD(v1) - 28) - *(_DWORD *)(HIDWORD(v1) - 32) == 16;
  return result;
}
