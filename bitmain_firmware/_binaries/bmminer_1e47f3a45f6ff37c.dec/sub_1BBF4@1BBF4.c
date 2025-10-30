int sub_1BBF4()
{
  int v0; // r5
  int v1; // r8
  int v2; // r4
  int v4; // r6
  char *v5; // r0
  int v6; // r3
  int v7; // [sp+0h] [bp-18h] BYREF
  char haystack[4]; // [sp+4h] [bp-14h] BYREF
  int v9; // [sp+8h] [bp-10h]
  int v10; // [sp+Ch] [bp-Ch]
  int v11; // [sp+10h] [bp-8h]
  int v12; // [sp+14h] [bp-4h]

  v0 = 0;
  v1 = 0;
  v2 = 0;
  *(_DWORD *)haystack = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v7 = 20;
  do
  {
    if ( sub_26C0C(v2) )
    {
      v4 = *(_DWORD *)(dword_B3CC0 + 4 * v2);
      (*(void (__fastcall **)(int, char *, int *))(v4 + 68))(v4, haystack, &v7);
      (*(void (__fastcall **)(int))(v4 + 84))(v4);
      if ( strstr(haystack, "F1V22") || strstr(haystack, "F1V23") )
      {
        v5 = strstr(haystack, "C1R");
        v6 = 20;
        if ( !v5 )
        {
          if ( strstr(haystack, "C2R") )
            v6 = 10;
          else
            v6 = 0;
        }
      }
      else
      {
        v6 = 0;
      }
      v1 += v6;
      ++v0;
    }
    ++v2;
  }
  while ( v2 != 4 );
  if ( v0 )
    return sub_8F588(v1, v0);
  else
    return 0;
}
