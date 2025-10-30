int __fastcall sub_26EB3C(int a1, _QWORD *a2)
{
  int v2; // r4
  __int64 v6; // r0

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 == 4 )
  {
    *a2 = *(_QWORD *)(a1 + 24);
    return 1;
  }
  else
  {
    if ( v2 != 1 || **(_BYTE **)(sub_171258(*(_DWORD **)(*(_DWORD *)(a1 + 16) + 64)) + 24) != 8 )
      return 0;
    LODWORD(v6) = sub_26EB1C(*(_DWORD *)(a1 + 16));
    *a2 = v6;
    return v2;
  }
}
