void __fastcall sub_1840E4(int a1, int a2)
{
  int v2; // r3
  const char **v3; // r6
  const char *v4; // r5
  char *v5; // r4
  int v6; // r7
  __int64 v7; // r0
  const char *v8; // t1
  int v9; // r0
  const char *v10; // r10
  char *v11; // r2
  char *v12; // r0
  int i; // r5
  int v14; // r6
  int v15; // [sp+0h] [bp-34h]
  const char **v17; // [sp+8h] [bp-2Ch] BYREF
  _BYTE v18[36]; // [sp+Ch] [bp-28h] BYREF

  if ( a2 )
    v2 = 2;
  else
    v2 = 0;
  v15 = v2;
  if ( !a1 )
  {
    v17 = (const char **)dword_487D2C;
    ((void (__fastcall *)(_BYTE *))loc_23FF20)(v18);
LABEL_28:
    v5 = 0;
    v6 = 1;
    goto LABEL_18;
  }
  v17 = 0;
  sub_25B0DC(&v17, a1);
  v3 = v17;
  v4 = *v17;
  if ( !*v17 )
  {
    sub_31DAD0(v17);
    v17 = (const char **)dword_487D2C;
    ((void (__fastcall *)(_BYTE *))loc_23FF20)(v18);
    goto LABEL_28;
  }
  if ( *v4 != 45 )
    sub_946E0("Invalid argument");
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    v9 = strcmp(v4, "-copies");
    v10 = v3[1];
    if ( v9 )
      break;
    if ( !v10 )
      sub_946E0("No argument to -copies");
    v7 = sub_14CC00((int)v3[1]);
    v8 = v3[2];
    v3 += 2;
    v4 = v8;
    v6 = v7;
LABEL_10:
    if ( !v4 )
      goto LABEL_17;
LABEL_11:
    if ( *v4 != 45 )
      sub_946E0("Invalid argument", HIDWORD(v7));
  }
  if ( strcmp(v4, "-exec") )
  {
    ++v3;
    v4 = v10;
    goto LABEL_10;
  }
  if ( !v10 )
    sub_946E0("No argument to -exec");
  LODWORD(v7) = sub_29B910(v10);
  v11 = (char *)v7;
  if ( !v5 )
  {
    v4 = v3[2];
    v5 = (char *)v7;
    v3 += 2;
    goto LABEL_10;
  }
  v12 = v5;
  v5 = v11;
  free(v12);
  v4 = v3[2];
  v3 += 2;
  if ( v4 )
    goto LABEL_11;
LABEL_17:
  sub_31DAD0(v17);
  v17 = (const char **)dword_487D2C;
  ((void (__fastcall *)(_BYTE *))loc_23FF20)(v18);
  if ( v6 > 0 )
  {
LABEL_18:
    for ( i = 0; i != v6; ++i )
    {
      v14 = ((int (*)(void))loc_184054)();
      sub_259F10("Added inferior %d\n", *(_DWORD *)(v14 + 8));
      if ( v5 )
      {
        ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(v14 + 36));
        ((void (__fastcall *)(int))loc_183698)(v14);
        sub_23F9F0(dword_475848, dword_47584C, dword_475850);
        sub_94D50(v5, a2);
        sub_213958(v5, v15);
      }
    }
  }
  ((void (__fastcall *)(_BYTE *))loc_23FC8C)(v18);
  ((void (__fastcall *)(const char **))loc_1CD290)(v17);
  if ( v5 )
    free(v5);
}
