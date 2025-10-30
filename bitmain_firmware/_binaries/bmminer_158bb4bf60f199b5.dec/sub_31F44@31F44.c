void sub_31F44()
{
  void *v0; // r0
  char v1[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v1, "[DEBUG] Free memory for hw sweep.\n");
    sub_47AB4(4, v1, 0);
  }
  v0 = (void *)dword_1AEA64;
  if ( dword_1AEA64 )
  {
    if ( *(_DWORD *)(dword_1AEA64 + 4) )
    {
      free(*(void **)(dword_1AEA64 + 4));
      v0 = (void *)dword_1AEA64;
    }
    free(v0);
    dword_1AEA64 = 0;
  }
}
