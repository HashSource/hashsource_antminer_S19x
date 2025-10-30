int __fastcall sub_84264(_DWORD *a1, const char *a2, const char *a3)
{
  _DWORD *v6; // r6
  int result; // r0
  _BYTE *v8; // r4
  FILE *v9; // r1
  _BYTE *v10; // t1
  _BYTE *v11; // r9
  int v12; // r3
  bool v13; // zf
  _BYTE v14[16]; // [sp+10h] [bp-1074h] BYREF
  __int16 v15; // [sp+20h] [bp-1064h]
  _BYTE v16[8]; // [sp+78h] [bp-100Ch] BYREF

  v6 = a1 + 1;
  result = fputs(off_B85B0[0], (FILE *)option_usage_fp);
  v8 = (_BYTE *)*a1;
  if ( v8 )
  {
    do
    {
      if ( sub_83F7C(v16, 0x1001u, v8, a3) )
      {
        if ( *v8 == 36 )
        {
          v12 = (unsigned __int8)v8[1];
          v11 = v16;
          v13 = v12 == 64;
          if ( v12 != 64 )
            v13 = v12 == 36;
          if ( v13 )
            v8 = v16;
        }
        else
        {
          v11 = v16;
        }
      }
      else
      {
        v11 = v8;
      }
      fprintf((FILE *)option_usage_fp, off_B85A4[0], v8);
      if ( *a2 && !_xstat64(3, v11, v14) )
      {
        v9 = (FILE *)option_usage_fp;
        if ( (v15 & 0xF000) != 0x4000 )
          goto LABEL_4;
        fputc(47, (FILE *)option_usage_fp);
        fputs(a2, (FILE *)option_usage_fp);
      }
      v9 = (FILE *)option_usage_fp;
LABEL_4:
      result = fputc(10, v9);
      v10 = (_BYTE *)*v6++;
      v8 = v10;
    }
    while ( v10 );
  }
  return result;
}
