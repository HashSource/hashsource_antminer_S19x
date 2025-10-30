int __fastcall sub_2F3C64(int a1)
{
  int v1; // r6
  int v2; // r4

  v1 = *(_DWORD *)(a1 + 56);
  if ( !v1 )
    return v1;
  while ( 1 )
  {
    v2 = *(_DWORD *)(v1 + 100);
    if ( v2 )
      break;
LABEL_6:
    v1 = *(_DWORD *)(v1 + 156);
    if ( !v1 )
      return v1;
  }
  while ( !strcmp(*(const char **)v2, ".eh_frame_entry") || *(char ***)(v2 + 60) == &off_470950 )
  {
    v2 = *(_DWORD *)(v2 + 12);
    if ( !v2 )
      goto LABEL_6;
  }
  return 1;
}
