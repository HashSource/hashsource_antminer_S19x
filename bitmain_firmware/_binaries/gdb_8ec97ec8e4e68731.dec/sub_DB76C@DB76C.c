int __fastcall sub_DB76C(int a1, int a2)
{
  int v2; // r4
  int v4; // r0

  v2 = sub_D03A0(a1, a2, 20, (int)&unk_47849C);
  sub_D88D8(2);
  if ( !*(_BYTE *)(*(_DWORD *)(v2 + 28) + 39) )
  {
    v4 = v2;
    v2 = *(unsigned __int8 *)(*(_DWORD *)(v2 + 28) + 39);
    ((void (__fastcall *)(int))loc_DB0B0)(v4);
  }
  return v2;
}
