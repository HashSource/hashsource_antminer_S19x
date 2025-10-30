void sub_3B4EC()
{
  char v0[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v0, "[DEBUG] PM grade exit.\n");
    sub_47AB4(4, v0, 0);
    if ( (unsigned int)dword_9E31C > 4 )
    {
      strcpy(v0, "[DEBUG] Free memory for pm grade.\n");
      sub_47AB4(4, v0, 0);
    }
  }
  if ( dword_1AEA80 )
  {
    free((void *)dword_1AEA80);
    dword_1AEA80 = 0;
  }
}
