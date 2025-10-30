_DWORD *__fastcall sub_DBC70(_BYTE *a1, int a2)
{
  _DWORD *result; // r0
  _DWORD *v5; // r3
  _DWORD *v6; // r4
  _BYTE v7[4]; // [sp+4h] [bp-10h] BYREF
  _BYTE *v8; // [sp+8h] [bp-Ch]
  int (__fastcall *v9)(int, int); // [sp+Ch] [bp-8h]

  sub_243C34(a1);
  if ( a1 )
  {
    v8 = v7;
    v9 = sub_CC108;
    return (_DWORD *)sub_CABA0(a1, (int)v7, (int (__fastcall *)(int, int, int))sub_CC108);
  }
  else
  {
    result = (_DWORD *)dword_478348;
    if ( dword_478348 )
    {
      v5 = (_DWORD *)dword_478348;
      while ( (unsigned int)(v5[3] - 27) > 2 || (int)v5[6] <= 0 )
      {
        v5 = (_DWORD *)v5[2];
        if ( !v5 )
        {
          if ( a2 )
            return result;
          goto LABEL_10;
        }
      }
      if ( a2 )
      {
        result = (_DWORD *)sub_25A3E4("Delete all tracepoints? ");
        if ( !result )
          return result;
        result = (_DWORD *)dword_478348;
        if ( !dword_478348 )
          return result;
      }
      do
      {
LABEL_10:
        v6 = (_DWORD *)result[2];
        if ( (unsigned int)(result[3] - 27) <= 2 && (int)result[6] > 0 )
          ((void (*)(void))loc_DB0B0)();
        result = v6;
      }
      while ( v6 );
    }
  }
  return result;
}
