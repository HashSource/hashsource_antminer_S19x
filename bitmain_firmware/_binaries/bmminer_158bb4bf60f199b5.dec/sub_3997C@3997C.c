int sub_3997C()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v1, "[DEBUG] Freq tuning basic init.\n");
    sub_47AB4(4, v1, 0);
    if ( (unsigned int)dword_9E31C > 4 )
    {
      strcpy(v1, "[DEBUG] Allocate memory for freq tuning basic.\n");
      sub_47AB4(4, v1, 0);
    }
  }
  if ( dword_1AEA7C )
    return 0;
  dword_1AEA7C = (int)calloc(0xC4u, 1u);
  if ( dword_1AEA7C )
    return 0;
  sub_31794(13, 255);
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v1, "Fail to allocate memory for freq tuning basic context.\n");
    sub_47AB4(3, v1, 0);
  }
  return -1;
}
