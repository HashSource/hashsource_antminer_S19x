int __fastcall sub_15E530(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r6

  v2 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(v2 + 204) )
  {
    v3 = *(_DWORD *)(v2 + 200);
    v4 = *(_DWORD *)(v2 + 208);
    memset((void *)(v2 + 212 + v4), 0, v3 - v4);
    *(_BYTE *)(v4 + v2 + 212) = *(_BYTE *)(v2 + 380);
    *(_BYTE *)(v3 - 1 + v2 + 212) |= 0x80u;
    sub_167A78(v2, v2 + 212, v3, v3);
    sub_167BA4(v2, a2, *(_DWORD *)(v2 + 204), v3);
  }
  return 1;
}
