int __fastcall sub_1C6054(int a1, int (__fastcall *a2)(_DWORD *, int, _DWORD *), int a3)
{
  int result; // r0
  int v6; // r1
  int v7; // r2
  const char *v8; // r9
  int v9; // r1
  _DWORD *v10; // r2
  _DWORD *v11; // r0
  _BYTE v12[4]; // [sp+0h] [bp-1Ch] BYREF
  const char *v13; // [sp+4h] [bp-18h]

  if ( !a1 )
    sub_51E9C("one or more display numbers");
  result = sub_5ADF4((int)v12, a1);
  while ( !v12[0] )
  {
    while ( 1 )
    {
      v8 = v13;
      v9 = sub_5AE34((int)v12, v6, v7);
      if ( v9 )
        break;
      result = sub_946B0("bad display number at or near '%s'", v8);
      if ( v12[0] )
        return result;
    }
    if ( dword_487CEC )
    {
      v10 = *(_DWORD **)(dword_487CEC + 12);
      v11 = *(_DWORD **)dword_487CEC;
      if ( v10 != (_DWORD *)v9 )
      {
        while ( v11 )
        {
          v10 = (_DWORD *)*v11;
          if ( v11[3] == v9 )
            goto LABEL_14;
          v11 = (_DWORD *)*v11;
        }
        goto LABEL_13;
      }
      v11 = (_DWORD *)dword_487CEC;
LABEL_14:
      result = a2(v11, a3, v10);
    }
    else
    {
LABEL_13:
      result = sub_259858("No display number %d.\n", v9);
    }
  }
  return result;
}
