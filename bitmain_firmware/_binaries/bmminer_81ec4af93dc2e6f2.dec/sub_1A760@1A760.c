bool sub_1A760()
{
  unsigned int v0; // r5
  int v1; // r4
  int v3; // [sp+0h] [bp-18h] BYREF
  char haystack[4]; // [sp+4h] [bp-14h] BYREF
  int v5; // [sp+8h] [bp-10h]
  int v6; // [sp+Ch] [bp-Ch]
  int v7; // [sp+10h] [bp-8h]
  int v8; // [sp+14h] [bp-4h]

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
    if ( sub_266F0(v1) )
    {
      (*(void (__fastcall **)(_DWORD, char *, int *, _DWORD, int, _DWORD))(*(_DWORD *)(dword_B0F4C + 4 * v1) + 76))(
        *(_DWORD *)(dword_B0F4C + 4 * v1),
        haystack,
        &v3,
        *(_DWORD *)(*(_DWORD *)(dword_B0F4C + 4 * v1) + 76),
        v3,
        *(_DWORD *)haystack);
      if ( strstr(haystack, "BP") )
        v0 = (unsigned __int8)(v0 + 1);
    }
    ++v1;
  }
  while ( v1 != 4 );
  return v0 > 1;
}
