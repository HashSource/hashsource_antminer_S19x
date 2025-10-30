void sub_47664()
{
  void *v0; // r0
  char v1[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v1, "[DEBUG] Free memory for hw sweep.\n");
    sub_3AF5C(4, v1, 0, *(unsigned __int16 *)"");
  }
  v0 = (void *)dword_530F00;
  if ( dword_530F00 )
  {
    if ( *(_DWORD *)(dword_530F00 + 4) )
    {
      free(*(void **)(dword_530F00 + 4));
      v0 = (void *)dword_530F00;
    }
    free(v0);
    dword_530F00 = 0;
  }
}
