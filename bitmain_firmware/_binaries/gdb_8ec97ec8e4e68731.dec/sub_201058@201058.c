int __fastcall sub_201058(int a1, int a2)
{
  int v4; // r4
  const char *v5; // r1
  int v6; // r6
  int v7; // r6
  int *v8; // r5
  int v9; // r11
  int *v10; // r5
  int v11; // r10
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r3
  const char *v16; // r2
  int v17; // r2
  int v18; // r3
  int result; // r0
  int v20; // [sp+Ch] [bp-48h]
  int v21; // [sp+10h] [bp-44h]
  int v22; // [sp+1Ch] [bp-38h] BYREF
  void *v23; // [sp+20h] [bp-34h] BYREF
  int v24; // [sp+24h] [bp-30h]
  char v25[16]; // [sp+28h] [bp-2Ch] BYREF
  void *ptr; // [sp+38h] [bp-1Ch] BYREF
  int v27; // [sp+3Ch] [bp-18h]
  char v28[16]; // [sp+40h] [bp-14h] BYREF

  v20 = sub_16F654(a1);
  v4 = *(_DWORD *)sub_242FDC(v20);
  if ( a1 )
  {
    v5 = (const char *)re_comp(a1);
    if ( v5 )
      sub_946E0("Invalid regexp: %s", v5);
  }
  v6 = ((int (__fastcall *)(int))loc_1665F4)(v20);
  sub_200C00(a2);
  v7 = v6 / 4;
  v8 = *(int **)(dword_487D2C + 48);
  if ( v8 )
  {
    v9 = 0;
    do
    {
      if ( *((_BYTE *)v8 + 520) && (!a1 || re_exec(v8 + 130)) )
        ++v9;
      v8 = (int *)*v8;
    }
    while ( v8 );
    v21 = v9;
  }
  else
  {
    v21 = 0;
  }
  v23 = (void *)18;
  ptr = v28;
  ptr = (void *)sub_33B2BC(&ptr, &v23, 0);
  *(_DWORD *)v28 = v23;
  qmemcpy(ptr, "SharedLibraryTable", 18);
  v27 = (int)v23;
  *((_BYTE *)v23 + (_DWORD)ptr) = 0;
  sub_25704C(v4, 4, v21, &ptr);
  if ( ptr != v28 )
    sub_339E64(ptr);
  strcpy(v25, "from");
  strcpy(v28, "From");
  ptr = v28;
  v23 = v25;
  v24 = 4;
  v27 = 4;
  sub_2571B8(v4, v7 + 3, -1, &v23, &ptr);
  if ( ptr != v28 )
    sub_339E64(ptr);
  if ( v23 != v25 )
    sub_339E64(v23);
  strcpy(v25, "to");
  v24 = 2;
  v27 = 2;
  v23 = v25;
  ptr = v28;
  strcpy(v28, "To");
  sub_2571B8(v4, v7 + 3, -1, &v23, &ptr);
  if ( ptr != v28 )
    sub_339E64(ptr);
  if ( v23 != v25 )
    sub_339E64(v23);
  v23 = v25;
  ptr = v28;
  strcpy(v25, "syms-read");
  v24 = 9;
  strcpy(v28, "Syms Read");
  v27 = 9;
  sub_2571B8(v4, 11, -1, &v23, &ptr);
  if ( ptr != v28 )
    sub_339E64(ptr);
  if ( v23 != v25 )
    sub_339E64(v23);
  v22 = 21;
  strcpy(v25, "name");
  v23 = v25;
  ptr = v28;
  v24 = 4;
  ptr = (void *)sub_33B2BC(&ptr, &v22, 0);
  *(_DWORD *)v28 = v22;
  qmemcpy(ptr, "Shared Object Library", 21);
  v27 = v22;
  *((_BYTE *)ptr + v22) = 0;
  sub_2571B8(v4, 0, 2, &v23, &ptr);
  if ( ptr != v28 )
    sub_339E64(ptr);
  if ( v23 != v25 )
    sub_339E64(v23);
  sub_25722C(v4);
  v10 = *(int **)(dword_487D2C + 48);
  if ( !v10 )
  {
    result = sub_257270(v4);
    if ( v21 )
      return result;
    goto LABEL_54;
  }
  v11 = 0;
  do
  {
    if ( *((_BYTE *)v10 + 520) && (!a1 || re_exec(v10 + 130)) )
    {
      sub_2578AC(v4, 0);
      if ( v10[265] )
      {
        sub_257630(v4, "from", v20, v10[264]);
        sub_257630(v4, "to", v20, v10[265]);
      }
      else
      {
        sub_2575A4(v4, "from");
        sub_2575A4(v4, "to");
      }
      v12 = sub_191AC0();
      v13 = sub_191664(v12);
      v14 = sub_2573F0(v13);
      v15 = *((unsigned __int8 *)v10 + 1040);
      if ( !v14 )
      {
        if ( !*((_BYTE *)v10 + 1040) )
          goto LABEL_35;
        if ( !sub_1B7AA4((_DWORD *)v10[261]) )
        {
          sub_2575E8(v4, "syms-read", "Yes (*)");
          v11 = 1;
          goto LABEL_37;
        }
        v15 = *((unsigned __int8 *)v10 + 1040);
      }
      if ( v15 )
      {
        v16 = "Yes";
        goto LABEL_36;
      }
LABEL_35:
      v16 = "No";
LABEL_36:
      sub_2575E8(v4, "syms-read", v16);
LABEL_37:
      sub_2575E8(v4, "name", v10 + 130);
      sub_257380(v4, &word_356638, v17, v18);
      sub_25734C(v4, 0);
    }
    v10 = (int *)*v10;
  }
  while ( v10 );
  result = sub_257270(v4);
  if ( v21 )
  {
    if ( v11 )
      return sub_25738C(v4, "(*): Shared library is missing debugging information.\n");
    return result;
  }
LABEL_54:
  if ( a1 )
    return sub_25738C(v4, "No shared libraries matched.\n");
  else
    return sub_25738C(v4, "No shared libraries loaded at this time.\n");
}
