bool sub_1A930()
{
  _BOOL4 result; // r0
  unsigned int v1; // r5
  int v2; // r4
  int v3; // r7
  int v4; // r7
  char *v5; // r0
  unsigned __int8 v6; // r3
  int v7; // [sp+0h] [bp-18h] BYREF
  char haystack[4]; // [sp+4h] [bp-14h] BYREF
  int v9; // [sp+8h] [bp-10h]
  int v10; // [sp+Ch] [bp-Ch]
  int v11; // [sp+10h] [bp-8h]
  int v12; // [sp+14h] [bp-4h]

  result = 0;
  v1 = dword_B6EB4;
  *(_DWORD *)haystack = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v7 = 20;
  if ( !dword_B6EB4 )
  {
    v2 = 0;
    while ( 1 )
    {
      if ( !sub_26C0C(v2) )
        goto LABEL_4;
      v3 = *(_DWORD *)(dword_B3CC0 + 4 * v2);
      if ( (*(int (__fastcall **)(int))(v3 + 196))(v3) != 670 )
        goto LABEL_4;
      (*(void (__fastcall **)(int, char *, int *))(v3 + 68))(v3, haystack, &v7);
      v4 = (*(int (__fastcall **)(int))(v3 + 84))(v3);
      v5 = strstr(haystack, "C2");
      v6 = v1 + 1;
      if ( !v5 )
        break;
      if ( v4 > 0 )
        goto LABEL_10;
LABEL_4:
      if ( ++v2 == 4 )
        return v1 > 1;
    }
    v6 = v1 + 1;
    if ( v4 <= 2 )
      goto LABEL_4;
LABEL_10:
    v1 = v6;
    goto LABEL_4;
  }
  return result;
}
