void sub_27E2E8()
{
  int v0; // r8
  _DWORD *v1; // r5
  void (*v2)(int); // r6
  void *v3; // r0
  int v4; // r0
  int v5; // r3

  if ( !dword_48AA70 )
  {
    dword_48AA70 = 1;
    v0 = sub_183688();
    v1 = (_DWORD *)sub_27E298(v0);
    if ( !*v1 )
    {
      if ( dword_48AA74 )
      {
        if ( dword_475220 )
          v2 = signal(22, (__sighandler_t)1);
        else
          v2 = 0;
        v3 = (void *)v1[1];
        if ( v3 )
          free(v3);
        v4 = sub_1FE0C8(dword_48AA78);
        v5 = *(unsigned __int8 *)(v0 + 120);
        v1[1] = v4;
        if ( !v5 )
          v1[2] = tcgetpgrp(0);
        sub_1FE0E0(dword_48AA78);
        if ( !dword_475220 || (tcsetpgrp(0, dword_48AA84), !dword_475220) )
        {
          signal(2, (__sighandler_t)dword_48AA8C);
          signal(3, (__sighandler_t)dword_48AA90);
        }
        v1[3] = sub_333C44(0, 3, 0);
        sub_333C44(0, 4, dword_48AA88);
        if ( dword_475220 )
          signal(22, v2);
      }
    }
  }
}
