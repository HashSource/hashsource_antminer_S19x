const char *sub_2833E8()
{
  char *v0; // r1
  char **v1; // r4
  const char *v2; // r5
  const char *result; // r0
  int v4; // r6

  v0 = (char *)sub_291288;
  v1 = &off_3FC5D8;
  v2 = "accept-line";
  result = "abort";
  v4 = 0;
  while ( 1 )
  {
    sub_28335C((int)result, (int)v0);
    ++v4;
    v1 += 2;
    result = v2;
    if ( !v2 )
      break;
    v0 = v1[1];
    v2 = v1[2];
  }
  dword_48ABC4 = 1;
  dword_4900E4 = v4;
  return result;
}
