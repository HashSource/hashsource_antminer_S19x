int __fastcall sub_3BAB0(_DWORD *a1, int a2)
{
  __pid_t v2; // r4
  int v3; // r0
  __pid_t *v4; // r0
  int v5; // r12
  int v6; // r2
  int fd; // [sp+10h] [bp-14h] BYREF
  int v11; // [sp+14h] [bp-10h]
  int v12; // [sp+18h] [bp-Ch] BYREF
  int v13; // [sp+1Ch] [bp-8h]

  if ( sub_968FC(1, 1, 0, &fd) < 0 )
    return -1;
  if ( sub_968FC(1, 1, 0, &v12) < 0 )
  {
    close(fd);
    close(v11);
    return -1;
  }
  v2 = vfork();
  if ( v2 == -1 )
  {
    close(fd);
    close(v11);
    close(v12);
    close(v13);
    return -1;
  }
  else
  {
    if ( sub_333C44(v12, 4, 2048) == -1 )
    {
      close(v12);
      close(v13);
      v13 = -1;
      v12 = -1;
      if ( !v2 )
      {
LABEL_6:
        if ( setsid() == -1 )
          signal(2, (__sighandler_t)1);
        close(fd);
        if ( v11 != 1 )
        {
          dup2(v11, 1);
          close(v11);
        }
        dup2(1, 0);
        v3 = v12;
        if ( v12 != -1 )
        {
          close(v12);
          dup2(v13, 2);
          v3 = close(v13);
        }
        sub_967A8(v3);
        execl("/bin/sh", "sh", "-c", a2, 0);
        exit(127);
      }
    }
    else if ( !v2 )
    {
      goto LABEL_6;
    }
    close(v11);
    if ( v13 != -1 )
      close(v13);
    v4 = (__pid_t *)sub_93028(4);
    v5 = fd;
    v6 = v12;
    a1[4] = v4;
    a1[1] = v5;
    a1[2] = v6;
    *v4 = v2;
    signal(13, (__sighandler_t)1);
    return 0;
  }
}
