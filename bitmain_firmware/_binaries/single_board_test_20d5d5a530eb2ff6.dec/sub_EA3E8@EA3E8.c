int __fastcall sub_EA3E8(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  _BOOL4 v6; // r3
  unsigned int v8; // [sp+0h] [bp-30h] BYREF
  int v9; // [sp+8h] [bp-28h]

  if ( !a1 )
    return 0;
  if ( !sub_EA278() )
    return 0;
  v4 = 11;
  sub_10C544(dword_6E1A98);
  v9 = a1;
  v8 = a2 & 0xFFFF7FFF;
  while ( 1 )
  {
    v5 = sub_DFA98(dword_6E1A94, (int)&v8);
    if ( !v5 )
      break;
    v6 = *(_DWORD *)(v5 + 4) != 0;
    if ( (a2 & 0x8000) != 0 )
      v6 = 0;
    if ( !v6 )
    {
      v4 = *(_DWORD *)(v5 + 12);
      goto LABEL_10;
    }
    if ( !--v4 )
      goto LABEL_10;
    v9 = *(_DWORD *)(v5 + 12);
  }
  v4 = 0;
LABEL_10:
  sub_10C564(dword_6E1A98);
  return v4;
}
