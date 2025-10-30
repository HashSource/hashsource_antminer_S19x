int __fastcall sub_45F18(int a1)
{
  __int64 v1; // r2

  v1 = *(_QWORD *)(a1 + 4);
  if ( HIDWORD(v1) >= (unsigned int)v1 )
    return -1;
  LODWORD(v1) = HIDWORD(v1) + 1;
  HIDWORD(v1) = *(unsigned __int8 *)(*(_DWORD *)a1 + HIDWORD(v1));
  *(_DWORD *)(a1 + 8) = v1;
  return HIDWORD(v1);
}
