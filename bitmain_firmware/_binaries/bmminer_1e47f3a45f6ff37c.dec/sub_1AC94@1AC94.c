bool sub_1AC94()
{
  unsigned int v0; // r5
  int v1; // r4
  int v3; // [sp+0h] [bp-1Ch] BYREF
  char haystack[4]; // [sp+4h] [bp-18h] BYREF
  int v5; // [sp+8h] [bp-14h]
  int v6; // [sp+Ch] [bp-10h]
  int v7; // [sp+10h] [bp-Ch]
  int v8; // [sp+14h] [bp-8h]

  v0 = 0;
  v1 = 0;
  *(_DWORD *)haystack = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v3 = 20;
  do
  {
    if ( sub_26C0C(v1) )
    {
      (*(void (__fastcall **)(_DWORD, char *, int *, _DWORD))(*(_DWORD *)(dword_B3CC0 + 4 * v1) + 76))(
        *(_DWORD *)(dword_B3CC0 + 4 * v1),
        haystack,
        &v3,
        *(_DWORD *)(*(_DWORD *)(dword_B3CC0 + 4 * v1) + 76));
      if ( strstr(haystack, "AL") )
        v0 = (unsigned __int8)(v0 + 1);
    }
    ++v1;
  }
  while ( v1 != 4 );
  return v0 > 1;
}
