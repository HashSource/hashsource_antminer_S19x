int __fastcall sub_2ABD8C(int a1, int a2)
{
  int v2; // r4
  __int64 v3; // r0

  v2 = *(_DWORD *)(a1 + 8);
  LODWORD(v3) = (*(int (__fastcall **)(int, _DWORD, int, _DWORD))(v2 + 4))(a1, *(_DWORD *)v2, a2, *(_DWORD *)(v2 + 4));
  if ( v3 >= 0 )
    *(_QWORD *)(v2 + 16) += v3;
  return v3;
}
