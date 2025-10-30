int __fastcall sub_7FD98(int a1)
{
  int v2; // r5
  int v3; // r3
  _DWORD v5[2]; // [sp+Ch] [bp-14h] BYREF
  _BYTE v6[12]; // [sp+14h] [bp-Ch] BYREF

  v2 = sub_1C3E58(dword_474FD8, dword_474FDC);
  sub_21D6B0(v5, v2, a1, 1, v6);
  v3 = v5[0];
  if ( v5[0] )
  {
    if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v5[0] + 32) >> 3)) != 8 )
      return 258;
    goto LABEL_6;
  }
  sub_21D6B0(v5, v2, a1, 3, 0);
  v3 = v5[0];
  if ( v5[0] || (sub_21D6B0(v5, v2, a1, 2, 0), (v3 = v5[0]) != 0) )
  {
LABEL_6:
    dword_474FE0 = *(_DWORD *)(v3 + 24);
    return 260;
  }
  return 259;
}
