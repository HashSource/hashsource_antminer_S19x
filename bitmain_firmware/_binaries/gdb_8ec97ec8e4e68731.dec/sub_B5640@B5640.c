int __fastcall sub_B5640(int a1)
{
  int v2; // r0
  int v3; // r4

  v2 = *(_DWORD *)(a1 + 80);
  if ( v2 )
    v3 = sub_26BC70(v2);
  else
    v3 = *(_DWORD *)(a1 + 76);
  if ( sub_A0C94(v3) && **(_BYTE **)(v3 + 24) == 23 || sub_A249C(v3) )
    return 1;
  else
    return sub_271924(a1);
}
