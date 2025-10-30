int __fastcall sub_DC24C(_BYTE *a1, int a2)
{
  int result; // r0
  int v5; // r2
  int v6; // r3
  bool v7; // cc
  int v8; // r4
  _BYTE v9[4]; // [sp+4h] [bp-10h] BYREF
  _BYTE *v10; // [sp+8h] [bp-Ch]
  int (__fastcall *v11)(int, int); // [sp+Ch] [bp-8h]

  result = sub_243C34(a1);
  if ( a1 )
  {
    v10 = v9;
    v11 = sub_CC224;
    return sub_CABA0(a1, (int)v9, (int (__fastcall *)(int, int, int))sub_CC224);
  }
  v5 = dword_478348;
  if ( dword_478348 )
  {
    result = *(_DWORD *)(dword_478348 + 24);
    if ( result > 0 )
    {
LABEL_16:
      if ( a2 )
      {
        result = sub_25A3E4("Delete all breakpoints? ");
        if ( !result )
          return result;
        v5 = dword_478348;
        if ( !dword_478348 )
          return result;
        result = *(_DWORD *)(dword_478348 + 24);
      }
    }
    else
    {
      v6 = dword_478348;
      while ( 1 )
      {
        v6 = *(_DWORD *)(v6 + 8);
        if ( !v6 )
          break;
        if ( *(int *)(v6 + 24) > 0 )
          goto LABEL_16;
      }
      if ( a2 )
        return result;
    }
    while ( 1 )
    {
      v7 = result <= 0;
      v8 = *(_DWORD *)(v5 + 8);
      result = v5;
      if ( !v7 )
        result = ((int (__fastcall *)(int))loc_DB0B0)(v5);
      v5 = v8;
      if ( !v8 )
        break;
      result = *(_DWORD *)(v8 + 24);
    }
  }
  return result;
}
