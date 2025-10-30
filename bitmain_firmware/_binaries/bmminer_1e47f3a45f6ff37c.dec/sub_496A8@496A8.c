int sub_496A8()
{
  _DWORD *v1; // r0
  _DWORD *v2; // r7
  void *v3; // r5
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v4, "[DEBUG] HW sweep init.\n");
    sub_3B6AC(4, v4, 0, *(int *)"weep init.\n");
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(v4, "[DEBUG] Allocate memory for hw sweep.\n");
      sub_3B6AC(4, v4, 0, *(unsigned __int16 *)"");
    }
  }
  if ( dword_535D8C )
    return 0;
  v1 = malloc((size_t)&unk_8154AC);
  v2 = v1;
  dword_535D8C = (int)v1;
  if ( v1 )
  {
    memset(v1, 0, (size_t)&unk_8154AC);
    v3 = malloc(0x400u);
    v2[1] = v3;
    if ( v3 )
      return 0;
    sub_495B0();
    sub_481F0(13, 255);
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v4, "Fail to allocate memory for hw sweep private data.\n");
      sub_3B6AC(3, v4, 0, *(int *)" data.\n");
    }
    return -1;
  }
  sub_481F0(13, 255);
  if ( (unsigned int)dword_B308C <= 3 )
    return -1;
  strcpy(v4, "Fail to allocate memory for hw sweep ctxt.\n");
  sub_3B6AC(3, v4, 0, *(int *)"hw sweep ctxt.\n");
  return -1;
}
