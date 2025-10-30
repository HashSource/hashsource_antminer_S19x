void sub_27E538()
{
  int v0; // r6
  _DWORD *v1; // r0
  _DWORD *v2; // r5
  int v3; // r5
  int *v4; // r0
  char *v5; // r0
  int v6; // r7
  int *v7; // r0
  char *v8; // r0
  int v9; // r7
  int *v10; // r0
  char *v11; // r0

  if ( dword_48AA70 )
  {
    v0 = sub_183688();
    v1 = (_DWORD *)sub_27E298(v0);
    v2 = v1;
    if ( dword_48AA74 && v1[1] && !*v1 )
    {
      if ( sub_333C44(0, 4, v1[3]) == -1 )
      {
        v9 = *(_DWORD *)sub_242FB4();
        v10 = _errno_location();
        v11 = sub_6FF98(*v10);
        sub_2594B0(v9, "[%s failed in terminal_inferior: %s]\n", "fcntl F_SETFL", v11);
      }
      if ( sub_1FE0E0(dword_48AA78) == -1 )
      {
        v6 = *(_DWORD *)sub_242FB4();
        v7 = _errno_location();
        v8 = sub_6FF98(*v7);
        sub_2594B0(v6, "[%s failed in terminal_inferior: %s]\n", "setting tty state", v8);
      }
      if ( dword_475220
        || (dword_48AA8C = (int)signal(2, (__sighandler_t)1),
            dword_48AA90 = (int)signal(3, (__sighandler_t)1),
            dword_475220) )
      {
        if ( ((tcsetpgrp(0, v2[2]) == -1) & (*(unsigned __int8 *)(v0 + 120) ^ 1)) != 0 )
        {
          v3 = *(_DWORD *)sub_242FB4();
          v4 = _errno_location();
          v5 = sub_6FF98(*v4);
          sub_2594B0(v3, "[%s failed in terminal_inferior: %s]\n", "tcsetpgrp", v5);
        }
      }
    }
    dword_48AA70 = 0;
  }
}
