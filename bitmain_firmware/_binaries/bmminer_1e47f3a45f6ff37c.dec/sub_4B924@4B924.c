void sub_4B924()
{
  _DWORD *v0; // r0
  int v1; // r3
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C <= 4 )
  {
    v0 = (_DWORD *)dword_535D94;
    if ( !dword_535D94 )
      return;
LABEL_3:
    v1 = v0[1];
    if ( v1 )
    {
      (*(void (**)(void))(v1 + 8))();
      if ( (unsigned int)dword_B308C <= 4 )
        goto LABEL_5;
    }
    else if ( (unsigned int)dword_B308C <= 4 )
    {
LABEL_6:
      free(v0);
      dword_535D94 = 0;
      return;
    }
LABEL_9:
    strcpy(v2, "[DEBUG] Free memory for pattern test.\n");
    sub_3B6AC(4, v2, 0, *(unsigned __int16 *)"");
LABEL_5:
    v0 = (_DWORD *)dword_535D94;
    if ( !dword_535D94 )
      return;
    goto LABEL_6;
  }
  strcpy(v2, "[DEBUG] Pattern test exit.\n");
  sub_3B6AC(4, v2, 0, *(int *)"ern test exit.\n");
  v0 = (_DWORD *)dword_535D94;
  if ( dword_535D94 )
    goto LABEL_3;
  if ( (unsigned int)dword_B308C > 4 )
    goto LABEL_9;
}
