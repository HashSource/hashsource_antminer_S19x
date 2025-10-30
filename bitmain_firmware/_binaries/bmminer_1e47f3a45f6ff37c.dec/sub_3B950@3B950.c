int __fastcall sub_3B950(const char *a1)
{
  FILE *v1; // r4
  int result; // r0
  unsigned __int8 v3; // r4^1
  int v4; // r3
  int *v5; // r0
  char *v6; // r0
  int v7; // r3
  char v8[1024]; // [sp+0h] [bp-C04h] BYREF
  char s[2052]; // [sp+400h] [bp-804h] BYREF

  if ( !a1 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "cmd is NULL!\n");
      sub_3B6AC(3, s, 0, *(int *)"\n");
      return -1;
    }
    return -1;
  }
  v1 = popen(a1, "r");
  if ( !v1 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      v5 = _errno_location();
      v6 = strerror(*v5);
      snprintf(s, 0x800u, "popen error: %s/n", v6);
      sub_3B6AC(3, s, 0, v7);
      return -1;
    }
    return -1;
  }
  while ( fgets(v8, 1024, v1) )
    ;
  result = pclose(v1);
  v3 = BYTE1(result);
  if ( result == -1 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "close popen file pointer fp error!\n");
      sub_3B6AC(3, s, 0, *(int *)"error!\n");
      return -1;
    }
    return -1;
  }
  if ( result )
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(s, 0x800u, "pclose res is :%d\n", (result & 0x7F) == 0);
      sub_3B6AC(4, s, 0, v4);
    }
    return v3;
  }
  return result;
}
