void *__fastcall sub_2ABEC4(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r7
  unsigned int v6; // r7
  void *v7; // r4
  unsigned int v8; // r0
  void *ptr; // [sp+4h] [bp-8h] BYREF

  if ( !a1 )
    sub_2A6BBC("opncls.c", 1183);
  if ( !a2 )
    sub_2A6BBC("opncls.c", 1184);
  v4 = sub_2AD7AC(a1, ".gnu_debuglink");
  v5 = v4;
  if ( v4 )
  {
    if ( sub_2ADFDC(a1, v4, &ptr) )
    {
      v6 = *(_DWORD *)(v5 + 36);
      v7 = ptr;
      v8 = (strnlen(ptr, v6) + 4) & 0xFFFFFFFC;
      if ( v6 >= v8 + 4 )
      {
        *a2 = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(a1 + 4) + 40))((unsigned int)v7 + v8);
        return v7;
      }
    }
    else if ( ptr )
    {
      free(ptr);
      return 0;
    }
  }
  return 0;
}
