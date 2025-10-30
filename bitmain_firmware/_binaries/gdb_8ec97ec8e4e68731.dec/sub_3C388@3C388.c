int __fastcall sub_3C388(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned __int64 a8,
        unsigned __int64 *a9)
{
  int v10; // r9
  int v11; // r8
  int result; // r0
  unsigned __int64 v13; // r4
  char *v14; // r0
  int *v15; // r10
  int v16; // r3
  unsigned __int64 v17; // r6
  bool v18; // cc
  _BOOL4 v19; // r3
  int v20; // [sp+Ch] [bp-28h]
  int v21; // [sp+18h] [bp-1Ch]
  int *v22; // [sp+18h] [bp-1Ch]
  int v24; // [sp+20h] [bp-14h] BYREF
  _DWORD v25[4]; // [sp+24h] [bp-10h] BYREF

  v25[0] = dword_4878EC;
  v25[1] = dword_4878F0;
  v25[2] = dword_4878F4;
  v20 = sub_98F68(v25);
  if ( !v20 )
    v20 = ps_getpid_0(v25);
  if ( a2 != 2 )
    return -1;
  v10 = a7 & 3;
  v11 = a7 - v10;
  result = 0;
  if ( a8 )
  {
    v13 = 0;
    do
    {
      v17 = 4LL - (unsigned int)v10;
      v18 = v17 > a8 - v13;
      if ( v17 > a8 - v13 )
        HIDWORD(v17) = (a8 - v13) >> 32;
      v19 = a4 != 0;
      if ( v18 )
        LODWORD(v17) = a8 - v13;
      if ( (unsigned int)v17 <= 3 )
        v19 = 1;
      if ( v19 )
      {
        v22 = _errno_location();
        *v22 = 0;
        v24 = ptrace(PTRACE_PEEKTEXT, v20, v11, 0, a8 - v13);
        if ( *v22 )
          break;
        if ( a4 )
          memcpy((void *)(a4 + v13), (char *)&v25[-1] + v10, v17);
      }
      v14 = (char *)&v25[-1] + v10;
      v10 = 0;
      if ( a5 )
      {
        memcpy(v14, (const void *)(a5 + v13), v17);
        v15 = _errno_location();
        v16 = v24;
        *v15 = 0;
        v21 = v16;
        ptrace(PTRACE_POKEDATA, v20, v11);
        if ( *v15 )
        {
          *v15 = 0;
          ptrace(PTRACE_POKETEXT, v20, v11, v21);
          if ( *v15 )
            break;
        }
      }
      v13 += v17;
      v11 += 4;
    }
    while ( a8 > v13 );
    result = v13 != 0;
  }
  else
  {
    v13 = 0;
  }
  *a9 = v13;
  return result;
}
