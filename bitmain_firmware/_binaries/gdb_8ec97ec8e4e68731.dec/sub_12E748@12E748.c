int __fastcall sub_12E748(int a1, int a2, _DWORD *a3)
{
  int result; // r0
  int v7; // r2
  bool v8; // zf
  int v9; // r3
  const char *v10; // r4
  int v11; // r0
  int v12; // r0
  int v13; // r6
  const char *v14; // r0

  result = sub_12E694(a1, a2, (int)a3);
  if ( result )
  {
    v7 = *(_WORD *)(result + 2) & 0x7FFF;
    v8 = v7 == 31;
    if ( v7 != 31 )
      v8 = v7 == 14;
    v9 = v8;
    if ( v7 == 8 )
      v9 |= 1u;
    if ( v7 == 7938 )
      v9 |= 1u;
    if ( v7 == 7969 )
      v9 |= 1u;
    if ( v9 )
    {
      return *(_DWORD *)(result + 8);
    }
    else if ( dword_47AC88 > 0 )
    {
      if ( a2 == 0x2000 )
      {
        v10 = "DW_AT_HP_block_index";
      }
      else
      {
        v11 = a2;
        v10 = "DW_AT_<unknown>";
        v12 = sub_321970(v11, 7969);
        if ( v12 )
          v10 = (const char *)v12;
      }
      v13 = *(_DWORD *)(a1 + 8);
      v14 = (const char *)sub_1B87A8(*a3);
      sub_F43B4(&off_46D334, "string type expected for attribute %s for DIE at 0x%x in module %s", v10, v13, v14);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
