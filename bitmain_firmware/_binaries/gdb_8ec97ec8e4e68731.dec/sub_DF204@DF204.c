void __fastcall sub_DF204(_BYTE *a1, int a2, int (__fastcall *a3)(_DWORD *))
{
  _DWORD *v4; // r4
  int v6; // r8
  int v7; // r4
  int v8; // r0
  _DWORD *v9; // r0
  void *v10; // r6
  int *v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  const char *v14; // r2
  int v15; // r2
  int *v16; // r6
  int v17; // r7
  int *v18; // r0
  char *v19; // r0
  char *ptr; // [sp+0h] [bp-24h]
  int v21; // [sp+4h] [bp-20h]
  _BYTE v23[20]; // [sp+10h] [bp-14h] BYREF

  if ( !a1 || !*a1 )
    sub_946E0("Argument required (file name in which to save)");
  v4 = (_DWORD *)dword_478348;
  if ( !dword_478348 )
  {
LABEL_14:
    sub_946B0("Nothing to save.");
    return;
  }
  v6 = 0;
  do
  {
    if ( (int)v4[6] > 0 && (!a3 || a3(v4)) )
    {
      if ( (unsigned int)(v4[3] - 27) <= 2 )
      {
        v21 = 1;
        goto LABEL_17;
      }
      v6 = 1;
    }
    v4 = (_DWORD *)v4[2];
  }
  while ( v4 );
  if ( !v6 )
    goto LABEL_14;
  v21 = 0;
LABEL_17:
  ptr = (char *)sub_29B910(a1);
  sub_25689C(v23);
  if ( !sub_2568D4(v23, ptr, "w") )
  {
    v18 = _errno_location();
    v19 = sub_6FF98(*v18);
    sub_946E0("Unable to open file '%s' for saving (%s)", ptr, v19);
  }
  if ( v21 )
  {
    sub_24A084(v23);
    v7 = dword_478348;
    if ( !dword_478348 )
    {
LABEL_42:
      if ( *(_BYTE *)dword_48A914 )
        sub_25678C(v23, "set default-collect %s\n", (const char *)dword_48A914);
      goto LABEL_44;
    }
    do
    {
LABEL_28:
      if ( *(int *)(v7 + 24) > 0 && (!a3 || a3((_DWORD *)v7)) )
      {
        (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)(v7 + 4) + 48))(v7, v23);
        v14 = *(const char **)(v7 + 100);
        if ( v14 )
          sub_25678C(v23, "  condition $bpnum %s\n", v14);
        v15 = *(_DWORD *)(v7 + 36);
        if ( v15 )
          sub_25678C(v23, "  ignore $bpnum %d\n", v15);
        if ( *(_DWORD *)(v7 + 12) != 30 && *(_DWORD *)(v7 + 44) )
        {
          v8 = sub_256648((int)v23, "  commands\n");
          v9 = (_DWORD *)sub_242FDC(v8);
          sub_2573D8(*v9, v23);
          v10 = sub_92E28();
          v11 = (int *)sub_242FDC(v10);
          sub_57ADC(*v11, *(int ***)(v7 + 44), 2);
          v12 = sub_92E40((int)v10);
          v13 = (_DWORD *)sub_242FDC(v12);
          sub_2573D8(*v13, 0);
          sub_256648((int)v23, "  end\n");
        }
        if ( !*(_DWORD *)(v7 + 16) )
          sub_256648((int)v23, "disable $bpnum\n");
        if ( (unsigned int)(*(_DWORD *)(v7 + 12) - 6) > 3 )
        {
          v16 = *(int **)(v7 + 28);
          if ( v16 )
          {
            if ( *v16 )
            {
              v17 = 1;
              do
              {
                if ( !*((_BYTE *)v16 + 38) )
                  sub_25678C(v23, "disable $bpnum.%d\n", v17);
                v16 = (int *)*v16;
                ++v17;
              }
              while ( v16 );
            }
          }
        }
      }
      v7 = *(_DWORD *)(v7 + 8);
    }
    while ( v7 );
    if ( !v21 )
      goto LABEL_44;
    goto LABEL_42;
  }
  v7 = dword_478348;
  if ( dword_478348 )
    goto LABEL_28;
LABEL_44:
  if ( a2 )
    sub_259F10("Saved to file '%s'.\n", ptr);
  sub_256514(v23);
  if ( ptr )
    free(ptr);
}
