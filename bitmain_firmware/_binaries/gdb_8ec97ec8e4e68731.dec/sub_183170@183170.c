int __fastcall sub_183170(_BYTE *a1)
{
  int *v2; // r0
  int v3; // r2
  int v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // r0
  int v8; // r2
  _DWORD *v9; // r4
  const char *v10; // r2
  int v11; // r2
  int v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // r0
  void *v17; // [sp+8h] [bp-30h] BYREF
  int v18; // [sp+Ch] [bp-2Ch]
  char v19[16]; // [sp+10h] [bp-28h] BYREF
  void *ptr; // [sp+20h] [bp-18h] BYREF
  int v21; // [sp+24h] [bp-14h]
  char v22[16]; // [sp+28h] [bp-10h] BYREF

  v2 = (int *)sub_242FDC(a1);
  v4 = dword_487918;
  v5 = *v2;
  if ( !dword_487918 )
    return sub_25738C(v5, "No inferiors.\n");
  v6 = 0;
  do
  {
    v7 = sub_5AF7C(a1, *(_DWORD *)(v4 + 8), v3);
    v4 = *(_DWORD *)(v4 + 4);
    if ( v7 )
      ++v6;
  }
  while ( v4 );
  if ( !v6 )
    return sub_25738C(v5, "No inferiors.\n");
  ptr = v22;
  strcpy(v22, "inferiors");
  v21 = 9;
  sub_25704C(v5, 4, v6, &ptr);
  if ( ptr != v22 )
    sub_339E64(ptr);
  strcpy(v22, "current");
  ptr = v22;
  v21 = 7;
  v18 = 0;
  v19[0] = 0;
  v17 = v19;
  sub_2571B8(v5, 1, -1, &ptr, &v17);
  if ( v17 != v19 )
    sub_339E64(v17);
  if ( ptr != v22 )
    sub_339E64(ptr);
  strcpy(v19, "Num");
  strcpy(v22, "number");
  ptr = v22;
  v17 = v19;
  v21 = 6;
  v18 = 3;
  sub_2571B8(v5, 4, -1, &ptr, &v17);
  if ( v17 != v19 )
    sub_339E64(v17);
  if ( ptr != v22 )
    sub_339E64(ptr);
  ptr = v22;
  v17 = v19;
  strcpy(v22, "target-id");
  v21 = 9;
  strcpy(v19, "Description");
  v18 = 11;
  sub_2571B8(v5, 17, -1, &ptr, &v17);
  if ( v17 != v19 )
    sub_339E64(v17);
  if ( ptr != v22 )
    sub_339E64(ptr);
  v17 = v19;
  strcpy(v19, "Executable");
  ptr = v22;
  strcpy(v22, "exec");
  v21 = 4;
  v18 = 10;
  sub_2571B8(v5, 17, -1, &ptr, &v17);
  if ( v17 != v19 )
    sub_339E64(v17);
  if ( ptr != v22 )
    sub_339E64(ptr);
  sub_25722C(v5);
  v9 = (_DWORD *)dword_487918;
  if ( dword_487918 )
  {
    do
    {
      if ( sub_5AF7C(a1, v9[2], v8) )
      {
        sub_2578AC(v5, 0);
        if ( (_DWORD *)dword_487914 == v9 )
          sub_2575E8(v5, "current", "*");
        else
          sub_2575A4(v5, "current");
        sub_257504(v5, "number", v9[2]);
        v15 = v9[3];
        if ( v15 )
          v10 = (const char *)sub_183084(v15);
        else
          v10 = "<null>";
        sub_2575E8(v5, "target-id", v10);
        v11 = *(_DWORD *)(v9[9] + 16);
        if ( v11 )
          sub_2575E8(v5, "exec", v11);
        else
          sub_2575A4(v5, "exec");
        v13 = v9[31];
        if ( v13 )
        {
          sub_257380(v5, "\n\tis vfork child of inferior ", v12, v13);
          sub_257504(v5, "vfork-parent", *(_DWORD *)(v9[31] + 8));
        }
        v14 = v9[32];
        if ( v14 )
        {
          sub_257380(v5, "\n\tis vfork parent of inferior ", v12, v14);
          sub_257504(v5, "vfork-child", *(_DWORD *)(v9[32] + 8));
        }
        sub_257380(v5, &word_356638, v12, v14);
        sub_25734C(v5, 0);
      }
      v9 = (_DWORD *)v9[1];
    }
    while ( v9 );
  }
  return sub_257270(v5);
}
