int __fastcall sub_4C304(int a1)
{
  int *v1; // r4
  int v3; // r3
  const char *v4; // r3
  int v5; // r3
  int v6; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  LOWORD(v1) = (unsigned __int16)&dword_535D94;
  if ( (unsigned int)dword_B308C > 4 )
  {
    HIWORD(v1) = (unsigned int)&dword_535D94 >> 16;
    v3 = *(_DWORD *)(*v1 + 4 * (a1 + 2));
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = "READY";
      }
      else if ( v3 == 2 )
      {
        v4 = "DONE";
      }
      else
      {
        v4 = "UNKNOWN";
      }
    }
    else
    {
      v4 = "BLOCK";
    }
    snprintf(s, 0x800u, "[DEBUG] chain = %d, status = %s\n", a1, v4);
    sub_3B6AC(4, s, 0, v5);
  }
  else
  {
    HIWORD(v1) = (unsigned int)&dword_535D94 >> 16;
  }
  v6 = *v1;
  if ( *v1 && *(_DWORD *)(v6 + 4) )
    return *(_DWORD *)(v6 + 4 * (a1 + 2));
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "Handle is NULL.\n");
    sub_3B6AC(3, s, 0, *(int *)"LL.\n");
  }
  return 2;
}
