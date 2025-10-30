int __fastcall sub_CF828(int a1)
{
  int v2; // r4
  unsigned int v4; // [sp+0h] [bp-Ch] BYREF

  if ( sub_10C594(&unk_6E1440, sub_CF3E8)
    && dword_6DF430
    && (v4 = a1 & 0xFFFFF000, sub_10C544(dword_6DF428), v2 = sub_DFA98(dword_6DF42C, &v4), sub_10C564(dword_6DF428), v2) )
  {
    return *(_DWORD *)(v2 + 4);
  }
  else
  {
    return 0;
  }
}
