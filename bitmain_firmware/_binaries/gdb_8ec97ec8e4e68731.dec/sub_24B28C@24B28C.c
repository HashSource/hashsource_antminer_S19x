int __fastcall sub_24B28C(int result)
{
  _DWORD *v1; // r0
  _DWORD *v2; // lr
  int v3; // r12
  int *v4; // r3
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // t1

  if ( !result )
    return result;
  result = off_489BB4(&dword_4899A0, &dword_48A8C8);
  if ( result < 0 )
  {
    dword_48A8D0 = 0;
    return result;
  }
  if ( !dword_48A8D0 )
    return result;
  v1 = (_DWORD *)((int (*)(void))loc_D20F4)();
  v2 = v1;
  if ( v1 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      v4 = *(int **)(v1[2] + 28);
      if ( !v4 )
      {
LABEL_13:
        free(v1);
        sub_946B0("Pending tracepoints will not be resolved while GDB is disconnected\n");
        goto LABEL_14;
      }
      v5 = v1 + 2;
      v6 = 0;
      while ( 1 )
      {
        do
        {
          if ( *((_BYTE *)v4 + 37) )
          {
LABEL_12:
            v1 = v2;
            goto LABEL_13;
          }
          v4 = (int *)*v4;
        }
        while ( v4 );
        if ( v3 == ++v6 )
          break;
        v7 = v5[1];
        ++v5;
        v4 = *(int **)(v7 + 28);
        if ( !v4 )
          goto LABEL_12;
      }
      v1 = v2;
    }
    free(v1);
  }
LABEL_14:
  if ( dword_48A8F0 )
  {
    result = sub_25A3E4("Trace is running and will continue after detach; detach anyway? ");
    if ( !result )
      goto LABEL_16;
  }
  else
  {
    result = sub_25A3E4("Trace is running but will stop on detach; detach anyway? ");
    if ( !result )
LABEL_16:
      sub_946E0("Not confirmed.");
  }
  return result;
}
