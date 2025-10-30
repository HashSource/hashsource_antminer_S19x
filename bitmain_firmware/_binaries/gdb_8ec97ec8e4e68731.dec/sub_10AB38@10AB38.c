int __fastcall sub_10AB38(_DWORD *a1)
{
  int v1; // r1
  __int64 v2; // r2

  v2 = *(_QWORD *)a1;
  v1 = *(_DWORD *)(*a1 + 8);
  HIDWORD(v2) = a1[1] + 1;
  a1[1] = HIDWORD(v2);
  if ( SHIDWORD(v2) >= v1 )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(v2 + 12) + 4 * HIDWORD(v2));
}
