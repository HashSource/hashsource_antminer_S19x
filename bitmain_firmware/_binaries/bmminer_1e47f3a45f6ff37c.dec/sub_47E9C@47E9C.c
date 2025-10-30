FILE *__fastcall sub_47E9C(_DWORD *a1)
{
  FILE *result; // r0
  FILE *v3; // r4
  int *v4; // r0
  char *v5; // r0
  int v6; // r3
  int *v7; // r0
  char *v8; // r0
  int v9; // r3
  int v10; // [sp+0h] [bp-808h] BYREF
  int v11; // [sp+4h] [bp-804h]
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  result = fopen("/config/leveldown", "r+");
  v3 = result;
  if ( result )
  {
    v11 = 0;
    v10 = 0;
    if ( fread(&v10, 1u, 8u, result) == 8 )
    {
      *a1 = v11;
      fclose(v3);
      return (FILE *)1;
    }
    else
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v4 = _errno_location();
        v5 = strerror(*v4);
        snprintf(s, 0x800u, "read stage file failed! err:%s\n", v5);
        sub_3B6AC(3, s, 0, v6);
      }
      fclose(v3);
      return 0;
    }
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    v7 = _errno_location();
    v8 = strerror(*v7);
    snprintf(s, 0x800u, "fail to open leveldown file, err:%s", v8);
    sub_3B6AC(3, s, 0, v9);
    return 0;
  }
  return result;
}
