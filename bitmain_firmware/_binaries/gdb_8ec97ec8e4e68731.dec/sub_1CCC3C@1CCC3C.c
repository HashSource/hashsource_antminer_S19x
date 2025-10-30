int __fastcall sub_1CCC3C(_BYTE *a1)
{
  _DWORD *v1; // r11
  int v2; // r7
  int *v3; // r0
  _DWORD *v4; // r12
  int v5; // r6
  int v6; // r2
  int *i; // r5
  int v8; // r2
  int v9; // r2
  int *v10; // r3
  _DWORD *v11; // r4
  int v12; // r10
  int v13; // r1
  const char *v14; // r0
  const char *v16; // r0
  _DWORD *v17; // r3
  int v18; // r0
  void *v19; // [sp+18h] [bp-34h] BYREF
  int v20; // [sp+1Ch] [bp-30h]
  void *v21[4]; // [sp+20h] [bp-2Ch] BYREF
  void *ptr; // [sp+30h] [bp-1Ch] BYREF
  int v23; // [sp+34h] [bp-18h]
  char v24[20]; // [sp+38h] [bp-14h] BYREF

  if ( a1 )
  {
    LOWORD(v1) = 32032;
    if ( *a1 )
    {
      HIWORD(v1) = 72;
      a1 = (_BYTE *)sub_14CC00((int)a1);
      v17 = (_DWORD *)v1[2];
      v2 = (int)a1;
      if ( !v17 )
LABEL_51:
        sub_946E0("program space ID %d not known.", a1);
      while ( a1 != (_BYTE *)v17[1] )
      {
        v17 = (_DWORD *)*v17;
        if ( !v17 )
          goto LABEL_51;
      }
    }
    else
    {
      v2 = -1;
      HIWORD(v1) = 72;
    }
  }
  else
  {
    v1 = &unk_487D20;
    v2 = -1;
  }
  v3 = (int *)sub_242FDC(a1);
  v4 = (_DWORD *)v1[2];
  v5 = *v3;
  if ( !v4 )
    goto LABEL_53;
  v6 = 0;
  do
  {
    if ( v2 == -1 || v2 == v4[1] )
      ++v6;
    v4 = (_DWORD *)*v4;
  }
  while ( v4 );
  if ( !v6 )
  {
LABEL_53:
    sub_94700(
      (int)"progspace.c",
      261,
      "%s: Assertion `%s' failed.",
      "void print_program_space(ui_out*, int)",
      "count > 0");
    v18 = sub_257270(v5);
    sub_338FFC(v18);
  }
  ptr = v24;
  v23 = 7;
  strcpy(v24, "pspaces");
  sub_25704C(v5, 3, v6, &ptr);
  if ( ptr != v24 )
    sub_339E64(ptr);
  strcpy(v24, "current");
  ptr = v24;
  v23 = 7;
  v20 = 0;
  LOBYTE(v21[0]) = 0;
  v19 = v21;
  sub_2571B8(v5, 1, -1, &ptr, &v19);
  if ( v19 != v21 )
    sub_339E64(v19);
  if ( ptr != v24 )
    sub_339E64(ptr);
  strcpy(v24, "id");
  v23 = 2;
  v20 = 2;
  ptr = v24;
  v19 = v21;
  strcpy((char *)v21, "Id");
  sub_2571B8(v5, 4, -1, &ptr, &v19);
  if ( v19 != v21 )
    sub_339E64(v19);
  if ( ptr != v24 )
    sub_339E64(ptr);
  v19 = v21;
  strcpy((char *)v21, "Executable");
  ptr = v24;
  strcpy(v24, "exec");
  v23 = 4;
  v20 = 10;
  sub_2571B8(v5, 17, -1, &ptr, &v19);
  if ( v19 != v21 )
    sub_339E64(v19);
  if ( ptr != v24 )
    sub_339E64(ptr);
  sub_25722C(v5);
  for ( i = (int *)v1[2]; i; i = (int *)*i )
  {
    if ( v2 == -1 || v2 == i[1] )
    {
      sub_2578AC(v5, 0);
      if ( (int *)v1[3] == i )
        sub_2575E8(v5, "current", "*");
      else
        sub_2575A4(v5, "current");
      sub_257504(v5, "id", i[1]);
      v8 = i[4];
      if ( v8 )
        sub_2575E8(v5, "exec", v8);
      else
        sub_2575A4(v5, "exec");
      v10 = &dword_487918;
      v11 = (_DWORD *)dword_487918;
      if ( dword_487918 )
      {
        v9 = 0;
        do
        {
          while ( 1 )
          {
            v10 = (int *)v11[9];
            if ( v10 == i )
              break;
            v11 = (_DWORD *)v11[1];
            if ( !v11 )
              goto LABEL_41;
          }
          v12 = v11[2];
          v13 = v11[3];
          if ( !v9 )
          {
            sub_98F50(&ptr, v13);
            v14 = (const char *)sub_23095C(ptr, v23, *(_DWORD *)v24);
            sub_259F10("\n\tBound inferiors: ID %d (%s)", v12, v14);
            v11 = (_DWORD *)v11[1];
            if ( !v11 )
              break;
            v10 = (int *)v11[9];
            if ( i != v10 )
              goto LABEL_40;
            v12 = v11[2];
            v13 = v11[3];
          }
          sub_98F50(&v19, v13);
          v16 = (const char *)sub_23095C(v19, v20, v21[0]);
          sub_259F10(", ID %d (%s)", v12, v16);
LABEL_40:
          v11 = (_DWORD *)v11[1];
          v9 = 1;
        }
        while ( v11 );
      }
LABEL_41:
      sub_257380(v5, &word_356638, v9, v10);
      sub_25734C(v5, 0);
    }
  }
  return sub_257270(v5);
}
