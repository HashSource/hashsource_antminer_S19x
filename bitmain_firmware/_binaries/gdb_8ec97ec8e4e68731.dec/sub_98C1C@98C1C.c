char *__fastcall sub_98C1C(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // r4
  signed int v6; // lr
  char *v7; // r7
  unsigned int v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r12
  int v12; // r7
  char *v13; // r7
  _BOOL4 v14; // r3
  int v15; // r3
  __int64 v16; // r2
  int v17; // r3
  const char *v18; // r2
  _BOOL4 v19; // r6
  int v20; // [sp+0h] [bp-20h]
  int v21; // [sp+4h] [bp-1Ch]
  int v22; // [sp+14h] [bp-Ch]
  int v23; // [sp+18h] [bp-8h]
  int v24; // [sp+1Ch] [bp-4h]

  v5 = a1;
  v6 = a4;
  switch ( a2 )
  {
    case 10:
      if ( a3 )
        v15 = HIDWORD(a1) >> 31;
      else
        v15 = 0;
      if ( v15 )
      {
        LODWORD(a1) = &word_3C1464;
        v16 = -__SPAIR64__(HIDWORD(a1), v5);
      }
      else
      {
        LODWORD(a1) = "";
        v16 = __PAIR64__(HIDWORD(a1), v5);
      }
      return sub_986E0((const char *)a1, SHIDWORD(a1), v16, SHIDWORD(v16), a4);
    case 16:
LABEL_5:
      if ( v6 )
        v7 = (char *)sub_98B60(a1, SHIDWORD(a1), v6, a3, v20, v21);
      else
        v7 = sub_98B08(a1, SHIDWORD(a1));
      if ( !a5 )
        v7 += 2;
      return v7;
    case 8:
      v9 = a1;
      v10 = HIDWORD(v5);
      v11 = 0;
      v12 = dword_475844 + 1;
      if ( dword_475844 + 1 > 15 )
      {
        v13 = byte_475524;
        dword_475844 = 0;
      }
      else
      {
        ++dword_475844;
        v13 = &byte_475524[50 * v12];
      }
      while ( 1 )
      {
        *(&v22 + v11++) = v9 & 0x3FFFFFFF;
        v9 = (v9 >> 30) | (4 * v10);
        v10 >>= 30;
        v14 = (v9 | v10) == 0;
        if ( v11 > 2 )
          v14 = 1;
        if ( v14 )
          break;
        v6 -= 10;
      }
      v17 = v6 & ~(v6 >> 31);
      if ( v11 == 2 )
      {
        sub_93170(v13, 0x32u, "0%0*lo%010lo", v17, v23, v22);
      }
      else if ( v11 == 3 )
      {
        sub_93170(v13, 0x32u, "0%0*lo%010lo%010lo", v17, v24, v23, v22);
      }
      else
      {
        if ( v22 )
          LOWORD(v18) = -1184;
        else
          LOWORD(v18) = -1188;
        HIWORD(v18) = 54;
        sub_93170(v13, 0x32u, v18, v17, v22);
      }
      if ( a5 )
        v19 = 1;
      else
        v19 = v5 == 0;
      if ( !v19 )
        ++v13;
      return v13;
    default:
      a1 = sub_94700((int)"common/print-utils.c", 287, "failed internal consistency check");
      goto LABEL_5;
  }
}
