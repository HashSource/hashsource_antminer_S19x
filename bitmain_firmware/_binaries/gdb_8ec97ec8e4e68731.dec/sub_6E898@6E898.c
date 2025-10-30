int __fastcall sub_6E898(int a1)
{
  __int64 v1; // r4
  int v2; // r6
  int v3; // t1
  int result; // r0

  v1 = *(_QWORD *)(a1 + 72);
  v2 = *(_DWORD *)(a1 + 56);
  if ( (_DWORD)v1 == HIDWORD(v1) )
    return 1;
  while ( 1 )
  {
    v3 = *(_DWORD *)v1;
    LODWORD(v1) = v1 + 4;
    result = ((int (__fastcall *)(int, int))loc_16D5B8)(v2, v3);
    if ( !result )
      break;
    if ( HIDWORD(v1) == (_DWORD)v1 )
      return 1;
  }
  return result;
}
