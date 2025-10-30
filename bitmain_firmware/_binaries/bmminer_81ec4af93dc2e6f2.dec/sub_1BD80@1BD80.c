int sub_1BD80()
{
  int v0; // r6
  int v1; // r9
  int v2; // r4
  int v3; // r5
  int v5; // [sp+0h] [bp-18h] BYREF
  char haystack[4]; // [sp+4h] [bp-14h] BYREF
  int v7; // [sp+8h] [bp-10h]
  int v8; // [sp+Ch] [bp-Ch]
  int v9; // [sp+10h] [bp-8h]
  int v10; // [sp+14h] [bp-4h]

  v0 = 0;
  v1 = 0;
  v2 = 0;
  *(_DWORD *)haystack = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v5 = 20;
  do
  {
    if ( sub_266F0(v2) )
    {
      v3 = *(_DWORD *)(dword_B0F4C + 4 * v2);
      (*(void (__fastcall **)(int, char *, int *, _DWORD, int, _DWORD, int, int, int, int))(v3 + 68))(
        v3,
        haystack,
        &v5,
        *(_DWORD *)(v3 + 68),
        v5,
        *(_DWORD *)haystack,
        v7,
        v8,
        v9,
        v10);
      (*(void (__fastcall **)(int))(v3 + 84))(v3);
      if ( strstr(haystack, "F1V22") || strstr(haystack, "F1V23") )
      {
        if ( strstr(haystack, "C1R") )
        {
          v1 += 20;
        }
        else if ( strstr(haystack, "C2R") )
        {
          v1 += 10;
        }
      }
      ++v0;
    }
    ++v2;
  }
  while ( v2 != 4 );
  if ( v0 )
    return sub_8C218(v1, v0);
  return v0;
}
