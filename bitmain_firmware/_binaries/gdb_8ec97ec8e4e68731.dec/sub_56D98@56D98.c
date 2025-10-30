void __fastcall sub_56D98(int a1, int a2)
{
  int v3; // r0
  _DWORD *v4; // r0
  int v5; // r0
  void *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  int v9; // [sp+4h] [bp-4h] BYREF

  if ( dword_4747F4 )
  {
    v9 = 0;
    sub_19168C(&v9, 0);
    v3 = v9;
    if ( v9 )
      v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
    v4 = (_DWORD *)sub_242FDC(v3);
    v5 = sub_2573F0(*v4);
    if ( v5 )
    {
      if ( !a2 )
        goto LABEL_6;
    }
    else
    {
      v7 = (_DWORD *)sub_242FDC(0);
      v5 = sub_2573D8(*v7, 0);
      if ( !a2 )
      {
LABEL_6:
        v6 = (void *)dword_4747F4;
        if ( !dword_4747F4 )
        {
LABEL_8:
          dword_4747F4 = 0;
          return;
        }
LABEL_7:
        free(v6);
        goto LABEL_8;
      }
    }
    v8 = (_DWORD *)sub_242F8C(v5);
    sub_2594B0(*v8, "Done logging to %s.\n", (const char *)dword_4747F4);
    v6 = (void *)dword_4747F4;
    if ( !dword_4747F4 )
      goto LABEL_8;
    goto LABEL_7;
  }
}
