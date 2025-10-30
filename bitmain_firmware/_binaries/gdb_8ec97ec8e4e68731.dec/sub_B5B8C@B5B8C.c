char **__fastcall sub_B5B8C(char **a1, int a2, int a3)
{
  int v5; // r3
  int v6; // r5
  int v7; // r3
  int v9; // r6
  int v10; // r7
  bool v11; // zf
  int v12; // [sp+4h] [bp-70h] BYREF
  int v13; // [sp+8h] [bp-6Ch] BYREF
  void *ptr; // [sp+Ch] [bp-68h] BYREF
  char v15; // [sp+14h] [bp-60h] BYREF
  _BYTE v16[40]; // [sp+24h] [bp-50h] BYREF
  int v17; // [sp+4Ch] [bp-28h]

  sub_270680(v16, a3);
  v5 = *(_DWORD *)(a2 + 80);
  v13 = *(_DWORD *)(a2 + 76);
  v12 = v5;
  sub_B5774(&v12, &v13);
  v6 = v13;
  v7 = **(char **)(v13 + 24);
  if ( v7 == 2 )
  {
    v9 = v12;
    v10 = sub_B55AC(v12, v13);
    if ( v9 && sub_A249C(v6) )
    {
      v11 = v17 == 115;
      if ( v17 != 115 )
        v11 = v17 == 0;
      if ( v11 )
      {
        sub_B56A8(&ptr, v9, (int)v16);
        sub_931D8(a1, "[%d] %s", v10, (const char *)ptr);
        if ( ptr != &v15 )
          sub_339E64(ptr);
        return a1;
      }
    }
    sub_931D8(a1, "[%d]", v10);
    return a1;
  }
  else
  {
    if ( v7 >= 2 && v7 <= 4 )
    {
      *a1 = (char *)(a1 + 2);
      sub_B5B00(a1, "{...}", (int)"");
      return a1;
    }
    if ( !v12 )
    {
      *a1 = (char *)(a1 + 2);
      sub_B5B00(a1, "", (int)"");
      return a1;
    }
    sub_B56A8(a1, v12, (int)v16);
    return a1;
  }
}
