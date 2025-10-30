void sub_49AA8()
{
  _DWORD *v0; // r0
  int v1; // r3
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v2, "[DEBUG] Pattern test exit.\n");
    sub_3AF5C(4, v2, 0, *(int *)"ern test exit.\n");
    v0 = (_DWORD *)dword_530F08;
    if ( !dword_530F08 )
    {
      if ( (unsigned int)off_AFC24 <= 4 )
        return;
      goto LABEL_9;
    }
  }
  else
  {
    v0 = (_DWORD *)dword_530F08;
    if ( !dword_530F08 )
      return;
  }
  v1 = v0[1];
  if ( v1 )
  {
    (*(void (**)(void))(v1 + 8))();
    if ( (unsigned int)off_AFC24 <= 4 )
      goto LABEL_5;
    goto LABEL_9;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
LABEL_9:
    strcpy(v2, "[DEBUG] Free memory for pattern test.\n");
    sub_3AF5C(4, v2, 0, *(unsigned __int16 *)"");
LABEL_5:
    v0 = (_DWORD *)dword_530F08;
    if ( !dword_530F08 )
      return;
  }
  free(v0);
  dword_530F08 = 0;
}
