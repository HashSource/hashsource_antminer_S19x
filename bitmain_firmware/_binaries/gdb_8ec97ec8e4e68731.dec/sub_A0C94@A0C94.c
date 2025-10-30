bool __fastcall sub_A0C94(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  int v6; // r0
  int v7; // r0

  v2 = sub_A0FB0();
  if ( a1
    && (v3 = v2, v4 = sub_A0870(a1), v3)
    && **(_BYTE **)(v3 + 24) == 2
    && (v6 = sub_A0C08(v4), (v7 = sub_A0A60(v6)) != 0) )
  {
    return *(__int16 *)(*(_DWORD *)(v7 + 24) + 4) > 1;
  }
  else
  {
    return 0;
  }
}
