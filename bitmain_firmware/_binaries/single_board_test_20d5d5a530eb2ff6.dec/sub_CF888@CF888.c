int __fastcall sub_CF888(int a1)
{
  int v2; // r5
  int v3; // r7
  _DWORD v5[2]; // [sp+0h] [bp-Ch] BYREF

  if ( !sub_10C594(&unk_6E1440, sub_CF3E8) )
    return 0;
  if ( !dword_6DF430 )
    return 0;
  v5[0] = a1 & 0xFF000FFF;
  v2 = a1 & 0xFFF;
  sub_10C544(dword_6DF428);
  v3 = sub_DFA98(dword_6DF42C, v5);
  sub_10C564(dword_6DF428);
  if ( v3 )
    return *(_DWORD *)(v3 + 4);
  v5[0] = v2;
  sub_10C544(dword_6DF428);
  v3 = sub_DFA98(dword_6DF42C, v5);
  sub_10C564(dword_6DF428);
  if ( v3 )
    return *(_DWORD *)(v3 + 4);
  else
    return 0;
}
