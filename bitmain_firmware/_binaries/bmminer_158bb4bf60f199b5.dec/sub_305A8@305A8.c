int sub_305A8()
{
  int v0; // r4
  int v1; // r9
  char *v3; // r2
  int v4; // r3
  unsigned int v5; // t1
  unsigned int v6; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v0 = sub_36B40(&v6);
  if ( v0 )
  {
    sub_31794(3, 255);
    sub_226C0(0xBu, "Get max freq failed!");
    return -1;
  }
  else
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * v0 + 4) != 1 )
    {
LABEL_3:
      if ( ++v0 == 16 )
        return 0;
    }
    v1 = 312 * v0;
    memset((char *)&unk_1371C8 + 312 * v0, 0, 0x138u);
    if ( !sub_18D10(v0, (unsigned __int8)dword_9EE38, (int)&unk_1371C8 + 312 * v0) )
    {
      v3 = (char *)&unk_1371C4 + v1;
      while ( 1 )
      {
        v5 = *((_DWORD *)v3 + 1);
        v3 += 4;
        v4 = v5;
        if ( v5 > v6 )
          break;
        if ( v3 == (char *)&unk_1372FC + v1 )
          goto LABEL_3;
      }
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "Freq(%d) > Max_freq(%d), invalid!\n", v4, v6);
        sub_47AB4(3, s, 0);
      }
    }
    sub_31794(3, 255);
    sub_226C0(0xBu, "Get frequency failed!");
    return -1;
  }
}
