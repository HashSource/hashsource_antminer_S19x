int __fastcall sub_2B63A4(int a1, int a2)
{
  int v2; // r3
  int v3; // r2
  char v4; // r3
  char *v6; // r0

  v2 = *(_DWORD *)(a1 + 160);
  v3 = *(_DWORD *)(v2 + 2348);
  if ( !*(_DWORD *)(v3 + 60) || *(_DWORD *)(v2 + 32) == a2 )
  {
    *(_DWORD *)(v2 + 32) = a2;
    *(_DWORD *)(v3 + 60) = 1;
    return 1;
  }
  if ( (a2 & 0xFF000000) != 0 )
    return 1;
  v4 = a2;
  if ( (v4 & 4) != 0 )
    LOWORD(v6) = 31048;
  else
    LOWORD(v6) = 31152;
  HIWORD(v6) = 65;
  sub_2A6A5C(v6, a1);
  return 1;
}
