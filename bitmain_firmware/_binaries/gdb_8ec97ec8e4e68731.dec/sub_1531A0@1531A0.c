void __fastcall sub_1531A0(_DWORD *a1)
{
  int *v1; // r12
  __int64 v3; // r0
  int v4; // r3
  int v5; // r2

  v1 = dword_487320;
  HIDWORD(v3) = *a1;
  LODWORD(v3) = dword_487324;
  if ( dword_487324 == HIDWORD(v3) )
  {
    dword_487324 = *(_DWORD *)(dword_487324 + 4);
    v4 = dword_487324;
    if ( dword_487324 )
      goto LABEL_11;
    goto LABEL_15;
  }
  if ( dword_487324 )
  {
    v4 = *(_DWORD *)(dword_487324 + 4);
    if ( HIDWORD(v3) == v4 )
      goto LABEL_9;
    while ( v4 )
    {
      if ( HIDWORD(v3) == *(_DWORD *)(v4 + 4) )
        goto LABEL_10;
      v4 = *(_DWORD *)(v4 + 4);
    }
  }
  v3 = sub_94700(
         (int)"event-loop.c",
         999,
         "%s: Assertion `%s' failed.",
         "void delete_async_signal_handler(async_signal_handler**)",
         "prev_ptr");
LABEL_9:
  v4 = v3;
LABEL_10:
  v5 = v1[2];
  *(_DWORD *)(v4 + 4) = *(_DWORD *)(HIDWORD(v3) + 4);
  LODWORD(v3) = *a1;
  if ( v5 == *a1 )
LABEL_15:
    v1[2] = v4;
LABEL_11:
  if ( (_DWORD)v3 )
    free((void *)v3);
  *a1 = 0;
}
