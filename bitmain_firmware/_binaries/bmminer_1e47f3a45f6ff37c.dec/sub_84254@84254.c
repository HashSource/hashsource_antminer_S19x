void *__fastcall sub_84254(int a1, const char *a2)
{
  int *v3; // r0
  int *v4; // r0
  int v8; // [sp+14h] [bp-10h] BYREF
  unsigned int v9; // [sp+18h] [bp-Ch]
  void *ptr; // [sp+1Ch] [bp-8h]

  if ( !strcmp(*(const char **)(a1 + 32), a2) )
    return 0;
  if ( a2[strlen(a2) - 1] == 47 )
    return 0;
  ptr = calloc(1u, 0x408u);
  if ( ptr )
  {
    v9 = snprintf((char *)ptr + 4, 0x401u, "%s", a2);
    if ( v9 <= 0x400 )
    {
      v8 = 0;
      _isoc99_sscanf((char *)ptr + *(_DWORD *)(a1 + 1068) + 4, "%d%n", ptr, &v8);
      if ( !*(_DWORD *)(a1 + 1076) || *(_DWORD *)(a1 + 1076) <= v8 )
        return ptr;
      sub_8CD10(1, "src/rotater.c", 164, "aa.1.log is not expect, need aa.01.log");
    }
    else
    {
      v4 = _errno_location();
      sub_8CD10(2, "src/rotater.c", 155, "snprintf fail or overflow, nwrite=[%d], errno[%d]", v9, *v4);
    }
    free(ptr);
    return 0;
  }
  v3 = _errno_location();
  sub_8CD10(2, "src/rotater.c", 149, "calloc fail, errno[%d]", *v3);
  return 0;
}
