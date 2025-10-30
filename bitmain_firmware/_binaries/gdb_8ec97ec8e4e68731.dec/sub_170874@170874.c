int __fastcall sub_170874(int result)
{
  char *v1; // r12
  int v2; // r4
  char *v3; // r3
  int v4; // r2
  int v5; // r1
  int v6; // r5

  v1 = *(char **)(result + 24);
  v2 = result;
  v3 = v1;
  while ( 1 )
  {
    v4 = *((_DWORD *)v3 + 5);
    v3 = *(char **)(v4 + 24);
    v5 = *v3;
    if ( v5 != 2 )
      break;
    v2 = v4;
  }
  if ( v5 == 8 )
  {
    v6 = result;
    result = ((int (__fastcall *)(int, int, _DWORD))loc_16FB94)(v4, *(_DWORD *)(v4 + 16) | 0x40, 0);
    v1 = *(char **)(v6 + 24);
    *(_DWORD *)(*(_DWORD *)(v2 + 24) + 20) = result;
  }
  v1[2] |= 1u;
  return result;
}
