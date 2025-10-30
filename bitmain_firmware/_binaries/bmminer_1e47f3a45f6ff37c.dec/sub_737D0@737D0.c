int __fastcall sub_737D0(int a1, signed int a2, int a3)
{
  signed int v6; // [sp+8h] [bp-2Ch]
  int v7; // [sp+8h] [bp-2Ch]
  __int64 v9; // [sp+10h] [bp-24h] BYREF
  char *endptr; // [sp+1Ch] [bp-18h] BYREF
  __int64 v11; // [sp+20h] [bp-14h]
  char *nptr; // [sp+2Ch] [bp-8h]

  v6 = a2;
  *(_DWORD *)(a1 + 60) = -1;
  if ( a2 == 45 )
    v6 = sub_72E5C(a1, a3);
  if ( v6 == 48 )
  {
    v6 = sub_72E5C(a1, a3);
    if ( v6 > 47 && v6 <= 57 )
    {
LABEL_6:
      sub_72EE4((_DWORD *)a1, v6);
      return -1;
    }
  }
  else
  {
    if ( v6 <= 47 || v6 > 57 )
      goto LABEL_6;
    do
      v6 = sub_72E5C(a1, a3);
    while ( v6 > 47 && v6 <= 57 );
  }
  if ( (*(_DWORD *)(a1 + 52) & 8) != 0 || v6 == 46 || v6 == 69 || v6 == 101 )
  {
    if ( v6 == 46 )
    {
      v7 = sub_72DF0(a1, a3);
      if ( v7 <= 47 || v7 > 57 )
      {
        sub_72EB8((_DWORD *)a1, v7);
        return -1;
      }
      sub_72E24(a1, v7);
      do
        v6 = sub_72E5C(a1, a3);
      while ( v6 > 47 && v6 <= 57 );
    }
    if ( v6 == 69 || v6 == 101 )
    {
      v6 = sub_72E5C(a1, a3);
      if ( v6 == 43 || v6 == 45 )
        v6 = sub_72E5C(a1, a3);
      if ( v6 <= 47 || v6 > 57 )
        goto LABEL_6;
      do
        v6 = sub_72E5C(a1, a3);
      while ( v6 > 47 && v6 <= 57 );
    }
    sub_72EE4((_DWORD *)a1, v6);
    if ( sub_753FC(a1 + 40, &v9) )
    {
      sub_727DC(a3, (_DWORD *)a1, 15, "real number overflow");
      return -1;
    }
    *(_DWORD *)(a1 + 60) = 258;
    *(_QWORD *)(a1 + 64) = v9;
    return 0;
  }
  else
  {
    sub_72EE4((_DWORD *)a1, v6);
    nptr = (char *)sub_7507C(a1 + 40);
    *_errno_location() = 0;
    v11 = strtoll(nptr, &endptr, 10);
    if ( *_errno_location() == 34 )
    {
      if ( v11 >= 0 )
        sub_727DC(a3, (_DWORD *)a1, 15, "too big integer");
      else
        sub_727DC(a3, (_DWORD *)a1, 15, "too big negative integer");
      return -1;
    }
    if ( &nptr[*(_DWORD *)(a1 + 44)] != endptr )
      _assert_fail("end == saved_text + lex->saved_text.length", "load.c", 0x21Du, "lex_scan_number");
    *(_DWORD *)(a1 + 60) = 257;
    *(_QWORD *)(a1 + 64) = v11;
    return 0;
  }
}
