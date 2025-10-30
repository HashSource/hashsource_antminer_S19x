void sub_4BBAC()
{
  char v0[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v0, "[DEBUG] Freq tuning basic exit.\n");
    sub_3AF5C(4, v0, 0, *(int *)"it.\n");
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(v0, "[DEBUG] Free memory for freq tuning basic.\n");
      sub_3AF5C(4, v0, 0, *(int *)" tuning basic.\n");
    }
  }
  if ( dword_530F0C )
  {
    free((void *)dword_530F0C);
    dword_530F0C = 0;
  }
}
