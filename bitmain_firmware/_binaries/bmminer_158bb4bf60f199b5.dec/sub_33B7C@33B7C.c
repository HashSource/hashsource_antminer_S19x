void sub_33B7C()
{
  char v0[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v0, "[DEBUG] Sweep exit.\n");
    sub_47AB4(4, v0, 0);
    if ( (unsigned int)dword_9E31C > 4 )
    {
      strcpy(v0, "[DEBUG] Free memory for sweep.\n");
      sub_47AB4(4, v0, 0);
    }
  }
  if ( dword_1AEA6C )
  {
    free((void *)dword_1AEA6C);
    dword_1AEA6C = 0;
  }
}
