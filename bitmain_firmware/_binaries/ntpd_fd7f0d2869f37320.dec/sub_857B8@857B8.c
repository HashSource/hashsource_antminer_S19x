int __fastcall sub_857B8(_DWORD *a1, const char *a2, const char *a3)
{
  _DWORD *v6; // r6
  int result; // r0
  _BYTE *v8; // r4
  _BYTE *v9; // t1
  _BYTE *v10; // r8
  int v11; // r3
  bool v12; // zf
  _BYTE v13[16]; // [sp+10h] [bp-1074h] BYREF
  __int16 v14; // [sp+20h] [bp-1064h]
  _BYTE v15[8]; // [sp+78h] [bp-100Ch] BYREF

  v6 = a1 + 1;
  result = fputs(off_B95B4, (FILE *)option_usage_fp);
  v8 = (_BYTE *)*a1;
  if ( v8 )
  {
    do
    {
      if ( sub_854CC(v15, 0x1001u, v8, a3) )
      {
        if ( *v8 == 36 )
        {
          v11 = (unsigned __int8)v8[1];
          v10 = v15;
          v12 = v11 == 36;
          if ( v11 != 36 )
            v12 = v11 == 64;
          if ( v12 )
            v8 = v15;
        }
        else
        {
          v10 = v15;
        }
      }
      else
      {
        v10 = v8;
      }
      fprintf((FILE *)option_usage_fp, off_B95A8, v8);
      if ( *a2 && !_xstat64(3, v10, v13) && (v14 & 0xF000) == 0x4000 )
      {
        fputc(47, (FILE *)option_usage_fp);
        fputs(a2, (FILE *)option_usage_fp);
      }
      result = fputc(10, (FILE *)option_usage_fp);
      v9 = (_BYTE *)*v6++;
      v8 = v9;
    }
    while ( v9 );
  }
  return result;
}
