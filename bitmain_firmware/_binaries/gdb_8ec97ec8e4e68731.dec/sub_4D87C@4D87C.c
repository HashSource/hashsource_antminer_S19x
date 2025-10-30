unsigned __int8 *__fastcall sub_4D87C(int a1)
{
  int v2; // r9
  int v3; // r7
  int v4; // r0
  int *v5; // r6
  int v6; // r0
  unsigned __int8 *result; // r0
  int v8; // r4
  unsigned __int8 *v9; // r5
  int *v10; // r6
  _BYTE *v11; // r8
  int v13; // r3
  char *v14; // r0
  int v15; // r4
  _BYTE *v16; // r9
  unsigned __int8 *i; // r5
  int v19; // r3

  v2 = *(_DWORD *)(a1 + 84);
  v3 = sub_98F68(a1);
  v4 = ps_getpid_0(a1);
  v5 = sub_4D6EC(v4);
  v6 = ps_getpid_0(a1);
  result = (unsigned __int8 *)sub_4D6EC(v6);
  if ( v2 )
  {
    v8 = 0;
    v9 = result;
    v10 = v5 + 2;
    v11 = (_BYTE *)(v2 - 1);
    while ( 1 )
    {
      v14 = sub_4D77C();
      if ( !v14 || v8 >= (unsigned __int8)v14[3] )
        break;
      if ( *++v11 )
      {
        *_errno_location() = 0;
        v13 = v10[1];
        if ( (v13 & 1) != 0 )
        {
          if ( ptrace(PTRACE_SYSCALL|PTRACE_POKEUSER, v3, 2 * v8 + 1, v10) < 0 )
            goto LABEL_26;
          v13 = v10[1];
        }
        ++v8;
        if ( v13 && ptrace(PTRACE_SYSCALL|PTRACE_POKEUSER, v3, 2 * v8, v10 + 1) < 0 )
LABEL_26:
          sub_258B04("Unexpected error setting breakpoint");
        *v11 = 0;
      }
      else
      {
        ++v8;
      }
      v10 += 2;
    }
    v15 = 0;
    v16 = (_BYTE *)(v2 + 15);
    for ( i = v9 + 136; ; i += 8 )
    {
      result = (unsigned __int8 *)sub_4D77C();
      if ( !result || v15 >= result[2] )
        return result;
      if ( *++v16 )
        break;
      ++v15;
LABEL_15:
      ;
    }
    *_errno_location() = 0;
    v19 = *((_DWORD *)i + 1);
    if ( (v19 & 1) != 0 )
    {
      if ( ptrace(PTRACE_SYSCALL|PTRACE_POKEUSER, v3, ~(2 * v15), i) < 0 )
        goto LABEL_24;
      ++v15;
      if ( !*((_DWORD *)i + 1) )
        goto LABEL_14;
    }
    else
    {
      ++v15;
      if ( !v19 )
      {
LABEL_14:
        *v16 = 0;
        goto LABEL_15;
      }
    }
    if ( ptrace(PTRACE_SYSCALL|PTRACE_POKEUSER, v3, -2 * v15, i + 4) < 0 )
LABEL_24:
      sub_258B04("Unexpected error setting watchpoint");
    goto LABEL_14;
  }
  return result;
}
