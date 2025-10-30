int __fastcall sub_A00BC(int a1, char *s1, int a3, _DWORD *a4)
{
  const char *v5; // r9
  char *v6; // r5
  size_t v7; // r10
  int v9; // r0
  unsigned int v10; // r8
  int v11; // r3
  int v12; // r0
  char *v13; // r7
  int v14; // t1
  char *v16; // r0
  char *v17; // r0
  unsigned int v18; // r3
  size_t v19; // r0
  char *v20; // r0
  char *v21; // r0
  size_t v22; // r0
  int v23; // r3

  v5 = *(const char **)a1;
  v6 = s1;
  v7 = *(_DWORD *)(a1 + 4);
  v9 = strncmp(s1, *(const char **)a1, v7);
  v10 = *(unsigned __int8 *)(a1 + 24);
  if ( v9 )
    goto LABEL_9;
  if ( (v10 & 1) != 0 )
  {
    v11 = (v10 >> 2) & 1;
  }
  else
  {
    v20 = sub_9EB80(v6);
    v10 = *(unsigned __int8 *)(a1 + 24);
    v11 = *v20 == 60;
    if ( ((v10 >> 2) & 1) != v11 )
      goto LABEL_9;
  }
  if ( v11 )
    goto LABEL_15;
  v12 = (unsigned __int8)*v6;
  if ( !*v6 )
    goto LABEL_15;
  v13 = v6;
  while ( !isupper(v12) )
  {
    v14 = (unsigned __int8)*++v13;
    v12 = v14;
    if ( !v14 )
      goto LABEL_15;
  }
LABEL_9:
  if ( (v10 & 2) == 0 )
    return 0;
  v16 = sub_9EB80(v6);
  v6 = v16;
  if ( *v16 != 60 )
  {
    v17 = strrchr(v16, 46);
    if ( v17 )
      v6 = v17 + 1;
  }
  if ( strncmp(v6, v5, v7) )
    return 0;
LABEL_15:
  if ( !a4 )
    return 1;
  v18 = *(unsigned __int8 *)(a1 + 24);
  if ( (v18 & 1) != 0 )
  {
    if ( ((v18 >> 2) & 1) != 0 )
    {
      if ( dword_477CA0 )
        free((void *)dword_477CA0);
      dword_477CA0 = (int)sub_93140("<%s>", v6);
      v19 = strlen((const char *)dword_477CA0);
      sub_33BC54((int)(a4 + 1), 0, a4[2], (void *)dword_477CA0, v19);
      goto LABEL_26;
    }
    v21 = v6;
  }
  else
  {
    v21 = sub_9EB80(v6);
    v6 = v21;
  }
  v22 = strlen(v21);
  sub_33BC54((int)(a4 + 1), 0, a4[2], v6, v22);
LABEL_26:
  v23 = a4[1];
  *a4 = v23;
  a4[7] = v23;
  return 1;
}
