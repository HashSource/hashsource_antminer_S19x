int __fastcall sub_B1624(_BYTE *a1)
{
  int *v2; // r0
  int v3; // r6
  int v4; // r2
  int v6; // r7
  int v7; // r0
  int v8; // r5
  int v9; // r8
  int v10; // r0
  unsigned int *v11; // r6
  unsigned int v12; // r5
  int v13; // r4
  int v14; // r0
  const char *v15; // r0
  int v16; // r4
  int v17; // r0
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r0
  unsigned int *v22; // r9
  unsigned int v23; // r10
  unsigned int *v24; // r5
  int v25; // r0
  unsigned int v26; // r2
  int v27; // r0
  int v28; // r4
  unsigned int *v29; // r1
  unsigned int v30; // r4
  int v31; // r4
  int v32; // r0

  v2 = (int *)sub_242FDC(a1);
  v3 = *v2;
  if ( !a1 || !*a1 )
  {
    v4 = sub_183688(v2);
    return sub_B0D94(v3, 0, v4);
  }
  v6 = sub_183688(v2);
  v7 = sub_14CC6C(a1);
  v8 = sub_26EB1C(v7);
  v9 = sub_AFAEC(v6);
  v10 = ((int (*)(void))loc_B0744)();
  if ( !v10 )
    return sub_25738C(v3, "Your application does not use any Ada tasks.\n");
  if ( v8 <= 0 || (v11 = *(unsigned int **)(v9 + 20)) == 0 || *v11 < v8 )
    sub_946E0("Task ID %d not known.  Use the \"info tasks\" command to\nsee the IDs of currently known tasks", v8);
  v12 = v8 - 1;
  if ( *v11 <= v12 )
  {
    sub_15B78(1193);
  }
  else
  {
    v13 = 75 * v12;
    v14 = sub_16F654(v10);
    v15 = (const char *)sub_25AC8C(v14, v11[75 * v12 + 5]);
    sub_259F10("Ada Task: %s\n", v15);
    if ( LOBYTE(v11[75 * v12 + 6]) )
      sub_259F10("Name: %s\n", (const char *)&v11[v13 + 6]);
    else
      sub_259F10("<no name>\n");
    v16 = (int)&v11[v13 + 2];
    v17 = sub_98F70(v16);
    sub_259F10("Thread: %#lx\n", v17);
    v18 = sub_98F68(v16);
    sub_259F10("LWP: %#lx\n", v18);
    v19 = v11[75 * v12 + 76];
    if ( v19 )
      sub_259F10("Base CPU: %d\n", v19);
    v20 = v11[75 * v12 + 73];
    if ( v20 && (v21 = sub_AFC48(v20, v6), (v19 = v21) != 0) )
    {
      v22 = *(unsigned int **)(v9 + 20);
      v23 = v21 - 1;
      if ( !v22 || v23 >= *v22 )
        goto LABEL_38;
      sub_259F10("Parent: %d", v21);
      if ( LOBYTE(v22[75 * v23 + 6]) )
        sub_259F10(" (%s)", (const char *)&v22[75 * v23 + 6]);
      sub_259F10((const char *)&word_356638);
    }
    else
    {
      sub_259F10("No parent\n", v19);
    }
    v24 = &v11[75 * v12];
    sub_259F10("Base Priority: %d\n", v24[72]);
    v25 = v24[75];
    if ( v25 )
    {
      v28 = sub_AFC48(v25, v6);
      sub_259F10("State: Accepting rendezvous with %d", v28);
    }
    else
    {
      v26 = v24[71];
      if ( v26 != 5 || (v27 = v24[74]) == 0 )
      {
        sub_259F10("State: %s", *(const char **)&aAdaTaskInfoSVe[4 * v26 + 360]);
        return sub_259F10((const char *)&word_356638);
      }
      v28 = sub_AFC48(v27, v6);
      sub_259F10("State: Waiting on task %d's entry", v28);
    }
    if ( !v28 )
      return sub_259F10((const char *)&word_356638);
    v29 = *(unsigned int **)(v9 + 20);
    v30 = v28 - 1;
    if ( v29 && v30 < *v29 )
    {
      v31 = 75 * v30;
      if ( LOBYTE(v29[v31 + 6]) )
        sub_259F10(" (%s)", (const char *)&v29[v31 + 6]);
      return sub_259F10((const char *)&word_356638);
    }
  }
  sub_15B78(1254);
LABEL_38:
  v32 = sub_15B78(1219);
  return sub_B1938(v32);
}
