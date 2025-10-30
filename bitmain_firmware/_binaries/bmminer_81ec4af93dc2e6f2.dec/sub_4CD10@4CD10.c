void sub_4CD10()
{
  char v0[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v0, "[DEBUG] freq tuning fine exit.\n");
    sub_3AF5C(4, v0, 0, *(int *)"t.\n");
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(v0, "[DEBUG] Free memory for pm grade.\n");
      sub_3AF5C(4, v0, 0, *(unsigned __int16 *)"");
    }
  }
  if ( dword_530F10 )
  {
    free((void *)dword_530F10);
    dword_530F10 = 0;
  }
}
