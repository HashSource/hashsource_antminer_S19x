int __fastcall sub_82580(char *s1)
{
  int v2; // r8
  int v3; // r6
  int v4; // r4
  int v5; // r5
  const char *v6; // r1
  _DWORD v8[3]; // [sp+0h] [bp-18h]
  _DWORD v9[3]; // [sp+Ch] [bp-Ch]

  v2 = 0;
  v8[0] = off_21CAA0;
  v8[1] = off_21CAA4;
  v8[2] = off_21CAA8;
  v9[0] = 5;
  v9[1] = 164;
  v9[2] = 2;
  while ( 1 )
  {
    v3 = v9[v2];
    v4 = v8[v2];
    if ( v3 )
      break;
LABEL_7:
    if ( ++v2 == 3 )
      return 0;
  }
  v5 = 0;
  while ( 1 )
  {
    ++v5;
    v6 = *(const char **)(v4 + 8);
    if ( v6 )
    {
      if ( !strcmp(s1, v6) )
        return v4;
    }
    v4 += 64;
    if ( v5 == v3 )
      goto LABEL_7;
  }
}
