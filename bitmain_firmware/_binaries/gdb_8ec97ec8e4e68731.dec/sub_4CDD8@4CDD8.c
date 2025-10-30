int sub_4CDD8()
{
  int *v0; // r5
  __pid_t v2; // r8
  int v3; // r7
  __pid_t v4; // r0
  int v5; // r6
  __int64 v6; // r2
  int *v7; // r4
  int v8; // r6
  int v9; // [sp+0h] [bp-8h] BYREF
  int fd; // [sp+4h] [bp-4h]

  v0 = (int *)dword_473738;
  if ( !dword_473738 )
  {
    v2 = getpid();
    v3 = ((int (__fastcall *)(int))loc_4C680)(1);
    if ( v3 )
    {
      if ( sub_968FC(1, 1, 0, &v9) >= 0 )
      {
        v4 = fork();
        v5 = v4;
        dword_473728 = v4;
        if ( v4 < 0 )
        {
          v7 = _errno_location();
          v8 = *v7;
          close(v9);
          close(fd);
          *v7 = v8;
        }
        else
        {
          if ( !v4 )
          {
            close(v9);
            dword_473720 = v2;
            dword_473724 = v5;
            sub_4CBAC(fd);
          }
          v0 = &dword_473728;
          close(fd);
          v6 = *(_QWORD *)(v3 + 16);
          dword_473738 = (int)&dword_473728;
          dword_47372C = v9;
          *(_QWORD *)&dword_473730 = v6;
          if ( dword_473724 )
          {
            sub_92B14("Started mount namespace helper process %d\n", dword_473728);
            return dword_473738;
          }
        }
      }
    }
  }
  return (int)v0;
}
