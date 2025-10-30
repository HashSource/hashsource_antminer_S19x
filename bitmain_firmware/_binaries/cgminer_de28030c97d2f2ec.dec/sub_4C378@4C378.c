int sub_4C378()
{
  int result; // r0
  int pipedes[2]; // [sp+Ch] [bp-18h] BYREF
  __sighandler_t v2; // [sp+14h] [bp-10h]
  __sighandler_t v3; // [sp+18h] [bp-Ch]
  int v4; // [sp+1Ch] [bp-8h]

  v4 = pipe(pipedes);
  if ( v4 < 0 )
  {
    perror("pipe - failed to create pipe for --monitor");
    exit(1);
  }
  fflush((FILE *)stderr);
  v4 = dup2(pipedes[1], 2);
  if ( v4 < 0 )
  {
    perror("dup2 - failed to alias stderr to write end of pipe for --monitor");
    exit(1);
  }
  v4 = close(pipedes[1]);
  if ( v4 < 0 )
  {
    perror("close - failed to close write end of pipe for --monitor");
    exit(1);
  }
  v3 = signal(13, (__sighandler_t)1);
  v2 = signal(13, (__sighandler_t)1);
  if ( v3 == (__sighandler_t)-1 || v2 == (__sighandler_t)-1 )
  {
    perror("signal - failed to edit signal mask for --monitor");
    exit(1);
  }
  dword_88144 = fork();
  if ( dword_88144 < 0 )
  {
    perror("fork - failed to fork child process for --monitor");
    exit(1);
  }
  if ( !dword_88144 )
  {
    v4 = dup2(pipedes[0], 0);
    if ( v4 < 0 )
    {
      perror("dup2 - in child, failed to alias read end of pipe to stdin for --monitor");
      exit(1);
    }
    close(pipedes[0]);
    if ( v4 < 0 )
    {
      perror("close - in child, failed to close read end of  pipe for --monitor");
      exit(1);
    }
    execl("/bin/bash", "/bin/bash", "-c", dword_88140, 0);
    perror("execl - in child failed to exec user specified command for --monitor");
    exit(1);
  }
  result = close(pipedes[0]);
  v4 = result;
  if ( result < 0 )
  {
    perror("close - failed to close read end of pipe for --monitor");
    exit(1);
  }
  return result;
}
