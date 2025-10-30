void __fastcall sub_24A878(int a1)
{
  unsigned int *v1; // r0
  unsigned int *v2; // r11
  unsigned int v3; // r12
  int v4; // r7
  _DWORD *v5; // r9
  _DWORD *v6; // r6
  int v7; // r5
  unsigned int v8; // r4
  const char *v9; // r1
  int v10; // r2
  int v11; // t1
  int v12; // r1
  unsigned int i; // r8
  _DWORD *v14; // r7
  _DWORD *v15; // t1
  int *j; // r3
  int *v17; // r3
  int *v18; // r10
  _DWORD *v19; // r4
  int v20; // r0
  void (*v21)(void); // r3
  int v22; // r1
  int v23; // r6
  unsigned int v24; // r4
  int v25; // r4
  bool v26; // zf

  v1 = (unsigned int *)((int (*)(void))loc_D20F4)();
  v2 = v1;
  if ( !v1 )
LABEL_56:
    sub_946E0("No tracepoints defined, not starting trace");
  v3 = *v1;
  if ( !*v1 )
  {
    free(v1);
    goto LABEL_56;
  }
  v4 = 0;
  v5 = v1 + 1;
  v6 = v1 + 1;
  v7 = 0;
  v8 = 0;
  do
  {
    while ( 1 )
    {
      v11 = v6[1];
      ++v6;
      v10 = v11;
      v12 = *(_DWORD *)(v11 + 12);
      if ( *(_DWORD *)(v11 + 16) == 1 )
        v7 = 1;
      if ( v12 == 28 )
        break;
      if ( dword_46DBF0 )
        goto LABEL_12;
      v9 = "";
LABEL_6:
      sub_946B0("May not insert %stracepoints, skipping tracepoint %d", v9, *(_DWORD *)(v10 + 24));
      v3 = *v2;
      if ( ++v8 >= *v2 )
        goto LABEL_13;
    }
    if ( !dword_46DBF8 )
    {
      v9 = "fast ";
      goto LABEL_6;
    }
LABEL_12:
    ++v8;
    ++v4;
  }
  while ( v8 < v3 );
LABEL_13:
  if ( !v7 )
  {
    if ( !off_489B54(&dword_4899A0) )
      goto LABEL_54;
    sub_946B0("No tracepoints enabled");
  }
  if ( !v4 )
  {
    free(v2);
    sub_946E0("No tracepoints that may be downloaded, not starting trace");
  }
  off_489B94(&dword_4899A0);
  if ( *v2 )
  {
    for ( i = 0; i < *v2; ++i )
    {
      v15 = (_DWORD *)v5[1];
      ++v5;
      v14 = v15;
      for ( j = (int *)v15[7]; j; j = (int *)*j )
        *((_BYTE *)j + 39) = 0;
      if ( v14[3] == 28 )
        v17 = &dword_46DBF8;
      else
        v17 = &dword_46DBF0;
      if ( *v17 )
      {
        v18 = (int *)v14[7];
        v14[36] = 0;
        if ( v18 )
        {
          if ( *((_BYTE *)v18 + 39) )
          {
LABEL_53:
            sub_94700(
              (int)"tracepoint.c",
              1646,
              "%s: Assertion `%s' failed.",
              "void start_tracing(const char*)",
              "!loc->inserted");
LABEL_54:
            free(v2);
            sub_946E0("No tracepoints enabled, not starting trace");
          }
          while ( 1 )
          {
            off_489B98(&dword_4899A0, v18);
            *((_BYTE *)v18 + 39) = 1;
            v18 = (int *)*v18;
            if ( !v18 )
              break;
            if ( *((_BYTE *)v18 + 39) )
              goto LABEL_53;
          }
          v19 = (_DWORD *)v14[7];
          for ( v14[36] = v14[6]; v19; v19 = (_DWORD *)*v19 )
          {
            v20 = v19[19];
            if ( v20 )
            {
              v21 = *(void (**)(void))(*(_DWORD *)v20 + 28);
              if ( v21 != nullsub_7 )
                v21();
            }
          }
          sub_1B9D50((int)v14);
        }
        else
        {
          v14[36] = v14[6];
        }
      }
    }
  }
  free(v2);
  v22 = dword_48A910;
  if ( dword_48A910 && *(_DWORD *)dword_48A910 )
  {
    v23 = 8;
    v24 = 0;
    do
    {
      ++v24;
      off_489BA0(&dword_4899A0, v22 + v23);
      v22 = dword_48A910;
      if ( !dword_48A910 )
        break;
      v23 += 40;
    }
    while ( v24 < *(_DWORD *)dword_48A910 );
  }
  off_489BAC(&dword_4899A0);
  off_489BDC(&dword_4899A0, dword_48A8A8);
  off_489BE0(&dword_4899A0, dword_48A8AC);
  off_489BE4(&dword_4899A0, off_489BE4, dword_46DCF0, dword_46DCF0 >> 31);
  if ( a1 )
  {
    if ( !off_489BE8(&dword_4899A0, dword_48A8B8, a1, 0) )
      goto LABEL_46;
  }
  else
  {
    v25 = dword_48A8B4;
    if ( !off_489BE8(&dword_4899A0, dword_48A8B8, dword_48A8B4, 0) )
    {
      v26 = v25 == 0;
      if ( !v25 )
        v26 = dword_48A8B8 == 0;
      if ( !v26 )
LABEL_46:
        sub_946B0("Target does not support trace user/notes, info ignored");
    }
  }
  off_489BB0(&dword_4899A0);
  sub_24A810();
  dword_48A8D0 = 1;
}
