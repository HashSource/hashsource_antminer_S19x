int __fastcall sub_124404(_DWORD *a1, char *s1, _DWORD *a3)
{
  char *v4; // r8
  char *v5; // r0
  bool v6; // cc
  char *v7; // r9
  char *v8; // r0
  int v9; // r7
  int v10; // r11
  int v11; // r0
  unsigned __int8 *v12; // r5
  int v13; // r10
  int v14; // t1
  int (*v15)(const char *, const char *); // r7
  int v16; // r4
  int v17; // r0
  int v18; // r4
  int i; // r5
  int v20; // r3
  int v21; // r2
  int v22; // r11
  int v23; // r4
  char *v26; // [sp+Ch] [bp-8h] BYREF

  v4 = s1;
  v5 = off_46D5A4[0][2];
  v6 = (unsigned int)v5 > 7;
  if ( v5 != (char *)7 )
    v6 = (unsigned int)(v5 - 4) > 1;
  if ( v6 )
  {
    v7 = 0;
  }
  else
  {
    v8 = strchr(s1, 40);
    v7 = v8;
    if ( v8 )
    {
      sub_100138(&v26, (int)v4);
      v7 = v26;
      if ( v26 )
        v4 = v26;
    }
  }
  v9 = a1[5];
  v10 = dword_4879F4;
  if ( v9 == 4 && dword_4879F4 == 1 )
    v9 = 5;
  v11 = (unsigned __int8)*v4;
  v12 = (unsigned __int8 *)(v4 + 1);
  if ( *v4 )
  {
    v13 = 0;
    do
    {
      if ( v9 > 4 )
        v11 = (unsigned __int8)tolower(v11);
      v13 = v11 + 67 * v13 - 113;
      v14 = *v12++;
      v11 = v14;
    }
    while ( v14 );
    v11 = 17 * v13;
  }
  else
  {
    v13 = (unsigned __int8)*v4;
  }
  v15 = strcasecmp;
  v16 = a1[11] - 1;
  if ( !v10 )
    v15 = strcmp;
  v17 = v11 & v16;
  v18 = v16 & v13;
  for ( i = v17 | 1; ; v18 = (i + v18) & (a1[11] - 1) )
  {
    v20 = a1[10];
    v21 = *(_DWORD *)(v20 + 8 * v18);
    v22 = v20 + 8 * v18;
    if ( !v21 && !*(_DWORD *)(v22 + 4) )
    {
      v23 = 0;
      goto LABEL_28;
    }
    if ( !v15(v4, (const char *)(a1[12] + v21)) )
      break;
  }
  v23 = 1;
  *a3 = a1[12] + *(_DWORD *)(v22 + 4);
LABEL_28:
  if ( v7 )
    free(v7);
  return v23;
}
