void sub_373BC()
{
  _DWORD *v0; // r0
  int v1; // r3
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v2, "[DEBUG] Pattern test exit.\n");
    sub_47AB4(4, v2, 0);
    v0 = (_DWORD *)dword_1AEA78;
    if ( !dword_1AEA78 )
    {
      if ( (unsigned int)dword_9E31C <= 4 )
        return;
      goto LABEL_9;
    }
  }
  else
  {
    v0 = (_DWORD *)dword_1AEA78;
    if ( !dword_1AEA78 )
      return;
  }
  v1 = v0[1];
  if ( v1 )
  {
    (*(void (**)(void))(v1 + 8))();
    if ( (unsigned int)dword_9E31C <= 4 )
      goto LABEL_5;
    goto LABEL_9;
  }
  if ( (unsigned int)dword_9E31C > 4 )
  {
LABEL_9:
    strcpy(v2, "[DEBUG] Free memory for pattern test.\n");
    sub_47AB4(4, v2, 0);
LABEL_5:
    v0 = (_DWORD *)dword_1AEA78;
    if ( !dword_1AEA78 )
      return;
  }
  free(v0);
  dword_1AEA78 = 0;
}
