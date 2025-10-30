bool sub_1AA28()
{
  unsigned int v0; // r6
  int v1; // r4
  char *v3; // r8
  char *v4; // r5
  char *v5; // r0
  bool v6; // zf
  int v7; // r5
  int v8; // r0
  int v9; // [sp+0h] [bp-18h] BYREF
  char haystack[4]; // [sp+4h] [bp-14h] BYREF
  int v11; // [sp+8h] [bp-10h]
  int v12; // [sp+Ch] [bp-Ch]
  int v13; // [sp+10h] [bp-8h]
  int v14; // [sp+14h] [bp-4h]

  v0 = 0;
  v1 = 0;
  *(_DWORD *)haystack = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v9 = 20;
  do
  {
    if ( sub_26C0C(v1) )
    {
      (*(void (__fastcall **)(_DWORD, char *, int *, _DWORD))(*(_DWORD *)(dword_B3CC0 + 4 * v1) + 68))(
        *(_DWORD *)(dword_B3CC0 + 4 * v1),
        haystack,
        &v9,
        *(_DWORD *)(*(_DWORD *)(dword_B3CC0 + 4 * v1) + 68));
      v3 = strstr(haystack, "V19");
      v4 = strstr(haystack, "V23");
      v5 = strstr(haystack, "V31");
      v6 = v3 == 0;
      if ( !v3 )
        v6 = v4 == 0;
      v7 = !v6;
      if ( v5 )
        v8 = v7 | 1;
      else
        v8 = v7;
      if ( v8 )
        v0 = (unsigned __int8)(v0 + 1);
    }
    ++v1;
  }
  while ( v1 != 4 );
  return v0 > 1;
}
