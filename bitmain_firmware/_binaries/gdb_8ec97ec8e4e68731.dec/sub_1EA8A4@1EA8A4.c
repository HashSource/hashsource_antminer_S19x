bool __fastcall sub_1EA8A4(int a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD *v5; // r5

  v2 = sub_16F654(a1);
  v3 = ((int (__fastcall *)(int))loc_1E2770)(v2);
  if ( *(_DWORD *)(dword_488C94 + 8) )
    return 0;
  v5 = (_DWORD *)sub_249744(v3);
  return sub_1EA758(a1, v5) != -1 && v5[1] && v5[2] && ((int (__fastcall *)(int))loc_1E2198)(57) == 1;
}
