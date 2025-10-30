bool __fastcall sub_261524(int a1)
{
  _DWORD *v2; // r0
  char *v3; // r3
  int v4; // r0

  if ( *(_DWORD *)nullsub_31(a1) && *(_DWORD *)nullsub_31(a1) != 3 && *(_DWORD *)nullsub_31(a1) != 4 )
    return 0;
  v2 = (_DWORD *)sub_26BC70(a1);
  v3 = *(char **)(sub_171258(v2) + 24);
  v4 = *v3;
  if ( v4 == 2 )
    return (v3[2] & 1) == 0;
  else
    return v4 == 13;
}
