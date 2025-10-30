int sub_4775C()
{
  _DWORD *v1; // r6
  void *v2; // r5
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v3, "[DEBUG] HW sweep init.\n");
    sub_3AF5C(4, v3, 0, *(int *)"weep init.\n");
    if ( (unsigned int)off_AFC24 > 4 )
    {
      strcpy(v3, "[DEBUG] Allocate memory for hw sweep.\n");
      sub_3AF5C(4, v3, 0, *(unsigned __int16 *)"");
    }
  }
  if ( dword_530F00 )
    return 0;
  v1 = calloc((size_t)&unk_8114AC, 1u);
  dword_530F00 = (int)v1;
  if ( !v1 )
  {
    sub_46318(13, 255);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v3, "Fail to allocate memory for hw sweep ctxt.\n");
      sub_3AF5C(3, v3, 0, *(int *)"hw sweep ctxt.\n");
      return -1;
    }
    return -1;
  }
  v2 = malloc(0x400u);
  v1[1] = v2;
  if ( !v2 )
  {
    sub_47664();
    sub_46318(13, 255);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v3, "Fail to allocate memory for hw sweep private data.\n");
      sub_3AF5C(3, v3, 0, *(int *)" data.\n");
    }
    return -1;
  }
  return 0;
}
