int __fastcall sub_23F298(int result, unsigned int a2, unsigned int a3, int a4)
{
  int v5; // r9
  int i; // r4
  int v7; // r10
  int v8; // r2
  int v9; // [sp+Ch] [bp-Ch] BYREF
  unsigned __int64 v10; // [sp+10h] [bp-8h]

  v9 = result;
  v10 = __PAIR64__(a3, a2);
  if ( unk_46BBCC == result && v10 == qword_46BBD0 )
  {
    v5 = 1;
LABEL_5:
    for ( i = dword_48A4D4; i; i = *(_DWORD *)(i + 4) )
    {
      if ( !v5 )
      {
        v7 = ps_getpid_0(i + 8);
        result = ps_getpid_0((int)&v9);
        if ( v7 != result )
          continue;
      }
      *(_DWORD *)(i + 36) = a4;
    }
    goto LABEL_18;
  }
  result = sub_98FB8(&v9);
  if ( result )
  {
    v5 = 0;
    goto LABEL_5;
  }
  result = v9;
  v8 = dword_48A4D4;
  if ( !dword_48A4D4 )
  {
LABEL_22:
    result = sub_94700((int)"thread.c", 1005, "%s: Assertion `%s' failed.", "void set_executing(ptid_t, int)", "tp");
LABEL_23:
    if ( qword_46BBD0 == v10 )
      dword_48A4E0 = a4;
    return result;
  }
  while ( *(_DWORD *)(v8 + 8) != v9 || v10 != *(_QWORD *)(v8 + 12) )
  {
    v8 = *(_DWORD *)(v8 + 4);
    if ( !v8 )
      goto LABEL_22;
  }
  *(_DWORD *)(v8 + 36) = a4;
LABEL_18:
  if ( a4 )
  {
    dword_48A4E0 = 1;
    return result;
  }
  if ( unk_46BBCC == v9 )
    goto LABEL_23;
  return result;
}
