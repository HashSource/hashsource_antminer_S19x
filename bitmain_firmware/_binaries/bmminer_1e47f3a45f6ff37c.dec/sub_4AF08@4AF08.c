char **sub_4AF08()
{
  char v1[2056]; // [sp-808h] [bp-808h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v1, "[DEBUG] Get sw ops.\n");
    sub_3B6AC(4, v1, 0, *(int *)"sw ops.\n");
  }
  return &off_B37DC;
}
