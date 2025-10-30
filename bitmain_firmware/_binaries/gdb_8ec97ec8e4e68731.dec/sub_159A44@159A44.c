__int64 __fastcall sub_159A44(int a1)
{
  int v2; // r3
  bool v3; // zf
  int v4; // r6
  int v5; // r5
  __int64 result; // r0

  v2 = **(char **)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 20) + 24);
  v3 = v2 == 13;
  if ( v2 != 13 )
    v3 = v2 == 2;
  if ( v3 )
    sub_159A44();
  v4 = sub_1599E0(a1);
  v5 = sub_159A18(a1) - v4;
  result = sub_171258(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 20));
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(result + 20) + v5 * *(_DWORD *)(result + 20);
  return result;
}
