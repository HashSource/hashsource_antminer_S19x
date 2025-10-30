int sub_4D9E4()
{
  _DWORD *v1; // r0
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v2, "[DEBUG] Freq tuning basic init.\n");
    sub_3B6AC(4, v2, 0, *(int *)"it.\n");
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(v2, "[DEBUG] Allocate memory for freq tuning basic.\n");
      sub_3B6AC(4, v2, 0, *(int *)"c.\n");
    }
  }
  if ( dword_535D98 )
    return 0;
  v1 = malloc(0x34u);
  dword_535D98 = (int)v1;
  if ( v1 )
  {
    *v1 = 0;
    v1[1] = 0;
    v1[2] = 0;
    v1[3] = 0;
    v1[4] = 0;
    v1[5] = 0;
    v1[6] = 0;
    v1[7] = 0;
    v1[8] = 0;
    v1[9] = 0;
    v1[10] = 0;
    v1[11] = 0;
    v1[12] = 0;
    return 0;
  }
  sub_481F0(13, 255);
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v2, "Fail to allocate memory for freq tuning basic context.\n");
    sub_3B6AC(3, v2, 0, *(int *)"c context.\n");
  }
  return -1;
}
