int *sub_3C7D8(int *a1, int a2, ...)
{
  int *v3; // r7
  __pid_t v4; // r0
  __pid_t v5; // r4
  int v6; // r5
  int v7; // r1
  int v8; // r0
  int v9; // r4
  const char *v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int stat_loc; // [sp+4h] [bp-4h] BYREF
  int varg_r2; // [sp+28h] [bp+20h] BYREF
  va_list varg_r2a; // [sp+28h] [bp+20h]
  int varg_r3; // [sp+2Ch] [bp+24h]
  int v19; // [sp+30h] [bp+28h]
  _DWORD *v20; // [sp+34h] [bp+2Ch]
  va_list va1; // [sp+38h] [bp+30h] BYREF

  va_start(va1, a2);
  va_start(varg_r2a, a2);
  varg_r2 = va_arg(va1, _DWORD);
  varg_r3 = va_arg(va1, _DWORD);
  v19 = va_arg(va1, _DWORD);
  v20 = va_arg(va1, _DWORD *);
  v3 = _errno_location();
  while ( 2 )
  {
    sub_27EA9C();
    while ( 1 )
    {
      v4 = ps_getpid_0((int *)varg_r2a);
      v5 = waitpid(v4, &stat_loc, 0);
      v6 = *v3;
      if ( v5 != -1 )
        break;
      if ( v6 != 4 )
      {
        v8 = sub_27EAFC();
        v9 = *(_DWORD *)sub_242FB4(v8);
        v10 = (const char *)sub_6FF98(v6);
        sub_2594B0(v9, "Child process unexpectedly missing: %s.\n", v10);
        v11 = dword_4878EC;
        v12 = dword_4878F0;
        v13 = dword_4878F4;
        *v20 = 2;
        v20[1] = 143;
        *a1 = v11;
        a1[1] = v12;
        a1[2] = v13;
        return a1;
      }
    }
    sub_27EAFC();
    v7 = stat_loc;
    if ( (unsigned __int8)stat_loc != 127 )
    {
      if ( v5 != ps_getpid_0(&dword_4878EC) )
        continue;
      v7 = stat_loc;
    }
    break;
  }
  sub_17CCDC(v20, v7);
  sub_98F50(a1, v5);
  return a1;
}
