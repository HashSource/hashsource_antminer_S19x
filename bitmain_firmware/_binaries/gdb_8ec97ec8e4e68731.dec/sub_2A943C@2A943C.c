__int64 __fastcall sub_2A943C(int *a1, int a2, __int64 a3)
{
  __int64 i; // r4
  size_t v6; // r0
  __int64 v7; // r6
  FILE *v8; // r9
  int v9; // r0
  int v10; // r1
  _BOOL4 v11; // r1
  FILE *stream; // [sp+0h] [bp-14h]
  __int64 streama; // [sp+0h] [bp-14h]

  if ( a3 < 1 )
    return 0;
  for ( i = 0; i < a3; i += v6 )
  {
    v7 = a3 - i;
    if ( a3 - i > 0x800000 )
      v7 = 0x800000;
    stream = (FILE *)(a1 == (int *)dword_48BBE4 ? a1[2] : sub_2A90F8(a1, 0));
    if ( !stream )
      break;
    v6 = fread((void *)(a2 + i), 1u, v7, stream);
    if ( v6 < v7 )
    {
      v8 = stream;
      streama = v6;
      v9 = ferror(v8);
      v10 = (unsigned __int64)(streama - 1) >> 32;
      if ( v9 )
        ((void (__fastcall *)(int, int))loc_2A6C48)(1, v10);
      else
        ((void (__fastcall *)(int, int))loc_2A6C48)(18, v10);
      if ( i )
        v11 = streama >= 1;
      else
        v11 = 1;
      if ( v11 )
        i += streama;
      return i;
    }
  }
  return i;
}
