int __fastcall sub_2FC044(int a1, char *s1)
{
  const char *v4; // r1
  char *v5; // r4
  int v6; // r5

  if ( !strcasecmp(s1, *(const char **)(a1 + 24)) )
    return 1;
  v4 = "arm_any";
  v5 = (char *)dword_41D238;
  v6 = 29;
  while ( 1 )
  {
    v5 -= 8;
    if ( !strcasecmp(s1, v4) )
      break;
    if ( v6-- == 0 )
      goto LABEL_8;
    v4 = (const char *)*((_DWORD *)v5 + 59);
  }
  if ( *(_DWORD *)(a1 + 16) == dword_41D238[2 * v6] )
    return 1;
LABEL_8:
  if ( !strcasecmp(s1, "arm") )
    return *(_DWORD *)(a1 + 32);
  else
    return 0;
}
