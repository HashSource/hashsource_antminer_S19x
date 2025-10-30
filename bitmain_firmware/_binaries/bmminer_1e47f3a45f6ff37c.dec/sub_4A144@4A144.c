char **sub_4A144()
{
  char v1[2056]; // [sp-808h] [bp-808h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v1, "[DEBUG] Get hw ops.\n");
    sub_3B6AC(4, v1, 0, *(int *)"hw ops.\n");
  }
  return &off_B37B0;
}
