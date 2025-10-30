void __fastcall sub_3BA10(int *a1)
{
  __pid_t *v2; // r5
  int v3; // r0
  _BYTE v4[8]; // [sp+4h] [bp-8h] BYREF

  v2 = (__pid_t *)a1[4];
  close(a1[1]);
  a1[1] = -1;
  if ( v2 )
  {
    if ( ((int (__fastcall *)(__pid_t, _BYTE *, int))loc_25B424)(*v2, v4, 5) == -1 )
    {
      kill(*v2, 15);
      ((void (__fastcall *)(__pid_t, _BYTE *, int))loc_25B424)(*v2, v4, 0x7FFFFFFF);
      v3 = a1[2];
      if ( v3 == -1 )
        goto LABEL_4;
    }
    else
    {
      v3 = a1[2];
      if ( v3 == -1 )
      {
LABEL_4:
        a1[2] = -1;
        free(v2);
        a1[4] = 0;
        return;
      }
    }
    close(v3);
    goto LABEL_4;
  }
}
