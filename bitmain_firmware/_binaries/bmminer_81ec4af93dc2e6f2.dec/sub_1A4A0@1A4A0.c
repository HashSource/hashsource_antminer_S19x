bool sub_1A4A0()
{
  _BOOL4 result; // r0
  int v1; // r4
  unsigned int v2; // r5
  int v3; // r6
  int v4; // r6
  char *v5; // r0
  unsigned __int8 v6; // r3
  int v7; // [sp+0h] [bp-1Ch] BYREF
  char haystack[4]; // [sp+4h] [bp-18h] BYREF
  int v9; // [sp+8h] [bp-14h]
  int v10; // [sp+Ch] [bp-10h]
  int v11; // [sp+10h] [bp-Ch]
  int v12; // [sp+14h] [bp-8h]

  result = 0;
  v1 = dword_B413C;
  v9 = 0;
  *(_DWORD *)haystack = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v7 = 20;
  if ( !dword_B413C )
  {
    v2 = 0;
    while ( 1 )
    {
      if ( !sub_266F0(v1) )
        goto LABEL_8;
      v3 = *(_DWORD *)(dword_B0F4C + 4 * v1);
      if ( (*(int (__fastcall **)(int))(v3 + 196))(v3) != 670 )
        goto LABEL_8;
      (*(void (__fastcall **)(int, char *, int *, _DWORD, int, _DWORD, int, int, int, int))(v3 + 68))(
        v3,
        haystack,
        &v7,
        *(_DWORD *)(v3 + 68),
        v7,
        *(_DWORD *)haystack,
        v9,
        v10,
        v11,
        v12);
      v4 = (*(int (__fastcall **)(int))(v3 + 84))(v3);
      v5 = strstr(haystack, "C2");
      v6 = v2 + 1;
      if ( !v5 )
        break;
      if ( v4 > 0 )
        goto LABEL_7;
LABEL_8:
      if ( ++v1 == 4 )
        return v2 > 1;
    }
    v6 = v2 + 1;
    if ( v4 <= 2 )
      goto LABEL_8;
LABEL_7:
    v2 = v6;
    goto LABEL_8;
  }
  return result;
}
