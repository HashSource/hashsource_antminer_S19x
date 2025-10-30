void sub_4ECFC()
{
  char v0[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v0, "[DEBUG] freq tuning fine exit.\n");
    sub_3B6AC(4, v0, 0, *(int *)"t.\n");
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(v0, "[DEBUG] Free memory for pm grade.\n");
      sub_3B6AC(4, v0, 0, *(int *)"rade.\n");
    }
  }
  if ( dword_535D9C )
  {
    free((void *)dword_535D9C);
    dword_535D9C = 0;
  }
}
