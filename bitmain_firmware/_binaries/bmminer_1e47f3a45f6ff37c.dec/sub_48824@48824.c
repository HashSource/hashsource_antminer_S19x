void sub_48824()
{
  char v0[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v0, "[DEBUG] Sweep exit.\n");
    sub_3B6AC(4, v0, 0, *(int *)"p exit.\n");
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(v0, "[DEBUG] Free memory for sweep.\n");
      sub_3B6AC(4, v0, 0, *(int *)"p.\n");
    }
  }
  if ( dword_535D80 )
  {
    free((void *)dword_535D80);
    dword_535D80 = 0;
  }
}
