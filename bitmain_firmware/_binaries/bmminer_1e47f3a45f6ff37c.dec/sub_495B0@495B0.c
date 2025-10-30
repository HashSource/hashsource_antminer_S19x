void sub_495B0()
{
  void *v0; // r0
  char v1[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v1, "[DEBUG] Free memory for hw sweep.\n");
    sub_3B6AC(4, v1, 0, *(int *)"weep.\n");
  }
  v0 = (void *)dword_535D8C;
  if ( dword_535D8C )
  {
    if ( *(_DWORD *)(dword_535D8C + 4) )
    {
      free(*(void **)(dword_535D8C + 4));
      v0 = (void *)dword_535D8C;
    }
    free(v0);
    dword_535D8C = 0;
  }
}
