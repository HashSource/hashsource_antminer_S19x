int sub_4BA74()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v1, "[DEBUG] Freq tuning basic init.\n");
    sub_3AF5C(4, v1, 0, *(int *)"it.\n");
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(v1, "[DEBUG] Allocate memory for freq tuning basic.\n");
      sub_3AF5C(4, v1, 0, *(int *)"c.\n");
    }
  }
  if ( dword_530F0C )
    return 0;
  dword_530F0C = (int)calloc(0x34u, 1u);
  if ( dword_530F0C )
    return 0;
  sub_46318(13, 255);
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v1, "Fail to allocate memory for freq tuning basic context.\n");
    sub_3AF5C(3, v1, 0, *(int *)"c context.\n");
  }
  return -1;
}
