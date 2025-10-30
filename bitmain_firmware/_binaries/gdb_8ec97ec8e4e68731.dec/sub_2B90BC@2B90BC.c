int __fastcall sub_2B90BC(int a1, const char *a2)
{
  _DWORD *v2; // r4
  int v4; // r0
  const char **v6; // r9
  size_t v7; // r0
  char *v8; // r6
  int v9; // r5
  int v11; // r1
  int v12; // r5
  char v13; // r3
  int v14; // r1
  int v15; // r3
  int v16; // [sp+1Ch] [bp-8h] BYREF

  v2 = *(_DWORD **)(a1 + 28);
  if ( v2[11] != 4 )
  {
    sub_2A6BBC("elf32-arm.c", 6952);
    __und(0);
  }
  v4 = v2[90];
  if ( !v4 )
  {
    sub_2A6BBC("elf32-arm.c", 6953);
    v4 = v2[90];
  }
  v6 = sub_2AD864(v4, ".glue_7");
  if ( !v6 )
    sub_2A6BBC("elf32-arm.c", 6958);
  v7 = strlen(a2);
  v8 = (char *)sub_2AB368(v7 + 14);
  if ( !v8 )
    sub_2A6BBC("elf32-arm.c", 6963);
  sprintf(v8, "__%s_from_arm", a2);
  v9 = sub_2FC920(v2, v8, 0);
  if ( v9 )
  {
    free(v8);
    return v9;
  }
  else
  {
    v11 = v2[90];
    v16 = 0;
    sub_2FD6C4(a1, v11, (int)v8, 2, (int)v6, v2[69] + 1, 0, 1, 0, (int)&v16);
    v12 = v16;
    v13 = *(_BYTE *)(v16 + 52);
    *(_BYTE *)(v16 + 48) = 2;
    *(_BYTE *)(v12 + 52) = v13 | 8;
    free(v8);
    if ( (*(_BYTE *)a1 & 1) != 0 || v2[13] || v2[102] )
    {
      v14 = 16;
    }
    else if ( v2[97] )
    {
      v14 = 8;
    }
    else
    {
      v14 = 12;
    }
    v15 = v2[69] + v14;
    v6[9] += v14;
    v2[69] = v15;
    return v12;
  }
}
