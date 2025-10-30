int __fastcall sub_7F19C(_DWORD *a1, _DWORD *a2)
{
  if ( (a2[2] & 4) == 0 || (*(_DWORD *)(*a2 + 16) & 0x2000000) == 0 )
    return sub_7E3DC(a1, a2);
  fprintf(stderr, off_B8508[0], *(_DWORD *)(*a2 + 52));
  return -1;
}
