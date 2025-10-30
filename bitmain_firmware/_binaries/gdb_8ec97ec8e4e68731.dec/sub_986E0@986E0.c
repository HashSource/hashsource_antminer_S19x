char *__fastcall sub_986E0(const char *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v7; // r6
  int v9; // r8
  char *v10; // r8
  int v11; // r2
  __int64 v12; // r0
  _BOOL4 v13; // r3
  int v14; // r7
  int v17; // [sp+1Ch] [bp-10h]
  int v18; // [sp+20h] [bp-Ch]
  int v19; // [sp+24h] [bp-8h]

  v7 = 0;
  v9 = dword_475844 + 1;
  if ( dword_475844 + 1 > 15 )
  {
    v10 = (char *)&unk_475524;
    dword_475844 = 0;
  }
  else
  {
    ++dword_475844;
    v10 = (char *)&unk_475524 + 50 * v9;
  }
  while ( 1 )
  {
    sub_347F74(a3, a4, 1000000000, 0);
    *(&v17 + v7++) = v11;
    v12 = sub_347F74(a3, a4, 1000000000, 0);
    a3 = v12;
    v13 = v12 == 0;
    if ( v7 > 2 )
      v13 = 1;
    a4 = HIDWORD(v12);
    if ( v13 )
      break;
    a5 -= 9;
  }
  v14 = a5 & ~(a5 >> 31);
  if ( v7 == 2 )
  {
    sub_93170(v10, 0x32u, "%s%0*lu%09lu", a1, v14, v18, v17);
    return v10;
  }
  else
  {
    if ( v7 == 3 )
      sub_93170(v10, 0x32u, "%s%0*lu%09lu%09lu", a1, v14, v19, v18, v17);
    else
      sub_93170(v10, 0x32u, "%s%0*lu", a1, v14, v17);
    return v10;
  }
}
