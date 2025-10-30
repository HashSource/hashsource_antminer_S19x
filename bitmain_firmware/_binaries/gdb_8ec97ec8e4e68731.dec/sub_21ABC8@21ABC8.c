int __fastcall sub_21ABC8(int a1, int a2, int a3)
{
  int v3; // r12
  int v4; // r2
  int v5; // r1
  const char **v6; // r4
  const char *v7; // r5
  const char *v8; // r6
  const char *v9; // r8
  const char *v10; // r7
  int v11; // r0
  char v12; // r2
  const char *v13; // r4
  int v14; // r10
  size_t v15; // r9
  char *v16; // r4
  int v18; // r3
  bool v19; // zf
  size_t v20; // r4
  size_t v21; // r0
  size_t v22; // r6
  size_t v23; // r0
  char *v24; // r4
  size_t v25; // r0
  char *v26; // r0
  size_t v27; // r0
  int v28; // r10
  _BOOL4 v29; // [sp+Ch] [bp-20h]
  char v30[24]; // [sp+14h] [bp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 24);
  v4 = 16 * a3;
  v5 = 12 * a2;
  if ( (*(_WORD *)(v3 + 2) & 0x380) == 0x80 )
    v5 += *(_DWORD *)(*(_DWORD *)(v3 + 28) + 32);
  v6 = (const char **)(*(_DWORD *)(v5 + 8) + v4);
  v7 = *v6;
  v8 = "C";
  v9 = *(const char **)v5;
  v10 = (const char *)sub_170CC4(a1);
  v11 = sub_FC524();
  v12 = *((_BYTE *)v6 + 12);
  v13 = "";
  v14 = v11;
  if ( (v12 & 1) == 0 )
    v8 = "";
  if ( (v12 & 2) != 0 )
    v13 = "V";
  if ( v10 )
    v15 = strlen(v10);
  else
    v15 = 0;
  if ( *v7 == 95 && v7[1] == 90 || sub_FC574() )
    return sub_327254(v7);
  if ( sub_FC4FC() || (v10 ? (v29 = strcmp(v9, v10) == 0) : (v29 = 0), v14 || !strncmp(v7, "__dt", 4u)) )
  {
    v27 = strlen(v7);
    v16 = (char *)sub_93028(v27 + 1);
    strcpy(v16, v7);
    return (int)v16;
  }
  if ( v15 )
  {
    v18 = *(unsigned __int8 *)v7;
    v19 = v18 == 116;
    if ( v18 != 116 )
      v19 = v18 == 81;
    if ( v19 )
    {
      v10 = 0;
      v28 = 1;
      sub_93170(v30, 0x14u, "__%s%s", v8, v13);
    }
    else
    {
      v28 = v15 + 1;
      sub_93170(v30, 0x14u, "__%s%s%d", v8, v13, v15);
    }
  }
  else
  {
    v28 = 1;
    sub_93170(v30, 0x14u, "__%s%s", v8, v13);
  }
  v20 = strlen(v30);
  v21 = strlen(v7);
  v22 = v21;
  if ( v29 )
  {
    v24 = (char *)sub_93028(v20 + v28 + v21);
    *v24 = 0;
  }
  else
  {
    v23 = strlen(v9);
    v24 = (char *)sub_93028(v20 + v28 + v22 + v23);
    strcpy(v24, v9);
  }
  v25 = strlen(v24);
  v26 = (char *)stpcpy(&v24[v25], v30);
  if ( v10 )
    strcpy(v26, v10);
  strcat(v24, v7);
  return (int)v24;
}
