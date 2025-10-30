int __fastcall sub_1ECBF8(int a1, int a2, int a3, int a4, _DWORD *a5, int a6)
{
  unsigned int v9; // r0
  int v10; // r2
  int v11; // r7
  int v12; // r0
  const char *v13; // r0
  _BYTE **v14; // r4
  int v15; // r0
  int v16; // r4
  int v18; // r1
  _DWORD *v19; // r3
  int v21; // r0
  _DWORD *v22; // r5
  int v23; // t1
  unsigned int v24; // r4
  bool v25; // cf
  _DWORD *v26; // r0
  void *ptr; // [sp+8h] [bp-1Ch] BYREF
  int v28; // [sp+Ch] [bp-18h]
  _BYTE v29[20]; // [sp+10h] [bp-14h] BYREF

  v9 = ((int (__fastcall *)(int))loc_1E2198)(36);
  if ( v9 == 2 )
    return 1;
  if ( a4 )
    v10 = 0;
  else
    v10 = a3 & 1;
  if ( v10 )
  {
    if ( a6 )
    {
      v9 = (unsigned int)&a5[a6];
      v19 = a5;
      v18 = 0;
      do
      {
        if ( *v19++ )
          ++v18;
      }
      while ( (_DWORD *)v9 != v19 );
    }
    else
    {
      v18 = 0;
    }
    if ( !dword_48A590 )
    {
      v28 = 0;
      v29[0] = 0;
      ptr = v29;
LABEL_26:
      sub_33B7B0(&ptr);
      v21 = sub_33BC54((int)&ptr, 0, v28, "QCatchSyscalls:1", 0x10u);
      if ( !a4 && a6 )
      {
        v22 = a5 - 1;
        do
        {
          while ( 1 )
          {
            v23 = v22[1];
            ++v22;
            if ( v23 )
              break;
            if ( a6 == ++a4 )
              goto LABEL_32;
          }
          v21 = sub_93300(&ptr, ";%zx", a4++);
        }
        while ( a6 != a4 );
      }
LABEL_32:
      v24 = v28;
      v9 = sub_1E2890(v21);
      v25 = v9 >= v24;
      if ( v9 >= v24 )
        a4 = (int)ptr;
      else
        a4 = 29796;
      if ( !v25 )
        HIWORD(a4) = 61;
      goto LABEL_13;
    }
    v11 = v18;
  }
  else
  {
    if ( !dword_48A590 )
      goto LABEL_8;
    v11 = 0;
  }
  v26 = (_DWORD *)sub_242FC8(v9);
  v9 = sub_2594B0(*v26, "remote_set_syscall_catchpoint pid %d needed %d any_count %d n_sysno %d\n", a2, a3, a4, v11);
LABEL_8:
  if ( !a3 )
    a4 = 29776;
  ptr = v29;
  if ( !a3 )
    HIWORD(a4) = 61;
  v28 = 0;
  v29[0] = 0;
  if ( a3 )
    goto LABEL_26;
LABEL_13:
  v12 = sub_16F654(v9);
  ((void (__fastcall *)(int))loc_1E2770)(v12);
  v13 = (const char *)a4;
  v14 = (_BYTE **)dword_488C94;
  sub_1E7DEC(v13);
  sub_1E4EB8(v14, (size_t *)v14 + 1, 0, 0, 0);
  v15 = sub_1E1768(*v14, dword_48892C);
  v16 = v15 - 1;
  if ( v15 != 1 )
    v16 = -1;
  if ( ptr != v29 )
    sub_339E64(ptr);
  return v16;
}
