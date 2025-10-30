int sub_3203C()
{
  _DWORD *v1; // r6
  void *v2; // r5
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v3, "[DEBUG] HW sweep init.\n");
    sub_47AB4(4, v3, 0);
    if ( (unsigned int)dword_9E31C > 4 )
    {
      strcpy(v3, "[DEBUG] Allocate memory for hw sweep.\n");
      sub_47AB4(4, v3, 0);
    }
  }
  if ( dword_1AEA64 )
    return 0;
  v1 = calloc(0x3D1DC4u, 1u);
  dword_1AEA64 = (int)v1;
  if ( !v1 )
  {
    sub_31794(13, 255);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v3, "Fail to allocate memory for hw sweep ctxt.\n");
      sub_47AB4(3, v3, 0);
      return -1;
    }
    return -1;
  }
  v2 = malloc(0x4E0u);
  v1[1] = v2;
  if ( !v2 )
  {
    sub_31F44();
    sub_31794(13, 255);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v3, "Fail to allocate memory for hw sweep private data.\n");
      sub_47AB4(3, v3, 0);
    }
    return -1;
  }
  return 0;
}
