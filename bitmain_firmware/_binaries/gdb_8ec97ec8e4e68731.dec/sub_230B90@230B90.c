int __fastcall sub_230B90(int a1, int a2, unsigned __int64 a3, int a4, unsigned __int64 a5, _DWORD *a6)
{
  unsigned __int64 v6; // r4
  size_t v7; // r6
  unsigned int v8; // r8
  char *v9; // r7
  size_t v10; // r9
  int v11; // r2
  int v12; // r0
  int v13; // r4
  char *v15; // r4
  char *v16; // r0
  int v17; // r8
  __int64 v18; // r0
  char *v19; // r4
  char *v20; // r0
  int v21; // r0
  __int64 v24; // [sp+18h] [bp-24h]
  __int64 v25; // [sp+20h] [bp-1Ch]
  __int64 v26; // [sp+28h] [bp-14h]

  v6 = a3;
  v7 = a5 + 15999;
  if ( (unsigned int)(a5 + 15999) <= a3 )
  {
    v8 = a5 + 15999;
  }
  else
  {
    v7 = a3;
    v8 = a3;
  }
  if ( v7 )
    v9 = (char *)sub_9836C(v7);
  else
    v9 = 0;
  if ( v8 == sub_22FF08(a1, 2u, 0, (int)v9, (unsigned int)a2, v8) )
  {
    v26 = v7 - 16000;
    while ( 1 )
    {
      v10 = v7 - 16000;
      do
      {
        if ( v6 < a5 )
        {
          v13 = 0;
          goto LABEL_20;
        }
        v11 = v7;
        if ( v7 > v6 )
          v11 = v6;
        v12 = memmem(v9, v11, a4, a5);
        if ( v12 )
        {
          v13 = 1;
          *a6 = v12 - (_DWORD)v9 + a2;
          goto LABEL_23;
        }
        if ( v6 > 0x3E7F )
          v6 -= 16000LL;
        else
          v6 = 0;
      }
      while ( a5 > v6 );
      v17 = a2 + v7;
      LODWORD(v25) = a5 - 1;
      HIDWORD(v25) = a5 - 1;
      if ( v26 != v25 )
      {
        sub_94700(
          (int)"target.c",
          2393,
          "%s: Assertion `%s' failed.",
          "int simple_search_memory(target_ops*, CORE_ADDR, ULONGEST, const gdb_byte*, ULONGEST, CORE_ADDR*)",
          "keep_len == pattern_len - 1");
        sub_339E64(v9);
        sub_338FFC(v21);
      }
      memcpy(v9, v9 + 16000, v10);
      v24 = v6 - v26;
      if ( v6 - v26 > 0x3E80 )
      {
        v24 = 16000;
        v18 = sub_22FF08(a1, 2u, 0, (int)&v9[v10], (unsigned int)v17, 16000);
      }
      else
      {
        v18 = sub_22FF08(a1, 2u, 0, (int)&v9[v10], (unsigned int)v17, v24);
      }
      if ( v24 != v18 )
        break;
      a2 += 16000;
    }
    v19 = sub_988AC(v24);
    v20 = sub_98B08(v17, 0);
    sub_946B0("Unable to access %s bytes of target memory at %s, halting search.", v19, v20);
  }
  else
  {
    v15 = sub_98880(v7, 0);
    v16 = sub_98B08(a2, 0);
    sub_946B0("Unable to access %s bytes of target memory at %s, halting search.", v15, v16);
  }
  v13 = -1;
LABEL_20:
  if ( !v9 )
    return v13;
LABEL_23:
  sub_339E64(v9);
  return v13;
}
