int __fastcall sub_2E2CE0(_BYTE *a1, int a2)
{
  if ( (*a1 & 3) == 1 && *(_DWORD *)(a2 + 32) == -1 && *(_BYTE *)(a2 + 12) == 2 )
    return sub_2E0858((int)a1, a2);
  else
    return 1;
}
