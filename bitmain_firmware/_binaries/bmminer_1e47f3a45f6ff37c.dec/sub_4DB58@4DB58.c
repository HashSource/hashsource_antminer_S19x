void sub_4DB58()
{
  char v0[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v0, "[DEBUG] Freq tuning basic exit.\n");
    sub_3B6AC(4, v0, 0, *(int *)"it.\n");
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(v0, "[DEBUG] Free memory for freq tuning basic.\n");
      sub_3B6AC(4, v0, 0, *(int *)" tuning basic.\n");
    }
  }
  if ( dword_535D98 )
  {
    free((void *)dword_535D98);
    dword_535D98 = 0;
  }
}
