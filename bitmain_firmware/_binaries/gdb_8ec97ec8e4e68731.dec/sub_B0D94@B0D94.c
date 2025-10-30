int __fastcall sub_B0D94(int a1, _BYTE *a2, int a3)
{
  int v5; // r10
  _DWORD *v6; // r5
  int v7; // r0
  int v8; // r1
  _DWORD *v9; // r5
  char v10; // r11
  int v11; // r6
  int v12; // r7
  int v13; // r2
  int v14; // r2
  int v15; // r2
  _DWORD *v16; // r3
  int v17; // r0
  int v18; // r2
  int v19; // r0
  const char *v20; // r3
  int v21; // r2
  int v22; // r3
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r6
  int v28; // r0
  int v29; // r0
  int v31; // [sp+10h] [bp-44h]
  void *v32; // [sp+20h] [bp-34h] BYREF
  int v33; // [sp+24h] [bp-30h]
  _DWORD v34[4]; // [sp+28h] [bp-2Ch] BYREF
  void *ptr; // [sp+38h] [bp-1Ch] BYREF
  int v36; // [sp+3Ch] [bp-18h]
  _DWORD v37[5]; // [sp+40h] [bp-14h] BYREF

  if ( !((int (*)(void))loc_B0744)() )
    return sub_25738C(a1, "Your application does not use any Ada tasks.\n");
  if ( a2 && *a2 )
  {
    v26 = sub_14CC6C(a2);
    v27 = sub_26EB1C(v26);
    v5 = v27;
    if ( sub_2573F0(a1) )
      sub_231EA4();
    v28 = sub_AFAEC(a3);
    v31 = v28;
    if ( v27 )
    {
      if ( v27 > 0 )
      {
        v6 = *(_DWORD **)(v28 + 20);
        if ( v6 )
          v6 = (_DWORD *)(*v6 >= (unsigned int)v27);
      }
      else
      {
        v6 = 0;
      }
      goto LABEL_9;
    }
  }
  else
  {
    if ( sub_2573F0(a1) )
      sub_231EA4();
    v31 = sub_AFAEC(a3);
  }
  v5 = 0;
  v6 = *(_DWORD **)(v31 + 20);
  if ( v6 )
    v6 = (_DWORD *)*v6;
LABEL_9:
  v7 = sub_2573F0(a1);
  v8 = *(_DWORD *)"s";
  ptr = v37;
  LOBYTE(v37[1]) = aProvideInforma[44];
  if ( !v7 )
    v8 = 7;
  v37[0] = *(_DWORD *)"tasks";
  if ( v7 )
    v8 = 8;
  v36 = 5;
  BYTE1(v37[1]) = 0;
  sub_25704C(a1, v8, v6, &ptr);
  if ( ptr != v37 )
    sub_339E64(ptr);
  ptr = v37;
  strcpy((char *)v34, "current");
  v32 = v34;
  v33 = 7;
  v36 = 0;
  LOBYTE(v37[0]) = 0;
  sub_2571B8(a1, 1, -1, &v32, &ptr);
  if ( ptr != v37 )
    sub_339E64(ptr);
  if ( v32 != v34 )
    sub_339E64(v32);
  strcpy((char *)v34, "id");
  v33 = 2;
  v36 = 2;
  v32 = v34;
  ptr = v37;
  strcpy((char *)v37, "ID");
  sub_2571B8(a1, 3, 1, &v32, &ptr);
  if ( ptr != v37 )
    sub_339E64(ptr);
  if ( v32 != v34 )
    sub_339E64(v32);
  strcpy((char *)v34, "task-id");
  LOWORD(v37[0]) = (unsigned __int16)&unk_444954;
  HIWORD(v37[0]) = (unsigned __int8)((unsigned int)&unk_444954 >> 16);
  v32 = v34;
  ptr = v37;
  v33 = 7;
  v36 = 3;
  sub_2571B8(a1, 9, 1, &v32, &ptr);
  if ( ptr != v37 )
    sub_339E64(ptr);
  if ( v32 != v34 )
    sub_339E64(v32);
  if ( sub_2573F0(a1) )
  {
    v32 = v34;
    strcpy((char *)v34, "thread-id");
    ptr = v37;
    v33 = 9;
    v36 = 0;
    LOBYTE(v37[0]) = 0;
    sub_2571B8(a1, 4, 1, &v32, &ptr);
    if ( ptr != v37 )
      sub_339E64(ptr);
    if ( v32 != v34 )
      sub_339E64(v32);
  }
  v32 = v34;
  ptr = v37;
  strcpy((char *)v34, "parent-id");
  v33 = 9;
  strcpy((char *)v37, "P-ID");
  v36 = 4;
  sub_2571B8(a1, 4, 1, &v32, &ptr);
  if ( ptr != v37 )
    sub_339E64(ptr);
  if ( v32 != v34 )
    sub_339E64(v32);
  v32 = v34;
  strcpy((char *)v34, "priority");
  LOWORD(v37[0]) = *(_WORD *)"Pri";
  HIWORD(v37[0]) = (unsigned __int8)aPri[2];
  ptr = v37;
  v36 = 3;
  v33 = 8;
  sub_2571B8(a1, 3, 1, &v32, &ptr);
  if ( ptr != v37 )
    sub_339E64(ptr);
  if ( v32 != v34 )
    sub_339E64(v32);
  v32 = v34;
  v34[0] = *(_DWORD *)"state";
  LOWORD(v34[1]) = (unsigned __int8)aBadState[8];
  ptr = v37;
  v33 = 5;
  strcpy((char *)v37, "State");
  v36 = 5;
  sub_2571B8(a1, 22, -1, &v32, &ptr);
  if ( ptr != v37 )
    sub_339E64(ptr);
  if ( v32 != v34 )
    sub_339E64(v32);
  strcpy((char *)v34, "name");
  strcpy((char *)v37, "Name");
  v32 = v34;
  ptr = v37;
  v33 = 4;
  v36 = 4;
  sub_2571B8(a1, 1, 2, &v32, &ptr);
  if ( ptr != v37 )
    sub_339E64(ptr);
  if ( v32 != v34 )
    sub_339E64(v32);
  sub_25722C(a1);
  v9 = *(_DWORD **)(v31 + 20);
  if ( v9 && *v9 )
  {
    v10 = v5;
    if ( v5 )
      v10 = 1;
    v11 = 1;
    v12 = 0;
    while ( 1 )
    {
      if ( v11 == v5 )
        v13 = 0;
      else
        v13 = v10 & 1;
      if ( !v13 )
      {
        sub_2578AC(a1, 0);
        if ( sub_98F78(&v9[75 * v11 - 73], &dword_4878EC) )
          sub_2575E8(a1, "current", "*");
        else
          sub_2575A4(a1, "current");
        sub_257504(a1, "id", v11);
        sub_257694(a1, "task-id", "%9lx", v9[75 * v12 + 5]);
        if ( sub_2573F0(a1) )
        {
          v14 = sub_23E578(v9[75 * v11 - 73], v9[75 * v11 - 72], v9[75 * v11 - 71]);
          if ( v14 )
            sub_257504(a1, "thread-id", v14);
          else
            sub_2575A4(a1, "thread-id");
        }
        v15 = sub_AFC48(v9[75 * v12 + 73], a3);
        if ( v15 )
          sub_257504(a1, "parent-id", v15);
        else
          sub_2575A4(a1, "parent-id");
        sub_257504(a1, "priority", v9[75 * v12 + 72]);
        v16 = &v9[75 * v12];
        v17 = v16[75];
        if ( v17 )
        {
          v24 = sub_AFC48(v17, a3);
          sub_257694(a1, "state", "Accepting RV with %-4d", v24);
        }
        else
        {
          v18 = v16[71];
          if ( v18 == 5 && (v19 = v16[74]) != 0 )
          {
            v25 = sub_AFC48(v19, a3);
            sub_257694(a1, "state", "Waiting on RV with %-3d", v25);
          }
          else
          {
            sub_2575E8(a1, "state", *(_DWORD *)&aAdaTaskInfoSVe[4 * v18 + 288]);
          }
        }
        if ( LOBYTE(v9[75 * v12 + 6]) )
          v20 = (const char *)&v9[75 * v11 - 69];
        else
          v20 = "<no name>";
        sub_257694(a1, "name", "%s", v20);
        sub_257380(a1, &word_356638, v21, v22);
        sub_25734C(a1, 0);
        v9 = *(_DWORD **)(v31 + 20);
      }
      if ( !v9 )
        break;
      if ( *v9 < (unsigned int)++v11 )
        break;
      v12 = v11 - 1;
      if ( (unsigned int)(v11 - 1) >= *v9 )
      {
        sub_94700(
          (int)"ada-tasks.c",
          1099,
          "%s: Assertion `%s' failed.",
          "ada_task_info_s* VEC_ada_task_info_s_index(VEC_ada_task_info_s*, unsigned int, const char*, unsigned int)",
          "index");
        v29 = sub_257270(a1);
        sub_338FFC(v29);
      }
    }
  }
  return sub_257270(a1);
}
