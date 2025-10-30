int __fastcall sub_253CC(int a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r4
  _DWORD *v3; // r0
  const char *v5; // r0
  int v6; // r3
  char v7[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = (_DWORD *)sub_75FEC(a1, "processor");
  v2 = v1;
  if ( !v1 || *v1 )
  {
    if ( (unsigned int)dword_B308C <= 3 )
      return -1;
    strcpy(v7, "get processor failed\n");
    sub_3B6AC(3, v7, 0, *(_DWORD *)"r failed\n");
    return -1;
  }
  else
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy(v7, "processor:\n");
      sub_3B6AC(4, v7, 0, 0);
    }
    v3 = (_DWORD *)sub_75FEC(v2, "type");
    if ( !v3 || *v3 != 2 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v7, "get type failed\n");
        sub_3B6AC(3, v7, 0, *(_DWORD *)"led\n");
      }
      return -1;
    }
    if ( (unsigned int)dword_B308C > 4 )
    {
      v5 = (const char *)sub_777D0(v3);
      snprintf(v7, 0x800u, "type: %s\n", v5);
      sub_3B6AC(4, v7, 0, v6);
    }
    return 0;
  }
}
