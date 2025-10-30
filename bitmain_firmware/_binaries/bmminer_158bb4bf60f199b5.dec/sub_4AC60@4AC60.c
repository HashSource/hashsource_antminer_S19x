int __fastcall sub_4AC60(_DWORD *a1, int a2)
{
  int v3; // r0
  int v4; // r5
  _DWORD *v5; // r7
  _DWORD *v6; // r0
  int v7; // r6
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2
  int v12; // r0
  const char *v13; // r4
  int v14; // r0
  int v15; // r0
  int v16; // r0
  _DWORD *v17; // r9
  char *v18; // r0
  _DWORD v19[23]; // [sp+14h] [bp-900h] BYREF
  char v20[160]; // [sp+70h] [bp-8A4h] BYREF
  char s[2052]; // [sp+110h] [bp-804h] BYREF

  v3 = sub_6D110(a2, 0, v19);
  v4 = v3;
  if ( v3 )
  {
    v5 = (_DWORD *)sub_6DFCC(v3, "result");
    v6 = (_DWORD *)sub_6DFCC(v4, "error");
    if ( v5 && *v5 != 7 && (!v6 || *v6 == 7) && (v12 = sub_6E048(v5), (v13 = (const char *)sub_6E0C8(v12)) != 0) )
    {
      v7 = 0;
      do
      {
        v16 = sub_6E138(v13);
        v17 = (_DWORD *)sub_6E0D4(v16);
        if ( !v17 )
          break;
        if ( !strcasecmp(v13, "version-rolling") && strlen(v13) == 15 )
        {
          if ( *v17 != 5 )
          {
            if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
            {
              snprintf(s, 0x800u, "Pool %d don't support ab!", *a1);
              sub_47AB4(5, s, 0);
            }
            *((_BYTE *)a1 + 644) = 0;
            v7 = 1;
            a1[162] = 1;
            break;
          }
          if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
          {
            snprintf(s, 0x800u, "POOL %d support ab mode!", *a1);
            sub_47AB4(5, s, 0);
          }
        }
        else if ( !strcasecmp(v13, "version-rolling.mask") && strlen(v13) == 20 )
        {
          v7 = 1;
          v18 = (char *)sub_6E350(v17);
          sub_49AE4((int)a1, v18);
        }
        else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
        {
          snprintf(s, 0x800u, "JSON-RPC unexpected mining.configure value: %s", v13);
          sub_47AB4(3, s, 0);
        }
        v14 = sub_6E138(v13);
        v15 = sub_6E094(v5, v14);
        v13 = (const char *)sub_6E0C8(v15);
      }
      while ( v13 );
    }
    else
    {
      v7 = 0;
    }
    if ( *(_DWORD *)(v4 + 4) != -1 )
    {
      v8 = (unsigned int *)(v4 + 4);
      __dmb(0xBu);
      do
      {
        v9 = __ldrex(v8);
        v10 = v9 - 1;
      }
      while ( __strex(v10, v8) );
      if ( !v10 )
        sub_6E5DC(v4);
    }
    return v7;
  }
  if ( !byte_244080 )
  {
    v7 = (unsigned __int8)byte_1AECC4;
    if ( !byte_1AECC4 && dword_9E320 <= 5 )
      return v7;
  }
  snprintf(s, 0x800u, "JSON decode failed(%d): %s", v19[0], v20);
  sub_47AB4(6, s, 0);
  return 0;
}
