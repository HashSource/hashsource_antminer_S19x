void sub_46950()
{
  char v0[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v0, "[DEBUG] Sweep exit.\n");
    sub_3AF5C(4, v0, 0, *(int *)"p exit.\n");
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(v0, "[DEBUG] Free memory for sweep.\n");
      sub_3AF5C(4, v0, 0, *(int *)"p.\n");
    }
  }
  if ( dword_530EF4 )
  {
    free((void *)dword_530EF4);
    dword_530EF4 = 0;
  }
}
