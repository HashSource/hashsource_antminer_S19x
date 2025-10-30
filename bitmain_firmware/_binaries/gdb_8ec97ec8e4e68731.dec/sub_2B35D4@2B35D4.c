int __fastcall sub_2B35D4(int a1, int a2)
{
  __int64 v2; // r2

  v2 = *(_QWORD *)(a1 + 36);
  if ( !HIDWORD(v2) )
    *(_DWORD *)(a1 + 40) = v2;
  sub_2ADDBC(*(_DWORD *)(a1 + 148), a1, a2 + v2);
  return sub_2ADDBC(
           *(_DWORD *)(*(_DWORD *)(a1 + 60) + 148),
           *(_DWORD *)(a1 + 60),
           a2 + *(_DWORD *)(*(_DWORD *)(a1 + 60) + 36));
}
