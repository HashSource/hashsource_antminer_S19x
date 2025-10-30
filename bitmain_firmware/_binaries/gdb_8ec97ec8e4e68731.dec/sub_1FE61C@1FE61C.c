int __fastcall sub_1FE61C(_BYTE *a1)
{
  int v2; // r0
  int v3; // r2
  int *v4; // r4
  int v5; // r7
  _DWORD *v6; // r0
  int v8; // r8
  void *v9; // r0
  int v10; // lr
  void *v11; // r0
  int v12; // r12
  void *v13; // r0
  int v14; // r12
  void *v15; // r0
  int v16; // r0
  void *v17; // r0
  int v18; // lr
  void *v19; // r0
  int v20; // r10
  void *v21; // r0
  _DWORD *v22; // r0
  int v23; // r0
  int v24; // r4
  _DWORD *v25; // r0
  int v26; // r0
  _DWORD *v27; // r0
  int v28; // r0
  int v29; // r0
  const char *v30; // r2
  int v31; // r0
  _DWORD *v32; // r0
  int v33; // r0
  int v34; // r0
  const char *v35; // r2
  int v36; // r0
  _DWORD *v37; // r0
  int v38; // r2
  int v39; // r3
  int v40; // r2
  int v41; // r7
  int v42; // r0
  _DWORD *v43; // r0
  int v44; // r0
  _DWORD *v45; // r0
  _DWORD *v46; // r0
  _DWORD *v47; // r0
  void *v48; // [sp+Ch] [bp-80h] BYREF
  int v49; // [sp+10h] [bp-7Ch]
  char v50[16]; // [sp+14h] [bp-78h] BYREF
  void *ptr; // [sp+24h] [bp-68h] BYREF
  int v52; // [sp+28h] [bp-64h]
  char v53[16]; // [sp+2Ch] [bp-60h] BYREF
  _BYTE v54[80]; // [sp+3Ch] [bp-50h] BYREF

  v2 = sub_2665F0(v54);
  v4 = (int *)dword_48938C;
  if ( (int *)dword_48938C != &dword_48938C )
  {
    v5 = 0;
    do
    {
      if ( !a1 || (v2 = sub_5AF7C(a1, v4[2], v3)) != 0 )
        ++v5;
      v4 = (int *)*v4;
    }
    while ( v4 != &dword_48938C );
    if ( v5 )
    {
      v8 = *(_DWORD *)sub_242FDC(v2);
      ptr = v53;
      strcpy(v53, "SkiplistTable");
      v52 = 13;
      sub_25704C(v8, 6, v5, &ptr);
      v9 = ptr;
      if ( ptr != v53 )
        sub_339E64(ptr);
      v10 = *(_DWORD *)sub_242FDC(v9);
      strcpy(v53, "Num");
      strcpy(v50, "number");
      ptr = v53;
      v48 = v50;
      v49 = 6;
      v52 = 3;
      sub_2571B8(v10, 5, -1, &v48, &ptr);
      if ( ptr != v53 )
        sub_339E64(ptr);
      v11 = v48;
      if ( v48 != v50 )
        sub_339E64(v48);
      v12 = *(_DWORD *)sub_242FDC(v11);
      strcpy(v50, "enabled");
      strcpy(v53, "Enb");
      v48 = v50;
      ptr = v53;
      v52 = 3;
      v49 = 7;
      sub_2571B8(v12, 3, -1, &v48, &ptr);
      if ( ptr != v53 )
        sub_339E64(ptr);
      v13 = v48;
      if ( v48 != v50 )
        sub_339E64(v48);
      v14 = *(_DWORD *)sub_242FDC(v13);
      strcpy(v53, "Glob");
      strcpy(v50, "regexp");
      v52 = 4;
      v48 = v50;
      ptr = v53;
      v49 = 6;
      sub_2571B8(v14, 4, 1, &v48, &ptr);
      if ( ptr != v53 )
        sub_339E64(ptr);
      v15 = v48;
      if ( v48 != v50 )
        sub_339E64(v48);
      v16 = *(_DWORD *)sub_242FDC(v15);
      strcpy(v50, "file");
      strcpy(v53, "File");
      v48 = v50;
      ptr = v53;
      v49 = 4;
      v52 = 4;
      sub_2571B8(v16, 20, -1, &v48, &ptr);
      if ( ptr != v53 )
        sub_339E64(ptr);
      v17 = v48;
      if ( v48 != v50 )
        sub_339E64(v48);
      v18 = *(_DWORD *)sub_242FDC(v17);
      v52 = 2;
      v49 = 6;
      strcpy(v50, "regexp");
      v48 = v50;
      ptr = v53;
      strcpy(v53, "RE");
      sub_2571B8(v18, 2, 1, &v48, &ptr);
      if ( ptr != v53 )
        sub_339E64(ptr);
      v19 = v48;
      if ( v48 != v50 )
        sub_339E64(v48);
      v20 = *(_DWORD *)sub_242FDC(v19);
      v48 = v50;
      strcpy(v50, "function");
      ptr = v53;
      v49 = 8;
      strcpy(v53, "Function");
      v52 = 8;
      sub_2571B8(v20, 40, 2, &v48, &ptr);
      if ( ptr != v53 )
        sub_339E64(ptr);
      v21 = v48;
      if ( v48 != v50 )
        sub_339E64(v48);
      v22 = (_DWORD *)sub_242FDC(v21);
      v23 = sub_25722C(*v22);
      v24 = dword_48938C;
      if ( (int *)dword_48938C == &dword_48938C )
        return sub_257270(v8);
      while ( 1 )
      {
        v23 = sub_258BD4(v23);
        if ( !a1 )
          break;
        v23 = sub_5AF7C(a1, *(_DWORD *)(v24 + 8), v40);
        if ( v23 )
          break;
LABEL_51:
        v24 = *(_DWORD *)v24;
        if ( (int *)v24 == &dword_48938C )
          return sub_257270(v8);
      }
      v41 = *(_DWORD *)sub_242FDC(v23);
      v42 = sub_2578AC(v41, 0);
      v43 = (_DWORD *)sub_242FDC(v42);
      v44 = sub_257504(*v43, "number", *(_DWORD *)(v24 + 8));
      if ( *(_BYTE *)(v24 + 104) )
      {
        v25 = (_DWORD *)sub_242FDC(v44);
        v26 = sub_2575E8(*v25, "enabled", "y");
        if ( !*(_BYTE *)(v24 + 12) )
        {
LABEL_56:
          v46 = (_DWORD *)sub_242FDC(v26);
          v28 = sub_2575E8(*v46, "regexp", "n");
          goto LABEL_42;
        }
      }
      else
      {
        v45 = (_DWORD *)sub_242FDC(v44);
        v26 = sub_2575E8(*v45, "enabled", "n");
        if ( !*(_BYTE *)(v24 + 12) )
          goto LABEL_56;
      }
      v27 = (_DWORD *)sub_242FDC(v26);
      v28 = sub_2575E8(*v27, "regexp", "y");
LABEL_42:
      v29 = *(_DWORD *)sub_242FDC(v28);
      if ( *(_DWORD *)(v24 + 20) )
        v30 = *(const char **)(v24 + 16);
      else
        v30 = "<none>";
      v31 = sub_2575E8(v29, "file", v30);
      if ( *(_BYTE *)(v24 + 40) )
      {
        v32 = (_DWORD *)sub_242FDC(v31);
        v33 = sub_2575E8(*v32, "regexp", "y");
      }
      else
      {
        v47 = (_DWORD *)sub_242FDC(v31);
        v33 = sub_2575E8(*v47, "regexp", "n");
      }
      v34 = *(_DWORD *)sub_242FDC(v33);
      if ( *(_DWORD *)(v24 + 48) )
        v35 = *(const char **)(v24 + 44);
      else
        v35 = "<none>";
      v36 = sub_2575E8(v34, "function", v35);
      v37 = (_DWORD *)sub_242FDC(v36);
      sub_257380(*v37, &word_356638, v38, v39);
      v23 = sub_25734C(v41, 0);
      goto LABEL_51;
    }
  }
  v6 = (_DWORD *)sub_242FDC(v2);
  if ( a1 )
    return sub_25738C(*v6, "No skiplist entries found with number %s.\n", a1);
  else
    return sub_25738C(*v6, "Not skipping any files or functions.\n");
}
