void __fastcall sub_10C124(int a1)
{
  int v2; // r5
  void **v3; // r7
  int v4; // r8
  char *v5; // r0
  char *v6; // r6
  _DWORD *v7; // r9
  const char *v8; // r5
  int v9; // r4
  _DWORD *v10; // r0
  _DWORD *v11; // r0

  v2 = sub_B894C(a1);
  v3 = (void **)((int (*)(void))loc_16EAC8)();
  v4 = sub_29BF90(a1);
  if ( v4 )
  {
    v5 = (char *)((int (__fastcall *)(int))loc_16EB40)(v2);
    v6 = v5;
    if ( v5 )
    {
      v7 = *(_DWORD **)v5;
      v8 = (const char *)v4;
      while ( *v7 )
      {
        v9 = 0;
        while ( 1 )
        {
          v5 = (char *)sub_29C104(v8);
          if ( !v5 )
            break;
          v9 += 4;
          if ( !*(_DWORD *)(*(_DWORD *)v6 + v9) )
            goto LABEL_12;
        }
        v7 = *(_DWORD **)v6;
        if ( !*(_DWORD *)(*(_DWORD *)v6 + v9) )
          break;
        v5 = strchr(v8, 44);
        if ( v5 )
        {
          v8 = v5 + 1;
          if ( v5 != (char *)-1 )
            continue;
        }
        free(*v3);
        *v3 = (void *)sub_327254(v4);
        return;
      }
LABEL_12:
      v10 = (_DWORD *)sub_242FC8(v5);
      sub_25A418(*v10, "Invalid disassembler option value: '%s'.\n", v8);
    }
    else
    {
      v11 = (_DWORD *)sub_242FC8(0);
      sub_25A418(*v11, "'set disassembler-options ...' is not supported on this architecture.\n");
    }
  }
  else if ( v3 )
  {
    free(*v3);
    *v3 = 0;
  }
}
