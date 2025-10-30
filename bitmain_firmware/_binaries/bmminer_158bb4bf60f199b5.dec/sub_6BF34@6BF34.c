int sub_6BF34(int result, _DWORD *a2, const char *a3, ...)
{
  int v3; // r5
  const char *v5; // r0
  int v6; // r8
  int v7; // r6
  int v8; // r9
  char *arg; // r3
  char s[160]; // [sp+10h] [bp-144h] BYREF
  char v11[159]; // [sp+B0h] [bp-A4h] BYREF
  char v12; // [sp+14Fh] [bp-5h]
  const char *varg_r2; // [sp+170h] [bp+1Ch]
  va_list varg_r3; // [sp+174h] [bp+20h] BYREF

  va_start(varg_r3, a3);
  varg_r2 = a3;
  v3 = result;
  if ( result )
  {
    vsnprintf(s, 0xA0u, varg_r2, varg_r3);
    s[159] = 0;
    if ( a2 )
    {
      v5 = (const char *)sub_6D5F4(a2 + 10);
      v6 = a2[6];
      v7 = a2[7];
      v8 = a2[9];
      if ( v5 && *v5 )
      {
        if ( a2[11] <= 0x14u )
        {
          snprintf(v11, 0xA0u, "%s near '%s'", s, v5);
          arg = v11;
          v12 = 0;
          return sub_74820(v3, v6, v7, v8, "%s", (char)arg);
        }
      }
      else if ( a2[5] != -2 )
      {
        snprintf(v11, 0xA0u, "%s near end of file", s);
        arg = v11;
        v12 = 0;
        return sub_74820(v3, v6, v7, v8, "%s", (char)arg);
      }
      arg = s;
    }
    else
    {
      v7 = -1;
      arg = s;
      v8 = 0;
      v6 = -1;
    }
    return sub_74820(v3, v6, v7, v8, "%s", (char)arg);
  }
  return result;
}
