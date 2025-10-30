void *__fastcall sub_2007B8(int a1, int *a2)
{
  const char *v3; // r5
  int v4; // r0
  const char *v5; // r7
  size_t v6; // r0
  const char *v7; // r3
  int v8; // r2
  int v9; // t1
  size_t v10; // r4
  const char *v11; // r1
  _DWORD savedregs[8]; // [sp+0h] [bp-1Ch] BYREF

  v3 = (const char *)a1;
  v4 = sub_16F654(a1);
  v5 = (const char *)((int (__fastcall *)(int))loc_16DD18)(v4);
  if ( v5 )
  {
    v6 = strlen(v3);
    v7 = &v3[v6];
    v8 = (unsigned __int8)v3[v6];
    if ( v3 < &v3[v6] )
    {
      while ( v8 != 46 )
      {
        v9 = *(unsigned __int8 *)--v7;
        v8 = v9;
        if ( v3 == v7 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( v8 != 46 )
        return sub_1FFD48((int)v3, a2, 1);
    }
    v10 = v7 - v3;
    strlen(v5);
    ++v10;
    v11 = v3;
    v3 = (const char *)savedregs;
    memcpy(savedregs, v11, v10);
    strcpy((char *)savedregs + v10, v5);
  }
  return sub_1FFD48((int)v3, a2, 1);
}
