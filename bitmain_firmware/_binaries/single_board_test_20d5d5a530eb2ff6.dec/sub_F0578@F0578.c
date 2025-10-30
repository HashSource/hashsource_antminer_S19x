int __fastcall sub_F0578(int a1, int a2)
{
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r4

  if ( sub_EAC84(*(_DWORD *)(a1 + 16)) == (char *)24
    && (v6 = *(_DWORD *)(a1 + 20)) != 0
    && (v7 = *(_DWORD *)(v6 + 24)) != 0
    && a2 < sub_10C010(*(_DWORD *)(v6 + 24), v4, v5) )
  {
    return *(_DWORD *)(sub_10C01C(v7, a2) + 4);
  }
  else
  {
    return 0;
  }
}
