int __fastcall sub_453FC(int *a1, const char *a2, unsigned __int8 *a3, int a4)
{
  int v4; // r11
  unsigned __int8 *v6; // r6
  int result; // r0
  unsigned __int8 *v8; // r9
  char *v9; // r4
  bool v10; // zf
  int v11; // r5
  int v12; // t1
  const char *v13; // r2
  char v14; // r3
  int v15; // t1
  unsigned __int8 *v16; // r0
  char v17; // r3
  int v18; // t1
  _BYTE v19[8]; // [sp+Ch] [bp-10h] BYREF

  v4 = *a1;
  v6 = a3;
  result = _stack_chk_guard;
  if ( debug > 1 )
  {
    v8 = &a3[a4];
    v9 = byte_BDD74;
    while ( 1 )
    {
      v10 = v9 == (char *)&unk_BE573;
      if ( v9 != (char *)&unk_BE573 )
        v10 = v8 == v6;
      if ( v10 )
        break;
      v12 = *v6++;
      v11 = v12;
      if ( v12 == 92 )
      {
        v13 = "\\\\";
        do
        {
          v15 = *(unsigned __int8 *)v13++;
          v14 = v15;
          if ( !v15 )
            break;
          *v9++ = v14;
        }
        while ( v9 != (char *)&unk_BE573 );
      }
      else if ( ((*_ctype_b_loc())[v11] & 0x4000) != 0 )
      {
        *v9++ = v11;
      }
      else
      {
        sub_6D00C(v19, 6, "\\%03o", v11);
        v16 = v19;
        do
        {
          v18 = *v16++;
          v17 = v18;
          if ( !v18 )
            break;
          *v9++ = v17;
        }
        while ( v9 != (char *)&unk_BE573 );
      }
    }
    *v9 = 0;
    return sub_65C68("%s[%s]: '%s'\n", *(const char **)(v4 + 20), a2, byte_BDD74);
  }
  return result;
}
