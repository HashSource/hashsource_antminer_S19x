int __fastcall sub_A0FB0(int a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r4
  int v4; // r0

  v1 = sub_A0A60(a1);
  if ( sub_A0AB8(v1) )
  {
    v4 = sub_A0F5C(v1);
    return sub_A0A60(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 24) + 24) + 36));
  }
  else if ( sub_A0B30(v1)
         && (v2 = sub_172888(v1, "P_ARRAY", 1), (v3 = v2) != 0)
         && **(_BYTE **)(sub_A0870(v2) + 24) == 1 )
  {
    return sub_A0870(*(_DWORD *)(*(_DWORD *)(v3 + 24) + 20));
  }
  else
  {
    return 0;
  }
}
