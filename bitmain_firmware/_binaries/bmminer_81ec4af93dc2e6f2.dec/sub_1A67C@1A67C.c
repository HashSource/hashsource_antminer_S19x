bool sub_1A67C()
{
  unsigned int v0; // r5
  int v1; // r9
  char *v2; // r10
  char *v3; // r4
  char *v4; // r0
  _BOOL4 v5; // r4
  int v7; // [sp+0h] [bp-18h] BYREF
  char haystack[4]; // [sp+4h] [bp-14h] BYREF
  int v9; // [sp+8h] [bp-10h]
  int v10; // [sp+Ch] [bp-Ch]
  int v11; // [sp+10h] [bp-8h]
  int v12; // [sp+14h] [bp-4h]

  v0 = 0;
  v1 = 0;
  *(_DWORD *)haystack = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v7 = 20;
  do
  {
    if ( sub_266F0(v1) )
    {
      (*(void (__fastcall **)(_DWORD, char *, int *, _DWORD, int, _DWORD))(*(_DWORD *)(dword_B0F4C + 4 * v1) + 68))(
        *(_DWORD *)(dword_B0F4C + 4 * v1),
        haystack,
        &v7,
        *(_DWORD *)(*(_DWORD *)(dword_B0F4C + 4 * v1) + 68),
        v7,
        *(_DWORD *)haystack);
      v2 = strstr(haystack, "V18");
      v3 = strstr(haystack, "V22");
      v4 = strstr(haystack, "V30");
      v5 = v3 != 0;
      if ( v2 )
        v5 = 1;
      if ( v4 )
        v5 = 1;
      if ( v5 )
        v0 = (unsigned __int8)(v0 + 1);
    }
    ++v1;
  }
  while ( v1 != 4 );
  return v0 > 1;
}
